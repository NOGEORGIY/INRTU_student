#ifndef SpeedTestFuncLib
#define SpeedTestFuncLib
#include "func.h"

array<int, SIZE> speed_array{};
list<int> speed_list{};
set<int> speed_set{};
unordered_set<int> speed_unordered_set{};
map<int, int> speed_map{};
multimap<int, int> speed_multimap{};
vector<int> speed_vector{};

//������ min
template <typename Type> void minimum(Type mas, ofstream& out, int min)
{
    out << "����� ��������(��):   ";
    unsigned int start_time = clock(); // ��������� �����
    min = find_min_elem(mas);
    unsigned int end_time = clock(); // �������� �����
    unsigned int search_time = end_time - start_time; // ������� �����
    out << search_time;
    out << "\n\n";
}

template <typename Type> void addElem(Type mas, ofstream& out) {
    out << "����� ��.";
    int* aaa = new int[] { 98483 };
    initialCont(mas, out, aaa);
}

template <typename Type> void speedTest(Type m, int* a, ofstream& out) {
    cout << nameit(m) << "...";
    out << nameit(m) << ":" << "\n\n"; //������� ��� ������������ ���������� � ����
    initialCont(m, out, a); //��������� ���������� � ����������� �� �� ����(���������� �������!)
    minimum(m, out, 999999); //���� ����������� ����� � ����������
    addElem(m, out); //������ ��������� �����
    cout << "Fin\n";
}

void initial_cont() {

    //������� ���� �� ��������
    cleanFile("result.txt");

    int* a = new int[SIZE];
    fillFile("num1000.txt");
    a = readfile("num1000.txt");

    ofstream out;
    out.open("result.txt");

    //array
    speedTest(speed_array, a, out);

    //vector
    speedTest(speed_vector, a, out);

    //list
    speedTest(speed_list, a, out);

    //set
    speedTest(speed_set, a, out);

    //unset
    speedTest(speed_unordered_set, a, out);

    //map
    speedTest(speed_map, a, out);

    //mulmap
    speedTest(speed_multimap, a, out);

}
#endif