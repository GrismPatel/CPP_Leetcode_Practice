#include <iostream>
#include <vector>
#include <map>

using namespace std;

const map<char, bool> vowels = {
    {'a', true},
    {'e', true},
    {'i', true},
    {'o', true},
    {'u', true}
};

bool isVowels(char letter) {
    if (vowels.find(letter) != vowels.end()) {
        return true;
    }
    return false;
}

string removeVowels(string s) {
    const int string_size = s.size();
    string withoutVowels;
    for (int index = 0; index < string_size; index ++) {
        if (!isVowels(s[index])) {
            withoutVowels += s[index];
        }
    }
    return withoutVowels;
}

int main () {
    string words = "leetcodeisacommunityforcoders";
    string withoutVowels = removeVowels(words);
    cout << "withoutVowels: " << withoutVowels << endl;
    return 0;
}