#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

// ������� 1: ������ ����� �� ����� � ������
void readFromFile(vector<string>& lines) {
    // ���� ��������� ������
}

// ������� 2: ����� ����� �� �����
void printLines(const vector<string>& lines) {
    // ���� ��������� ������
}

// ������� 3: ������ ����� � ����
void writeToFile(const vector<string>& lines) {
    ofstream out;
    out.open("file2.txt");
    out << "Hello world!" << endl;
    // ���� ��������� ������
}

int main() {

    vector<string> lines;

    readFromFile(lines);
    printLines(lines);
    writeToFile(lines);

    return 0;
}
