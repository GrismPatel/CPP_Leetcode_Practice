#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    string minRemoveToMakeValid(string s) {
        vector<char> stack;
        const int lenght_string = s.size();
        vector<char> new_string_vector(lenght_string);
        
        for (int index =0; index < lenght_string; index++) {
            if (s[index] == ')'){
                if (stack.size() > 0) {
                    stack.pop_back();
                } else {
                    continue;
                }
            }
            if (s[index] == '(') {
                stack.push_back('(');
            }
            new_string_vector.push_back(s[index]);
        }
        
        string new_string;
        const int new_length = new_string_vector.size();
        for (int index =0; index < new_length; index++) {
            if (new_string_vector[index] == '(' and stack.size() > 0) {
                new_string_vector[index] = ' ';
                stack.pop_back();
            }
            if (new_string_vector[index] == ' ') {
                continue;
            }
            new_string += new_string_vector[index];
        }
        return new_string;
    }
};