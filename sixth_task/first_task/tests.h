#ifndef TestFuncLib
#define TestFuncLib
#include "func.h"

//Тестирование операций array
void test_array() {
    cout << "Инициализация контейнера array\n";
    cout << "Элементы контейнера {1,2,3,4,5}\n\n";

    array<int, 5> a = { 1, 2, 3, 4, 5 };
    cout << "array:\n";
    output_of_elements(a);

    cout << "Array - статический массив, поэтому в него нельзя добавлять новые "
        "элементы, только заменять.\n\n";

    cout << "Удалим первый элемент\n";
    array<int, 4> b;
    b = del_elem_arr(a, 0);
    cout << "array:\n";
    output_of_elements(b);

    cout << "Изменим второй элемент на 100\n";
    change_elem(b, 1, 100);
    cout << "array:\n";
    output_of_elements(b);

    cout << "Индекс какого элемента вы бы хотели найти?\n";
    int choise;
    cin >> choise;
    find_elem(b, choise);

    cout << "Скопируем элменты одного контейнера в другой\n";
    cout << "Элементы нового контейнера {6, 7, 8, 9}\n\n";

    array<int, 4> ac = { 6, 7, 8, 9 };
    b = ac;
    cout << "array:\n";
    output_of_elements(b);
}

//Тестирование операций list
void test_list() {
    cout << "Инициализация контейнера list\n";
    cout << "Элементы контейнера {1,2,3,4,5}\n\n";

    list<int> a = { 1, 2, 3, 4, 5 };
    cout << "list:\n";
    output_of_elements(a);

    cout << "Удалим первый элемент\n";
    del_elem(a, 0);
    cout << "list:\n";
    output_of_elements(a);

    cout << "Добавим элемент 909\n";
    a = vladd(a, 909);
    cout << "list:\n";
    output_of_elements(a);

    cout << "Изменим все элементы с помощью assign({13, 23, 5})\n";
    a.assign({ 13, 23, 5 });
    cout << "list:\n";
    output_of_elements(a);

    cout << "Индекс какого элемента вы бы хотели найти?\n";
    int choise;
    cin >> choise;
    find_elem(a, choise);

    cout << "Скопируем элменты одного контейнера в другой\n";
    cout << "Элементы нового контейнера {6, 7, 8, 9, 10}\n\n";

    list<int> ac = { 6, 7, 8, 9, 10 };
    a = ac;
    cout << "list:\n";
    output_of_elements(a);
}

//Тестирование операций vector
void test_vector() {
    cout << "Инициализация контейнера vector\n";
    cout << "Элементы контейнера {1,2,3,4,5}\n\n";

    vector<int> a = { 1, 2, 3, 4, 5 };
    cout << "vector:\n";
    output_of_elements(a);

    cout << "Удалим первый элемент\n";
    del_elem(a, 0);
    cout << "vector:\n";
    output_of_elements(a);

    cout << "Добавим элемент 909\n";
    a = vladd(a, 909);
    cout << "vector:\n";
    output_of_elements(a);

    cout << "Изменим первый элемент на 665\n";
    change_elem(a, 0, 665);
    cout << "vector:\n";
    output_of_elements(a);

    cout << "Индекс какого элемента вы бы хотели найти?\n";
    int choise;
    cin >> choise;
    find_elem(a, choise);

    cout << "Скопируем элменты одного контейнера в другой\n";
    cout << "Элементы нового контейнера {6, 7, 8, 9, 10}\n\n";

    vector<int> ac = { 6, 7, 8, 9, 10 };
    a = ac;
    cout << "list:\n";
    output_of_elements(a);
}

//Тестирование операций set
void test_set() {
    cout << "Инициализация контейнера set\n";
    cout << "Элементы контейнера {1,2,3,4,5}\n\n";

    set<int> a = { 1, 2, 3, 4, 5 };
    cout << "set:\n";
    output_of_elements(a);

    cout << "Удалим первый элемент\n";
    del_elem(a, 0);
    cout << "set:\n";
    output_of_elements(a);

    cout << "Добавим элемент 909\n";
    a = setadd(a, 909);
    cout << "set:\n";
    output_of_elements(a);

    cout << "Изменим первый элемент на 662\n";
    change_elem_in_set(a, 0, 662);
    cout << "set:\n";
    output_of_elements(a);

    cout << "Индекс какого элемента вы бы хотели найти?\n";
    int choise;
    cin >> choise;
    find_elem(a, choise);

    cout << "Скопируем элменты одного контейнера в другой\n";
    cout << "Элементы нового контейнера {6, 7, 8, 9, 10}\n\n";

    set<int> ac = { 6, 7, 8, 9, 10 };
    a = ac;
    cout << "set:\n";
    output_of_elements(a);
}

