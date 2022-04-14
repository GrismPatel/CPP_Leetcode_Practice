#include <iostream>
#include <vector>

using namespace std;

int split_count(string words) {
    const int total_words = words.size();
    int count = 1;
    for (int index =0; index <total_words; index ++) {
        if (words[index] == ' ') {
            count += 1;
        }
    }
    return count;
}

int mostWordsFound(vector<string> &sentences) {
    int ans = 0;
    const int array_size = sentences.size();
    for (int index =0; index < array_size; index ++) {
        int spaces = split_count(sentences[index]);
        if (ans < spaces) {
            ans = spaces;
        }
    }
    return ans;
}

int main() {
    vector<string> sentences = { "alice and bob love leetcode", "i think so too", "this is great thanks very much" };
    int ans = mostWordsFound(sentences);
    return ans;
}