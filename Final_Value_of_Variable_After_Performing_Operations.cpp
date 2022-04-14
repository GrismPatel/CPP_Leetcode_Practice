#include <iostream>
#include <vector>

using namespace std;

int finalValueAfterOperations(vector<string>& operations) {
    int ans = 0;
    const int array_size = operations.size();

    for (int index =0; index <array_size; index++) {
        if (operations[index] == "--X" or operations[index] == "X--") {
            ans -= 1;
        } else {
            ans += 1; 
        }
    }
    return ans;
}

int main() {
    vector<string> operations = {"--X","X++","X++"};

    const int ans = finalValueAfterOperations(operations);
    cout << ans << endl;
    return 0;
}