#include "bits/stdc++.h"
#include "string"

using namespace std;


string alph_en = "abcdefghijklmnopqrstuvwxyz";



string cesar(string input, int offset) {
    string output;
    for (int i = 0; i < input.length(); i++) {
        int num = (alph_en.find(input[i]) + offset);
        if (num <= alph_en.length()) { output += alph_en[num]; }
        else { output += alph_en[num - alph_en.length()]; }
    }
    return output;
}


string vigineer(string input, string key) {
    string output;
    while (key.length() < input.length()) { key += key; }
    for (int i = 0; i < input.length(); i++) {
        int element_number = alph_en.find(input[i])+alph_en.find(key[i]);
        if (element_number > alph_en.length()){element_number = element_number - alph_en.length();}
        output +=alph_en[element_number];
    }
//    Debug
//    cout << input << "\n" << key << "\n"<<output<<"\n";
    return output;
}


int main() {
//    cout << cesar("ABC",2);
    cout << vigineer("fuck", "saqult");
    return 0;
}