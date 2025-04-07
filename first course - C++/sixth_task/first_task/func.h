#ifndef MyFuncLib
#define MyFuncLib

#include <algorithm>
#include <array>
#include <fstream>
#include <iostream>
#include <list>
#include <map>
#include <set>
#include <stdio.h>
#include <string>
#include <time.h>
#include <typeinfo>
#include <unordered_set>
#include <vector>

using namespace std;

const int SIZE = 20000; //���������� ����� � ����� num1000.txt

//�������� ��������� ��� ��������� map
struct Employee {
    string fio;
    double tabel_num;
    int experience;
    int salary;
    string speciality;
};

/////////////////////////////////////////////////////////////////////////////
////����� ���������//////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////

// ����� ��������� �� ����. map � multimap
template <typename Type> void output_of_elements(Type numbers) {
    for (int n : numbers) {
        cout << n << " ";
    }
    cout << "\n\n";
}

//����� ��������� multimap � map
template <typename Type> void output_of_map_mulmap(Type numbers) {
    for (auto iter = numbers.begin(); iter != numbers.end(); iter++) {
        cout << "����: " << iter->first << " - ��������: \n"
            << iter->second.fio << " - " << iter->second.speciality
            << "\n��������� �����: " << iter->second.tabel_num << "\n";
    }
    cout << "\n\n";
}

/////////////////////////////////////////////////////////////////////////////
////���������� ���������/////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////

// ���������� ��. � vector � list
template <typename Type> Type vladd(Type numbers, int num) {
    numbers.push_back(num);
    return numbers;
}

// ���������� ��. � set � unordered_set
template <typename Type> Type setadd(Type numbers, int num) {
    numbers.insert(num);
    return numbers;
}

// ���������� ��. � map � multimap
template <typename Type> Type mapadd(Type numbers, int key, Employee num) {
    numbers.insert(pair<int, Employee>(key, num));
    return numbers;
}

template <typename Type> Type mapaddwithint(Type numbers, int key, int num) {
    numbers.insert(pair<int, int>(key, num));
    return numbers;
}

/////////////////////////////////////////////////////////////////////////////
////����� ���������//////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////

// min - map
int find_min_elem(map<int, int> numbers) {
    int min = 99999999; // ���������� ��� �������� ������������ ��������

    for (auto iter = numbers.begin(); iter != numbers.end(); iter++) {

        if (min > iter->second)
            min = iter->second;
    }
    return min;
}

// min - multimap
int find_min_elem(multimap<int, int> numbers) {
    int min = 99999999; // ���������� ��� �������� ������������ ��������

    for (auto iter = numbers.begin(); iter != numbers.end(); iter++) {

        if (min > iter->second)
            min = iter->second;
    }
    return min;
}
//����� ������������ �������� �� map
template <typename Type> int find_min_elem(Type numbers) {
    int min = 99999999; // ���������� ��� �������� ������������ ��������

    for (int n : numbers) {
        if (min > n) // ����� ������������ �������� � ���������� �������
            min = n;
    }
    return min;
}

// ����� ������� ��������(�� map)
template <typename Type> void find_elem(Type numbers, int value) {
    int i = 0;
    for (int n : numbers) {
        if (n == value) {
            cout << "������ ������� �������� " << value << ": [" << i << "]"
                << "\n\n";
            return;
        }
        i++;
    }
    cout << "������� �� ������\n\n";
    return;
}

// ����� ������� �������� � map
template <typename Type> void find_elem_map(Type map, int value) {
    for (auto iter = map.begin(); iter != map.end(); iter++) {
        if (iter->second.tabel_num == value) {
            cout << "���� ���������� �������� � ��������� ������� "
                << iter->second.tabel_num << ": " << '"' << iter->first << '"'
                << "\n��������: " << iter->second.fio << " - "
                << iter->second.speciality << "\n\n";
            return;
        }
    }
    cout << "������� �� ������\n\n";
    return;
}

/////////////////////////////////////////////////////////////////////////////
////�������� ��������////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////

// �������� �������� �� ������� ����� array
template <typename Type> void del_elem(Type& numbers, int value) {
    auto it = next(numbers.begin(), value);
    if (it != numbers.end()) {
        numbers.erase(it);
    }
    else {
        cout << "�������� ������\n\n";
    }
}

// �������� �������� �� ������� � array<int, 5>
array<int, 4> del_elem_arr(array<int, 5> a, int k) {
    int n = 5;
    array<int, 4> b;
    for (long i = k; i < n - 1; ++i) {
        b[i] = a[i + 1];
    }
    return b;
}

/////////////////////////////////////////////////////////////////////////////
////��������� ��������////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////

// ��������� �������� �� ���� map
template <typename Type> void change_elem(Type& numbers, int value, int num) {
    if (value < numbers.size() && value >= 0)
        numbers[value] = num;
}

// ��������� �������� � map
template <typename Type>
void change_elem_in_map(Type& numbers, int value, Employee num) {
    if (value < numbers.size() && value >= 0)
        numbers[value] = num;
}

// ��������� �������� � multimap
template <typename Type>
void change_elem_in_multimap(Type& numbers, int value, Employee num) {
    if (value < numbers.size() && value >= 0)
        del_elem(numbers, 0);
    numbers.insert(pair<int, Employee>(value, num));
}

// ��������� �������� � set
template <typename Type>
void change_elem_in_set(Type& numbers, int value, int num) {
    if (value < numbers.size() && value >= 0) {
        del_elem(numbers, value);
        numbers.insert(num);
    }
}

/////////////////////////////////////////////////////////////////////////////
////������ � �������/////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////

