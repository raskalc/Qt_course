#include "iostream"
#include "string"
#include "windows.h"
using namespace std;
string alph_en = "abcdefghijklmnopqrstuvwxyz";
string alph_ru = "абвгдеёжзийклмнопрстуфхцчшщъыьэюя";
string atbash_en(string input) {
    string output;
    for (int i = 0; i < input.length(); i++) {
        output += alph_en[alph_en.length() - alph_en.find(input[i]) - 1];
    }
    return output;
}
string atbash_ru(string input) {

    string output;
    for (int i = 0; i < input.length(); i++) {
        output += alph_ru[alph_ru.length() - alph_ru.find(input[i]) - 1];
    }
    return output;
}
int main(){
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(866); SetConsoleOutputCP(866);
    cout << atbash_en(atbash_en("fuck"))<<"\n";
    cout << atbash_ru(atbash_ru("привет"));
}