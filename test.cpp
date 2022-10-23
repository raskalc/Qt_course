#include "bits/stdc++.h"
#include "string"
using namespace std;
string alph_en = "abcdefghijklmnopqrstuvwxyz";
string atbash_crypt(string input) {
    string output;
    for (int i = 0; i < input.length(); i++) {
        output += alph_en[alph_en.length() - alph_en.find(input[i]) - 1];
    }
    return output;
}

string atbash_decrypt(string input) {
    string output;
    for (int i = 0; i < input.length(); i++) {
        output += alph_en[alph_en.length() - alph_en.find(input[i]) - 1];
    }
    return output;
}
int main(){
    cout << atbash_crypt(atbash_crypt("fuck"));
}