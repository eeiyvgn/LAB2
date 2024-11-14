#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

// Функция 1: Чтение строк из файла в вектор
void readFromFile(vector<string>& lines) {
    // Пока оставляем пустой
}

  // Вывод строк на экран
void printLines(const vector<string>& lines) {
    for (const auto& line : lines) {
        cout << line << endl;
    }
}

// Функция 3: Запись строк в файл
void writeToFile(const vector<string>& lines) {
    // Пока оставляем пустой
}

int main() {

    vector<string> lines;

    readFromFile(lines);
    printLines(lines);
    writeToFile(lines);

    return 0;
}
