#ifndef TestFuncLib
#define TestFuncLib
#include "func.h"

//������������ �������� array
void test_array() {
    cout << "������������� ���������� array\n";
    cout << "�������� ���������� {1,2,3,4,5}\n\n";

    array<int, 5> a = { 1, 2, 3, 4, 5 };
    cout << "array:\n";
    output_of_elements(a);

    cout << "Array - ����������� ������, ������� � ���� ������ ��������� ����� "
        "��������, ������ ��������.\n\n";

    cout << "������ ������ �������\n";
    array<int, 4> b;
    b = del_elem_arr(a, 0);
    cout << "array:\n";
    output_of_elements(b);

    cout << "������� ������ ������� �� 100\n";
    change_elem(b, 1, 100);
    cout << "array:\n";
    output_of_elements(b);

    cout << "������ ������ �������� �� �� ������ �����?\n";
    int choise;
    cin >> choise;
    find_elem(b, choise);

    cout << "��������� ������� ������ ���������� � ������\n";
    cout << "�������� ������ ���������� {6, 7, 8, 9}\n\n";

    array<int, 4> ac = { 6, 7, 8, 9 };
    b = ac;
    cout << "array:\n";
    output_of_elements(b);
}

//������������ �������� list
void test_list() {
    cout << "������������� ���������� list\n";
    cout << "�������� ���������� {1,2,3,4,5}\n\n";

    list<int> a = { 1, 2, 3, 4, 5 };
    cout << "list:\n";
    output_of_elements(a);

    cout << "������ ������ �������\n";
    del_elem(a, 0);
    cout << "list:\n";
    output_of_elements(a);

    cout << "������� ������� 909\n";
    a = vladd(a, 909);
    cout << "list:\n";
    output_of_elements(a);

    cout << "������� ��� �������� � ������� assign({13, 23, 5})\n";
    a.assign({ 13, 23, 5 });
    cout << "list:\n";
    output_of_elements(a);

    cout << "������ ������ �������� �� �� ������ �����?\n";
    int choise;
    cin >> choise;
    find_elem(a, choise);

    cout << "��������� ������� ������ ���������� � ������\n";
    cout << "�������� ������ ���������� {6, 7, 8, 9, 10}\n\n";

    list<int> ac = { 6, 7, 8, 9, 10 };
    a = ac;
    cout << "list:\n";
    output_of_elements(a);
}

//������������ �������� vector
void test_vector() {
    cout << "������������� ���������� vector\n";
    cout << "�������� ���������� {1,2,3,4,5}\n\n";

    vector<int> a = { 1, 2, 3, 4, 5 };
    cout << "vector:\n";
    output_of_elements(a);

    cout << "������ ������ �������\n";
    del_elem(a, 0);
    cout << "vector:\n";
    output_of_elements(a);

    cout << "������� ������� 909\n";
    a = vladd(a, 909);
    cout << "vector:\n";
    output_of_elements(a);

    cout << "������� ������ ������� �� 665\n";
    change_elem(a, 0, 665);
    cout << "vector:\n";
    output_of_elements(a);

    cout << "������ ������ �������� �� �� ������ �����?\n";
    int choise;
    cin >> choise;
    find_elem(a, choise);

    cout << "��������� ������� ������ ���������� � ������\n";
    cout << "�������� ������ ���������� {6, 7, 8, 9, 10}\n\n";

    vector<int> ac = { 6, 7, 8, 9, 10 };
    a = ac;
    cout << "list:\n";
    output_of_elements(a);
}

//������������ �������� set
void test_set() {
    cout << "������������� ���������� set\n";
    cout << "�������� ���������� {1,2,3,4,5}\n\n";

    set<int> a = { 1, 2, 3, 4, 5 };
    cout << "set:\n";
    output_of_elements(a);

    cout << "������ ������ �������\n";
    del_elem(a, 0);
    cout << "set:\n";
    output_of_elements(a);

    cout << "������� ������� 909\n";
    a = setadd(a, 909);
    cout << "set:\n";
    output_of_elements(a);

    cout << "������� ������ ������� �� 662\n";
    change_elem_in_set(a, 0, 662);
    cout << "set:\n";
    output_of_elements(a);

    cout << "������ ������ �������� �� �� ������ �����?\n";
    int choise;
    cin >> choise;
    find_elem(a, choise);

    cout << "��������� ������� ������ ���������� � ������\n";
    cout << "�������� ������ ���������� {6, 7, 8, 9, 10}\n\n";

    set<int> ac = { 6, 7, 8, 9, 10 };
    a = ac;
    cout << "set:\n";
    output_of_elements(a);
}