//������ ����
void cleanFile(string fileName) {
    fstream file(fileName, ios::out | ios::trunc);
    file.close();
}

//��������� ����
void fillFile(string fileName) {

    //������� ������ ����
    cleanFile(fileName);

    srand(time(0));
    ofstream out;
    out.open("num1000.txt");

    for (int i = 0; i < SIZE; i++) {
        out << rand() % (123123 - 10) + 10 << " ";
    }

    out.close();
}

//������ ����
int* readfile(string fileName) {
    ifstream in(fileName);
    int i = 0, k;
    int* a = new int[SIZE];
    while (in >> k) {
        a[i] = k;
        i++;
    }
    in.close();
    return a;
}

//������
//����������� �������� ���������� �� ����������� � ����
string what_is_that_cont(string cont) {
    if (cont == "class std::vector<int,class std::allocator<int> >" ||
        cont == "St6vectorIiSaIiEE")
        return "vector";
    if (cont == "class std::array<int," + to_string(SIZE) + ">" ||
        cont == "St5arrayIiLm" + to_string(SIZE) + "EE")
        return "array";

    if (cont == "class std::list<int,class std::allocator<int> >" ||
        cont == "NSt7__cxx114listIiSaIiEEE")
        return "list";
    if (cont == "class std::map<int,int,struct std::less<int>,class "
        "std::allocator<struct std::pair<int const ,int> > >" ||
        cont == "St3mapIiiSt4lessIiESaISt4pairIKiiEEE")
        return "map";
    if (cont == "class std::multimap<int,int,struct std::less<int>,class "
        "std::allocator<struct std::pair<int const ,int> > >" ||
        cont == "St8multimapIiiSt4lessIiESaISt4pairIKiiEEE")
        return "multimap";
    if (cont == "class std::set<int,struct std::less<int>,class "
        "std::allocator<int> >" ||
        cont == "St3setIiSt4lessIiESaIiEE")
        return "set";
    if (cont == "class std::unordered_set<int,struct std::hash<int>,struct "
        "std::equal_to<int>,class std::allocator<int> >" ||
        cont == "St13unordered_setIiSt4hashIiESt8equal_toIiESaIiEE")
        return "unordered_set";
    return cont;
}

template <typename Type>
string nameit(Type num) { //������ ���������� �������� �����
    return what_is_that_cont(typeid(num).name());
}

//��� speedtest
//
//������
void initialCont(vector<int>& mas, ofstream& out, int* a) {
    out << "�������������(��):   ";
    unsigned int start_time = clock(); // ��������� �����

    for (int i = 0; i < SIZE; i++) {
        mas.push_back(a[i]);
    }
    unsigned int end_time = clock(); // �������� �����
    unsigned int search_time = end_time - start_time; // ������� �����
    out << search_time;
    out << "\n\n";
}

//����
void initialCont(list<int>& mas, ofstream& out, int* a) {
    out << "�������������(��):   ";
    unsigned int start_time = clock(); // ��������� �����

    for (int i = 0; i < SIZE; i++) {
        mas.push_back(a[i]);
    }
    unsigned int end_time = clock(); // �������� �����
    unsigned int search_time = end_time - start_time; // ������� �����
    out << search_time;
    out << "\n\n";
}

//������ arr
void initialCont(array<int, SIZE>& mas, ofstream& out, int* a) {
    out << "�������������(��):   ";
    unsigned int start_time = clock(); // ��������� �����

    for (int i = 0; i < SIZE; i++) {
        mas[i] = a[i];
    }
    unsigned int end_time = clock(); // �������� �����
    unsigned int search_time = end_time - start_time; // ������� �����
    out << search_time;
    out << "\n\n";
}

//������ ������������� set
void initialCont(set<int>& mas, ofstream& out, int* a) {
    out << "�������������(��): n  ";
    unsigned int start_time = clock(); // ��������� �����

    for (int i = 0; i < SIZE; i++) {
        mas.insert(a[i]);
    }
    unsigned int end_time = clock(); // �������� �����
    unsigned int search_time = end_time - start_time; // ������� �����
    out << search_time;
    out << "\n\n";
}

//������ ������������� unset
void initialCont(unordered_set<int>& mas, ofstream& out, int* a) {
    out << "�������������(��): n  ";
    unsigned int start_time = clock(); // ��������� �����

    for (int i = 0; i < SIZE; i++) {
        mas.insert(a[i]);
    }
    unsigned int end_time = clock(); // �������� �����
    unsigned int search_time = end_time - start_time; // ������� �����
    out << search_time;
    out << "\n\n";
}

//������ ������������� map
void initialCont(map<int, int>& mas, ofstream& out, int* a) {
    out << "�������������(��):   ";
    unsigned int start_time = clock(); // ��������� �����

    for (int i = 0; i < SIZE; i++) {
        mas.insert(pair<int, int>{a[i], a[i]});
    }
    unsigned int end_time = clock(); // �������� �����
    unsigned int search_time = end_time - start_time; // ������� �����
    out << search_time;
    out << "\n\n";
}

//������ ������������� multimap
void initialCont(multimap<int, int>& mas, ofstream& out, int* a) {
    out << "�������������(��):   ";
    unsigned int start_time = clock(); // ��������� �����

    for (int i = 0; i < SIZE; i++) {
        mas.insert(pair<int, int>{a[i], a[i]});
    }
    unsigned int end_time = clock(); // �������� �����
    unsigned int search_time = end_time - start_time; // ������� �����
    out << search_time;
    out << "\n\n";
}

#endif