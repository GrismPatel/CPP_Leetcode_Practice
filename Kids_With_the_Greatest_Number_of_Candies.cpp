#include <iostream>
#include <vector>

using namespace std;

int getMax(vector<int> candies, int candiesSize) {
    int currentMax = INT_MIN;
    for (int index =0; index < candiesSize; index ++) {
        if (currentMax < candies[index]) {
            currentMax = candies[index];
        }
    }
    return currentMax;
}

vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    const int candiesSize = candies.size();
    vector<bool> result(candiesSize);
    const int maxCandies = getMax(candies, candiesSize);
    for (int index =0; index < candiesSize; index ++) {
        if (candies[index] +extraCandies >= maxCandies) {
            result[index] = true;
        } else {
            result[index] = false;
        }
    }
    return result;
}

int main() {
    vector<int> candies = {2,3,5,1,3};
    const int extraCandies = 3;
    vector<bool> isCandies = kidsWithCandies(candies, extraCandies);

    for (const int &i: isCandies) {
        cout << "bool: " << i << endl;
    }

    return 0;
}