//������������ ��������  unordered_set
void test_unordered_set() {
    cout << "������������� ���������� unordered_set\n";
    cout << "�������� ���������� {1,2,3,4,5}\n\n";

    unordered_set<int> a = { 1, 2, 3, 4, 5 };
    cout << "unordered_set:\n";
    output_of_elements(a);

    cout << "������ ������ �������\n";
    del_elem(a, 0);
    cout << "unordered_set:\n";
    output_of_elements(a);

    cout << "������� ������� 909\n";
    a = setadd(a, 909);
    cout << "unordered_set:\n";
    output_of_elements(a);

    cout << "������� ������ ������� �� 661\n";
    change_elem_in_set(a, 0, 662);
    cout << "unordered_set:\n";
    output_of_elements(a);

    cout << "������ ������ �������� �� �� ������ �����?\n";
    int choise;
    cin >> choise;
    find_elem(a, choise);

    cout << "��������� ������� ������ ���������� � ������\n";
    cout << "�������� ������ ���������� {6, 7, 8, 9, 10}\n\n";

    unordered_set<int> ac = { 6, 7, 8, 9, 10 };
    a = ac;
    cout << "set:\n";
    output_of_elements(a);
}

//������������ �������� map
void test_map() {
    cout << "������������� ���������� map\n";
    cout << "���������� ���������� ����� �������� ����� � ��������� Employee\n";
    cout << "������ ��������� Employee: fio, tabel_num, experience, salary, "
        "speciality\n\n";

    map<int, Employee> a = {
        {1, {"������ ���� ��������", 1, 1, 1, "�����������"}},
        {2, {"���������� ������� ��������", 2, 2, 2, "������"}},
        {3, {"������ ������ ������", 3, 3, 3, "������"}},
    };

    cout << "map:\n";
    output_of_map_mulmap(a);

    cout << "������ ������ �������\n";
    del_elem(a, 0);
    cout << "map:\n";
    output_of_map_mulmap(a);

    cout << "������� ������� ������\n";
    a = mapadd(a, 1799, { "������", 12, 12, 12, "��������" });
    cout << "map:\n";
    output_of_map_mulmap(a);

    cout << "������� ������ ������� �� ��������\n";
    change_elem_in_map(a, 0, { "�������", 4, 4, 4, "������" });
    cout << "map:\n";
    output_of_map_mulmap(a);

    cout << "���� ������ �������� � ��������� ������� �� �� ������ �����?\n";
    int choice;
    cin >> choice;
    find_elem_map(a, choice);

    cout << "��������� ������� ������ ���������� � ������\n";

    map<int, Employee> ac = {
        {4, {"�����", 1, 1, 1, "���������"}},
        {5, {"�����", 2, 2, 2, "�������"}},
        {6, {"������", 3, 3, 3, "���������"}},
    };
    a = ac;
    cout << "map:\n";
    output_of_map_mulmap(a);
}

//������������ �������� multimap
void test_multimap() {
    cout << "������������� ���������� multimap\n";
    cout << "���������� ���������� ����� �������� ����� � ��������� Employee\n";
    cout << "������ ��������� Employee: fio, tabel_num, experience, salary, "
        "speciality\n\n";

    multimap<int, Employee> a = {
        {1, {"������ ���� ��������", 1, 1, 1, "�����������"}},
        {2, {"���������� ������� ��������", 2, 2, 2, "������"}},
        {3, {"������ ������ ������", 3, 3, 3, "������"}},
    };

    cout << "multimap:\n";
    output_of_map_mulmap(a);

    cout << "������ ������ �������\n";
    del_elem(a, 0);
    cout << "multimap:\n";
    output_of_map_mulmap(a);

    cout << "������� ������� ������\n";
    a = mapadd(a, 1799, { "������", 12, 12, 12, "��������" });
    cout << "multimap:\n";
    output_of_map_mulmap(a);

    cout << "������� ������ ������� �� ��������\n";
    change_elem_in_multimap(a, 2, { "�������", 4, 4, 4, "������" });
    cout << "multimap:\n";
    output_of_map_mulmap(a);

    cout << "���� ������ �������� � ��������� ������� �� �� ������ �����?\n";
    int choice;
    cin >> choice;
    find_elem_map(a, choice);

    cout << "��������� ������� ������ ���������� � ������\n";

    multimap<int, Employee> ac = {
        {4, {"�����", 1, 1, 1, "���������"}},
        {5, {"�����", 2, 2, 2, "�������"}},
        {6, {"������", 3, 3, 3, "���������"}},
    };
    a = ac;
    cout << "multimap:\n";
    output_of_map_mulmap(a);
}
#endif