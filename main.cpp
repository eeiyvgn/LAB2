#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

// Функция 1: Чтение строк из файла в вектор
void readFromFile(vector<string>& lines) {
    // Пока оставляем пустой
}

// Функция 2: Вывод строк на экран
void printLines(const vector<string>& lines) {
    // Пока оставляем пустой
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
