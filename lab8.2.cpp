// lab8.2.cpp
// Кузьмінська Єлизавета
// Лабораторна робота № 8.2
// Опрацювання літерних рядків
// Варіант 10
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

// Перевіряє, чи слово починається з букви "a"
bool isWordStartingWithA(const string& word) {
    return !word.empty() && word[0] == 'a';
}

// Перевіряє, чи рядок містить хоча б одне слово, яке починається з "a"
bool containsWordStartingWithA(const string& inputString) {
    istringstream iss(inputString);
    string word;

    while (iss >> word) {
        if (isWordStartingWithA(word)) {
            return true;
        }
    }

    return false;
}

// Зчитує літерний рядок з консолі
string getInputString() {
    string inputString;
    cout << "Enter the words: ";
    getline(cin, inputString);
    return inputString;
}

// Виводить результат перевірки на екран
void displayResult(bool result) {
    if (result) {
        cout << "The string contains a word that starts with the letter 'a'.\n";
    }
    else {
        cout << "The string does not contain a word that begins with the letter 'a'.\n";
    }
}

int main() {
    // Виклик функцій та виведення результату
    string inputString = getInputString();
    bool result = containsWordStartingWithA(inputString);
    displayResult(result);

    return 0;
}
