#include <string>

using namespace std;

string alph_en = "abcdefghijklmnopqrstuvwxyz";

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

string vigineer_crypt(string text, string key) {
    string result = text;
    int i = 0;
    for (auto &c: result) {
        if (c == ' ') {
            result += ' ';
        } else {
            if (islower(c)) {
                c = (((c - 'a') + (key[i++ % key.size()] - 'a')) % alph_en.length()) + 'a';
            } else if (isupper(c)) {
                c = (((c - 'A') + (key[i++ % key.size()] - 'A')) % alph_en.length()) + 'A';
            }
        }
    }
    return result;
}

string vigineer_decrypt(string str, string key) {
    string k = key;
    for (auto &c: k) {
        c = tolower(c) - 'a' - 1;
        c = 'z' - c;
    }
    return vigineer_crypt(str, k);
}

string atbash(string input) {
    string output;
    for (int i = 0; i < input.length(); i++) {
        output += alph_en[alph_en.length() - alph_en.find(input[i]) - 1];
    }
    return output;
}


