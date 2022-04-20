#include <iostream>
#include <vector>
#include <map>

using namespace std;

int numJewelsInStones(string jewels, string stones) {
    int jewelsCount = 0;
    map<char, bool> jewelsCharacter;
    const int numberJewels = jewels.size();
    const int number_stones = stones.size();
    for (int index =0; index < numberJewels; index++) {
        if (jewelsCharacter.find(jewels[index]) == jewelsCharacter.end()) {
            jewelsCharacter[jewels[index]] = true;
        }
    }

    for (int index =0; index < number_stones; index++) {
        if (jewelsCharacter.find(stones[index]) != jewelsCharacter.end()) {
            jewelsCount += 1;
        }
    }
    return jewelsCount;
}

int main() {
    string jewels = "aA";
    string stones = "aAAbbbb";
    int count = numJewelsInStones(jewels, stones);
    cout << "count: " << count << endl;
    return 0;
}