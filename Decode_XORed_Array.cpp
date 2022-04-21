#include <iostream>
#include <vector>

using namespace std;

vector<int> decode(vector<int>& encoded, int first) {
    vector<int> xor_result;
    const int encodedSize = encoded.size();
    xor_result.push_back(first);
    for (int index =0; index < encodedSize; index ++) {
        xor_result.push_back(encoded[index] ^ xor_result[index]);
    }

    return xor_result;
}

int main() {
    vector<int> encoded = { 1,2,3 };
    int first = 1;
    vector<int> xor_result =  decode(encoded, first);
    return 0;
}