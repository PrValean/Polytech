#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool compareByLength(const string &a, const string &b) {
    return a.length() > b.length();
}

void sortStringArr(vector<string> &words) {
    for (int i = 0; i < words.size(); i++) {
        for (int j = 0; j < words.size() - 1; j++) {
            if (compareByLength(words[j], words[j + 1])) {
                swap(words[j], words[j + 1]);
            }
        }
    }

    for (const string &word : words) {
        cout << word << " ";
    }
}

int main() {
    vector<string> words = {"project_22350", "typhoon", "we", "JavaScript", "Rowaniscool"};

    sortStringArr(words); //функция сортирует массив по принципу возрастания длины слова

    return 0;
}