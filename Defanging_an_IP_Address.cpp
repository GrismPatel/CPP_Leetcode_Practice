#include <iostream>
#include <vector>

using namespace std;

string defangIPaddr(string address) {
    const int address_size = address.size();
    string newIpaddress;
    for (int index =0; index < address_size; index ++) {
        if (address[index] == '.') {
            newIpaddress += "[.]";
        } else {
            newIpaddress += address[index];
        }
    }
    return newIpaddress;
}

int main() {
    const string address = "255.100.50.0";
    string newAddress = defangIPaddr(address);
    cout << newAddress << endl;
    return 0;
}