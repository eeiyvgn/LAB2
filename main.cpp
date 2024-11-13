#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

// Чтение строк из файла в вектор
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

// Вывод строк на экран
void printLines(const vector<string>& lines) {
    for (const auto& line : lines) {
        cout << line << endl;
    }
}

// Функция 3: Запись строк в файл
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
