#include <iostream>
using namespace std;

class ClassB; // Forward declaration

class ClassA {
private:
    int valueA;

public:
    ClassA(int a) : valueA(a) {}

    // Declare the friend function
    friend int sumValues(ClassA, ClassB);
};

class ClassB {
private:
    int valueB;

public:
    ClassB(int b) : valueB(b) {}

    // Declare the friend function
    friend int sumValues(ClassA, ClassB);
};

// Friend function definition
int sumValues(ClassA a, ClassB b) {
    return a.valueA + b.valueB;
}

int main() {
    ClassA objA(10);
    ClassB objB(20);

    cout << "The sum of values is: " << sumValues(objA, objB) << endl;

    return 0;
}
