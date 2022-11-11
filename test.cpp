//#include "iostream"
//#include "string"
//#include "windows.h"
//
//using namespace std;
//string alph_en = "abcdefghijklmnopqrstuvwxyz";
//
//
//
//
//string vigineer_crypt(string text, string key)
//{
//    string result = text;
//    int i = 0;
//    for (auto& c : result)
//    {
//        if (islower(c))
//        {
//            c = (((c - 'a') + (key[i++ % key.size()] - 'a')) % alph_en.length()) + 'a';
//        }
//        else if (isupper(c))
//        {
//            c = (((c - 'A') + (key[i++ % key.size()] - 'A')) % alph_en.length()) + 'A';
//        }
//    }
//    return result;
//}
//
//string vigineer_decrypt(string str, string key)
//{
//    string k = key;
//    for (auto& c : k)
//    {
//        c = tolower(c) - 'a' - 1;
//        c = 'z' - c;
//    }
//    return vigineer_crypt(str, k);
//}
//
//int main() {
//    cout << vigineer_decrypt(vigineer_crypt("the oral cumshot", "raskalc"), "raskalc");
//}

//
//std::string caesarCryptRight(std::string input, int offset) {
//    std::string result = "";
//    for (int i = 0; i < input.length(); i++) {
//        if (input[i] == ' ')
//        {
//            result += " ";
//            continue;
//        }
//        if (offset + (int)ALPHABET.find(input[i]) < ALPHABET.length() && offset + (int)ALPHABET.find(input[i]) > 0)
//        {
//            result += ALPHABET[offset + (int)ALPHABET.find(input[i])];
//        }
//        else
//        {
//            int amountOfCircles = (offset + ALPHABET.find(input[i])) / ALPHABET.length();
//            if (amountOfCircles == 0){ result += ALPHABET[offset + ALPHABET.find(input[i])];}else{
//            result += ALPHABET[offset - (ALPHABET.length() * amountOfCircles) + ALPHABET.find(input[i])];}
//        }
//    }
//    return result;
//}
//std::string caesarCryptLeft(std::string input, int offset)
//{
//    std::string result = "";
//    offset *= -1;
//    for (int i = 0; i < input.length(); i++) {
//        if (input[i] == ' ')
//        {
//            result += " ";
//            continue;
//        }
//        if (offset + (int)ALPHABET.find(input[i]) > 0)
//        {
//            result += ALPHABET[offset + ALPHABET.find(input[i])];
//        }
//        else
//        {
//            result += ALPHABET[ALPHABET.length() + ((offset + (int)ALPHABET.find(input[i])) % (int)ALPHABET.length())];
//        }
//    }
//    return result;
//}
//std::string caesarCrypt(std::string input, int offset) {
//    if (offset > 0) return caesarCryptRight(input, offset);
//    else if (offset < 0) return caesarCryptLeft(input, offset * -1);
//    else return input;
//}
//std::string caesarDecrypt(std::string input, int offset) {
//    if (offset > 0) return caesarCryptLeft(input, offset);
//    else if (offset < 0) return caesarCryptRight(input, offset * -1);
//    else return input;
//}
//
//
#include <iostream>
#include <string>

using namespace std;
const string alph_en = "abcdefghijklmnopqrstuvwxyz";

string caesarCrypt(string input, int offset) {
    string result = "";
    for (int i = 0; i < input.length(); i++) {
        if (input[i] == ' ') {
            result += " ";
        } else {
            int amountCircles = (offset + alph_en.find(input[i])) / alph_en.length();
            int index = alph_en.find((input[i] + offset - amountCircles * alph_en.length()));
            result += alph_en[index];
        }
    }
    return result;
}

string caesarDecrypt(string input, int offset) {
    string result = "";
    offset = alph_en.length() - offset;
    while (offset < 0) { offset += alph_en.length(); }
    for (int i = 0; i < input.length(); i++) {
        if (input[i] == ' ') {
            result += " ";
        } else {
            int amountCircles = (offset + alph_en.find(input[i])) / alph_en.length();
            int index = alph_en.find((input[i] + offset - amountCircles * alph_en.length()));
            result += alph_en[index];
        }
    }
    return result;
}

int main() {
    cout << caesarDecrypt(caesarCrypt("raskalc", 2000), 2000);
}