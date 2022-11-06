#include "iostream"
#include "string"
#include "windows.h"

using namespace std;
string alph_en = "abcdefghijklmnopqrstuvwxyz";

string cesar_crypt(string input, int offset) {
    string output;
    for (int i = 0; i < input.length(); i++) {
        int num = (alph_en.find(input[i]) + offset);
        if (num > alph_en.length()){num = num - alph_en.length();}
        else{output = output + alph_en[num];}

    }
    return output;
}
string cesar_decrypt(string input, int offset) {
    string output;
    int num;
    for (int i = 0; i < input.length(); i++) {
        if ((alph_en.find(i) - offset) < alph_en.length()) {num = (alph_en.find(input[i]) - offset+alph_en.length());}
        else {num = (alph_en.find(input[i]) - offset);}
        cout << num <<"\n";
        if (num < alph_en.length()){num = num + alph_en.length();}
        else{output = output + alph_en[num];}
    }
    return output;
}

int main(){
    cout << cesar_decrypt(cesar_crypt("a",19),19);
}
