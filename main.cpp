#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

// ������ ����� �� ����� � ������
void readFromFile(vector<string>& lines) {
    ifstream in("file1.txt");

    string line;
    while (getline(in, line)){
        lines.push_back(line);
    }

    in.close();

}

// ����� ����� �� �����
void printLines(const vector<string>& lines) {

}

// ������� 3: ������ ����� � ����
void writeToFile(const vector<string>& lines) {

}

int main() {

    vector<string> lines;

    readFromFile(lines);
    printLines(lines);
    writeToFile(lines);

    return 0;
}
