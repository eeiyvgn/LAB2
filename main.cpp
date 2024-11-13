#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

// ������ ����� �� ����� � ������
void readFromFile(vector<string>& lines) {
    ifstream in("file1.txt"){
        if (in.is_open()){
            while (getline(in, line)){
                lines.push_back(line);
            }
        }
        in.close()
    }
}

// ����� ����� �� �����
void printLines(const vector<string>& lines) {
    for (const auto& line : lines) {
        cout << line << endl;
    }
}

// ������� 3: ������ ����� � ����
void writeToFile(const vector<string>& lines) {
    ofstream out;
    out.open("file2.txt");
    for (const auto& line : lines){
        out << line << endl;
    }
    out.close();
}

int main() {

    vector<string> lines;

    readFromFile(lines);
    printLines(lines);
    writeToFile(lines);

    return 0;
}
