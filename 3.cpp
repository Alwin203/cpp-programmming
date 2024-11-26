#include <iostream>
using namespace std;

string& getReference(string& str) {
    return str;
}

int main() {
    string text = "Alwin Bhandari";
    string& ref = getReference(text);
    cout << "Reference: " << ref << endl;
    return 0;
}
