#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

// ������� 1: ������ ����� �� ����� � ������
void readFromFile(vector<string>& lines) {
    // ���� ��������� ������
}

  // ����� ����� �� �����
void printLines(const vector<string>& lines) {
    for (const auto& line : lines) {
        cout << line << endl;
    }
}

// ������� 3: ������ ����� � ����
void writeToFile(const vector<string>& lines) {
    // ���� ��������� ������
}

int main() {

    vector<string> lines;

    readFromFile(lines);
    printLines(lines);
    writeToFile(lines);

    return 0;
}
