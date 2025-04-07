#include "func.h"
#include "speedTest.h"
#include "tests.h"

int main() {

    setlocale(LC_ALL, "Russian");
    //Создание контейнеров
    array<int, 5> numbers_ar; // Создание контейнера Array
    vector<int> numbers_vec;  // Создание контейнера Vector
    list<int> numbers_list;   // Создание контейнера List
    set<int> numbers_set;     // Создание контейнера Set
    map<int, Employee> numbers_map; // Создание контейнера (Ключ, Значение) Map
    multimap<int, Employee>
        numbers_multimap; // Создание контейнера (Ключ, Значение) multiMap
    unordered_set<int> numbers_un_set; // Создание контейнера Unordered_set

    //////////Инициализация/////////////////
    //////////////array/////////////////////

    numbers_ar = {}; //Заполняет нулями

    numbers_ar = { 1, 2, 3, 4, 5 }; //Заполняет конкр. знач.

    array<int, 5> fragment{ 1, 2, 3, 4, 5 };

    int i = 0;
    for (int n : fragment) {
        numbers_ar[i] =
            n; //Заполнение элементами другого массива в цикле for по индексам
        i++;
    }

    numbers_ar.fill(5); //Заполняет все ячейки числом 5

    //////////Инициализация/////////////////
    //////////////vector/////////////////////

    numbers_vec = {}; //Неопределённые элементы

    for (int i = 1; i < 6; i++) {
        numbers_vec.push_back(
            i); //Заполнение числаами по порядку с помощью push_back()
    }

    numbers_vec = { 1, 2, 3, 4, 5 }; //Заполняет конкр. знач.

    for (int i = 0; i < numbers_vec.size(); i++) {
        numbers_vec[i] = i + 1; //Заполнение числами по порядку по индексу в for
    }

    //////////Инициализация/////////////////
    //////////////list/////////////////////

    numbers_list = {}; //Неопределённые элементы

    numbers_list = { 1, 2, 3, 4, 5 }; //Определённые элементы

    list<int> list_for_copy = { 1, 2, 3, 4, 5 };
    numbers_list = list_for_copy; //Копирование list

    list<int> list_for_for{};
    for (int i = 0; i < 5; i++) {
        list_for_for.push_back(i); // Добавление элементов в list через push_back()
    }

    //////////Инициализация/////////////////
    //////////////set/////////////////////

    numbers_set = {}; //Неопределённые элементы

    numbers_set = { 1, 2, 3, 4, 5 }; //Определённые элементы

    set<int> set_for_copy = { 1, 2, 3, 4, 5 };
    numbers_set = set_for_copy; //Копирование set

    set<int> set_for_for{};
    for (int i = 0; i < 5; i++) {
        set_for_for.insert(i); // Добавление элементов в set через insert()
    }

    //////////Инициализация////////////////
    //////////////map/////////////////////

    numbers_map = {}; //Неопределённые элементы

    numbers_map = {
        pair<int, Employee>{1, {"Иванов Иван Иванович", 1, 1, 1, "Программист"}},
        pair<int, Employee>{2,
                            {"Васильевич Василий Васильев", 2, 2, 2, "Доктор"}},
        pair<int, Employee>{3, {"Козлов Козлов Козлов", 3, 3, 3, "Фермер"}},
    }; //Добавление через полное определение

    numbers_map = {
        {1, {"Иванов Иван Иванович", 1, 1, 1, "Программист"}},
        {2, {"Васильевич Василий Васильев", 2, 2, 2, "Доктор"}},
        {3, {"Козлов Козлов Козлов", 3, 3, 3, "Фермер"}},
    }; //Добавление через сокращенное определение

    map<int, Employee> numbers_map_for_copy = {
        {1, {"Иванов Иван Иванович", 1, 1, 1, "Программист"}},
        {2, {"Васильевич Василий Васильев", 2, 2, 2, "Доктор"}},
        {3, {"Козлов Козлов Козлов", 3, 3, 3, "Фермер"}},
    };

    numbers_map =
        numbers_map_for_copy; // Копирование элементов одного map в другой

    //////////Инициализация////////////////
    //////////////multimap/////////////////

    numbers_multimap = {}; //Неопределённые элементы

    numbers_multimap = {
        pair<int, Employee>{1, {"Иванов Иван Иванович", 1, 1, 1, "Программист"}},
        pair<int, Employee>{2,
                            {"Васильевич Василий Васильев", 2, 2, 2, "Доктор"}},
        pair<int, Employee>{3, {"Козлов Козлов Козлов", 3, 3, 3, "Фермер"}},
    }; //Добавление через полное определение

    numbers_multimap = {
        {1, {"Иванов Иван Иванович", 1, 1, 1, "Программист"}},
        {2, {"Васильевич Василий Васильев", 2, 2, 2, "Доктор"}},
        {3, {"Козлов Козлов Козлов", 3, 3, 3, "Фермер"}},
    }; //Добавление через сокращенное определение

    multimap<int, Employee> numbers_multimap_for_copy = {
        {1, {"Иванов Иван Иванович", 1, 1, 1, "Программист"}},
        {2, {"Васильевич Василий Васильев", 2, 2, 2, "Доктор"}},
        {3, {"Козлов Козлов Козлов", 3, 3, 3, "Фермер"}},
    };

    numbers_multimap = numbers_multimap_for_copy; // Копирование элементов одного
    // multimap в другой

    //////////Инициализация////////////////
    /////////unordered_set////////////////

    numbers_un_set = {}; //Неопределённые элементы

    numbers_un_set = { 1, 2, 3, 4, 5 }; //Определённые элементы

    unordered_set<int> un_set_for_copy = { 1, 2, 3, 4, 5 };
    numbers_un_set = un_set_for_copy; //Копирование un_set

    unordered_set<int> un_set_for_for{};
    for (int i = 0; i < 5; i++) {
        un_set_for_for.insert(i); // Добавление элементов в un_set через insert()
    }

    /////////////////////////////////////////////////////////////////////////////
    //тестирование///////////////////////////////////////////////////////////////
    /////////////////////////////////////////////////////////////////////////////

    int chos = 0;

    while (chos == 0 || chos == 1 || chos == 2 || chos == 3 || chos == 4 ||
        chos == 5 || chos == 6 || chos == 7) {

        cout << "Тестирвание какого контейнера вы хотите провести?\n";
        cout << "[1] Array\n";
        cout << "[2] List\n";
        cout << "[3] Map\n";
        cout << "[4] Multimap\n";
        cout << "[5] Set\n";
        cout << "[6] Unordered_set\n";
        cout << "[7] Vector\n";
        cout << "[8] Проверка скорости операций контейнеров\n";
        cout << "[any other num] End\n\n";
        cin >> chos;

        if (chos == 1)
            test_array();
        if (chos == 2)
            test_list();
        if (chos == 3)
            test_map();
        if (chos == 4)
            test_multimap();
        if (chos == 5)
            test_set();
        if (chos == 6)
            test_unordered_set();
        if (chos == 7)
            test_vector();
        if (chos == 8)
            initial_cont();
    }
}
