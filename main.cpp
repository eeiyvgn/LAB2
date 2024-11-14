#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

// ×òåíèå ñòðîê èç ôàéëà â âåêòîð
void readFromFile(vector<string>& lines) {
  
    ifstream in("file1.txt");
    string line;
    while (getline(in, line)){
        lines.push_back(line);
    }

    in.close();

}

// Âûâîä ñòðîê íà ýêðàí
void printLines(const vector<string>& lines) {

}

// Ôóíêöèÿ 3: Çàïèñü ñòðîê â ôàéë
void writeToFile(const vector<string>& lines) {

}

int main() {

    vector<string> lines;

    readFromFile(lines);
    printLines(lines);
    writeToFile(lines);

    return 0;
}
