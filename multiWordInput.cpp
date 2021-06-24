#include <iostream>
#include <string>
using namespace std;

int main() {
    string myName;
    cout << "Write your name here: ";
    getline(cin, myName);
    cout << myName;
    return 0;
}