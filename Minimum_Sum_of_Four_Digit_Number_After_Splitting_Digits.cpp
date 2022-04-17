#include <iostream>
#include <vector>

using namespace std;

int minimumSum(int num) {
    vector<int> int_char;
    while (num != 0) {
        int remainder = num %10;
        int_char.push_back(remainder);
        num /= 10;
    }
    sort(int_char.begin(), int_char.end());
    const int first_num = (int_char[0] * 10) + int_char[2];
    const int second_sum = (int_char[1] * 10) + int_char[3];

    return (first_num +second_sum);
}

int main () {
    int num = 2932;
    int ans = minimumSum(num);
    cout << ans << endl;
    return 0;
}