//Тестирование операций  unordered_set
void test_unordered_set() {
    cout << "Инициализация контейнера unordered_set\n";
    cout << "Элементы контейнера {1,2,3,4,5}\n\n";

    unordered_set<int> a = { 1, 2, 3, 4, 5 };
    cout << "unordered_set:\n";
    output_of_elements(a);

    cout << "Удалим первый элемент\n";
    del_elem(a, 0);
    cout << "unordered_set:\n";
    output_of_elements(a);

    cout << "Добавим элемент 909\n";
    a = setadd(a, 909);
    cout << "unordered_set:\n";
    output_of_elements(a);

    cout << "Изменим первый элемент на 661\n";
    change_elem_in_set(a, 0, 662);
    cout << "unordered_set:\n";
    output_of_elements(a);

    cout << "Индекс какого элемента вы бы хотели найти?\n";
    int choise;
    cin >> choise;
    find_elem(a, choise);

    cout << "Скопируем элменты одного контейнера в другой\n";
    cout << "Элементы нового контейнера {6, 7, 8, 9, 10}\n\n";

    unordered_set<int> ac = { 6, 7, 8, 9, 10 };
    a = ac;
    cout << "set:\n";
    output_of_elements(a);
}

//Тестирование операций map
void test_map() {
    cout << "Инициализация контейнера map\n";
    cout << "Элементами контейнера будут цифровые ключи и структуры Employee\n";
    cout << "Формат структуры Employee: fio, tabel_num, experience, salary, "
        "speciality\n\n";

    map<int, Employee> a = {
        {1, {"Иванов Иван Иванович", 1, 1, 1, "Программист"}},
        {2, {"Васильевич Василий Васильев", 2, 2, 2, "Доктор"}},
        {3, {"Козлов Козлов Козлов", 3, 3, 3, "Фермер"}},
    };

    cout << "map:\n";
    output_of_map_mulmap(a);

    cout << "Удалим первый элемент\n";
    del_elem(a, 0);
    cout << "map:\n";
    output_of_map_mulmap(a);

    cout << "Добавим элемент Пушкин\n";
    a = mapadd(a, 1799, { "Пушкин", 12, 12, 12, "Писатель" });
    cout << "map:\n";
    output_of_map_mulmap(a);

    cout << "Изменим первый элемент на Цицерона\n";
    change_elem_in_map(a, 0, { "Цицерон", 4, 4, 4, "Фермер" });
    cout << "map:\n";
    output_of_map_mulmap(a);

    cout << "Ключ какого элемента с табельным номером вы бы хотели найти?\n";
    int choice;
    cin >> choice;
    find_elem_map(a, choice);

    cout << "Скопируем элменты одного контейнера в другой\n";

    map<int, Employee> ac = {
        {4, {"Артур", 1, 1, 1, "Бездомный"}},
        {5, {"Борис", 2, 2, 2, "Философ"}},
        {6, {"Виктор", 3, 3, 3, "Мыслитель"}},
    };
    a = ac;
    cout << "map:\n";
    output_of_map_mulmap(a);
}

//Тестирование операций multimap
void test_multimap() {
    cout << "Инициализация контейнера multimap\n";
    cout << "Элементами контейнера будут цифровые ключи и структуры Employee\n";
    cout << "Формат структуры Employee: fio, tabel_num, experience, salary, "
        "speciality\n\n";

    multimap<int, Employee> a = {
        {1, {"Иванов Иван Иванович", 1, 1, 1, "Программист"}},
        {2, {"Васильевич Василий Васильев", 2, 2, 2, "Доктор"}},
        {3, {"Козлов Козлов Козлов", 3, 3, 3, "Фермер"}},
    };

    cout << "multimap:\n";
    output_of_map_mulmap(a);

    cout << "Удалим первый элемент\n";
    del_elem(a, 0);
    cout << "multimap:\n";
    output_of_map_mulmap(a);

    cout << "Добавим элемент Пушкин\n";
    a = mapadd(a, 1799, { "Пушкин", 12, 12, 12, "Писатель" });
    cout << "multimap:\n";
    output_of_map_mulmap(a);

    cout << "Изменим первый элемент на Цицерона\n";
    change_elem_in_multimap(a, 2, { "Цицерон", 4, 4, 4, "Фермер" });
    cout << "multimap:\n";
    output_of_map_mulmap(a);

    cout << "Ключ какого элемента с табельным номером вы бы хотели найти?\n";
    int choice;
    cin >> choice;
    find_elem_map(a, choice);

    cout << "Скопируем элменты одного контейнера в другой\n";

    multimap<int, Employee> ac = {
        {4, {"Артур", 1, 1, 1, "Бездомный"}},
        {5, {"Борис", 2, 2, 2, "Философ"}},
        {6, {"Виктор", 3, 3, 3, "Мыслитель"}},
    };
    a = ac;
    cout << "multimap:\n";
    output_of_map_mulmap(a);
}
#endif