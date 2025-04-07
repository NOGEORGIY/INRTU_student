function script_path()  
    local str = debug.getinfo(2, "S").source:sub(2)  
    return str:match("(.*/)")  
end  

local path = script_path() .. "/Lua/LuaFFT/src/?.lua"  
package.path = package.path .. ";" .. path  

luafft = require("luafft")  
complex = require("complex")  

t = 1 -- Длительность сигнала (сек)
sf = 8192-- Частота дискретизации (Гц)

f1 = {100}      
a1 = {1}
f2 = {100, 300, 700}  
a2 = {1, 1, 1}
f3 = {100, 300, 700}  
a3 = {3, 2, 1}

function freq_gen(t, sf, freqs, amps)
    local n = sf * t
    local signal = {}
    for i = 0, n-1 do
        local time = i / sf
        local sum = 0
        for j = 1, #freqs do
            sum = sum + amps[j] * math.cos(2 * math.pi * freqs[j] * time)
        end
        signal[i+1] = sum
    end
    return signal
end


function freq_gen_random(t, sf, freqs, amps, factor)
    local n = sf * t
    local signal = {}
    for i = 0, n-1 do
        local time = i / sf
        local sum = 0
        for j = 1, #freqs do
            sum = sum + amps[j] * math.cos(2 * math.pi * freqs[j] * time)
        end
        signal[i+1] = sum + math.random() * factor
    end
    return signal
end


function to_complex(signal)
    local complex_signal = {}
    for i, val in ipairs(signal) do
        complex_signal[i] = complex.new(val, 0)
    end
    return complex_signal
end

function save_spectrum(spectrum, sf, filename)
    local file = io.open(filename, "w")
    file:write("Frequency, Amplitude\n")
    
    local N = #spectrum
    for i = 1, N//2 do
        local freq = (i-1) * sf / N
        local amp = spectrum[i]:abs() / N
        if i ~= 1 then amp = amp * 2 end -- Удваиваем амплитуды (кроме DC)
        file:write(string.format("%.1f,%.4f\n", freq, amp))
    end
    file:close()
end

function save_function(func, sf, filename)
    local file = io.open(filename, "w")
    file:write("Time, value\n")
    
    local N = #func
    for i = 1, #func do
        local time = i/sf
        file:write(string.format("%.8f,%.8f\n", time, func[i]))
    end
    file:close()
end

print("Добавить ли случайные числа в конце массива? (y/n)")
local choise = io.read()


if choise == "y" then 
    print("Множитель случайных чисел?")
    local factor = io.read()
    freq1_r = freq_gen_random(t, sf, f1, a1, factor)
    freq2_r = freq_gen_random(t, sf, f2, a2, factor)
    freq3_r = freq_gen_random(t, sf, f3, a3, factor)
    signal1 = to_complex( freq1_r)
    signal2 = to_complex( freq2_r)
    signal3 = to_complex( freq3_r)
    save_function(freq1_r, 8192, "function1_random.txt")
    save_function(freq2_r, 8192, "function2_random.txt")
    save_function(freq3_r, 8192, "function3_random.txt")
else 
    freq1_r = freq_gen(t, sf, f1, a1)
    freq2_r = freq_gen(t, sf, f2, a2)
    freq3_r = freq_gen(t, sf, f3, a3)
    signal1 = to_complex(freq_gen(t, sf, f1, a1))
    signal2 = to_complex(freq_gen(t, sf, f2, a2))
    signal3 = to_complex(freq_gen(t, sf, f3, a3))
    save_function(freq1_r, 8192, "function1.txt")
    save_function(freq2_r, 8192, "function2.txt")
    save_function(freq3_r, 8192, "function3.txt")
end

local spec1 = luafft.fft(signal1, false)
local spec2 = luafft.fft(signal2, false)
local spec3 = luafft.fft(signal3, false)

save_spectrum(spec1, sf, "spec1.txt")
save_spectrum(spec2, sf, "spec2.txt")
save_spectrum(spec3, sf, "spec3.txt")

print("Значения функций сохранены")
print("Спектры сохранены")