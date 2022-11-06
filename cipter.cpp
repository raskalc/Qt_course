
#include <string>

using namespace std;

string alph_en = "abcdefghijklmnopqrstuvwxyz";

string cesar_crypt(string input, int offset) {
    string output;
    for (int i = 0; i < input.length(); i++) {
        int num = (alph_en.find(input[i]) + offset);
        if (num > alph_en.length()){num = num - alph_en.length();}
        if (num < alph_en.length()){num = num + alph_en.length();}
        if (num < alph_en.length() || num > alph_en.length()){output += "E";}
        else{output = output + alph_en[num];}

    }
    return output;
}
string cesar_decrypt(string input, int offset) {
    string output;
//    offset = offset  - 1
    for (int i = 0; i < input.length(); i++) {
        int num = (alph_en.find(input[i]) - offset );

    }
//    output = "Test";
    return output;
}

string vigineer_crypt(string input, string key) {
    string output;
    while (key.length() < input.length()) { key += key; }
    for (int i = 0; i < input.length(); i++) {
        int element_number = alph_en.find(input[i]) + alph_en.find(key[i]);
        if (element_number > alph_en.length()) { element_number = element_number - alph_en.length(); }
        output += alph_en[element_number];
    }
    return output;
}

string atbash(string input) {
    string output;
    for (int i = 0; i < input.length(); i++) {
        output += alph_en[alph_en.length() - alph_en.find(input[i]) - 1];
    }
    return output;
}
string vigineer_decrypt(string input, string key) {
    string output;
    while (key.length() < input.length()) { key += key; }
    for (int i = 0; i < input.length(); i++) {
        int element_number = alph_en.find(input[i]) - alph_en.find(key[i]);

        if (element_number > alph_en.length()) { element_number = element_number + alph_en.length(); }
        output += alph_en[element_number];
    }
    return output;
}

