//Basic syntax
return_type function_name(parameters) {
    // function body
    return value; // optional for void functions
}
//EX-
//#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int main() {
    int result = add(5, 3);
    cout << "Sum = " << result << endl;
    return 0;
}
//o/p-
Sum = 8
// 2: Void Function
#include <iostream>
using namespace std;

void greet() {
    cout << "Hello, World!" << endl;
}

int main() {
    greet();
    return 0;
}
//o/p-
Hello, World!

//3.Types of Functions in C++
1. User-defined Functions
Created by the programmer.

int square(int x) {
    return x * x;
}

2. Library Functions
Provided by C++ libraries.

#include <cmath>
double x = sqrt(25);

//3.Function Declaration, Definition, and Call
Declaration (Prototype)
int multiply(int, int);
Definition
int multiply(int a, int b) {
    return a * b;
}
Call
int result = multiply(4, 5);

//Function Parameters
//Pass by Value

Changes inside the function do not affect the original variable.

void change(int x) {
    x = 100;
}
//Pass by Reference

Changes inside the function affect the original variable.

void change(int &x) {
    x = 100;
}
//Recursive Function

A function that calls itself.

#include <iostream>
using namespace std;

int factorial(int n) {
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    cout << factorial(5);
    return 0;
}

Output:

120
