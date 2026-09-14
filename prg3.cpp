#include<bits/stdc++.h>

using namespace std;

class Functions {
    public:

    inline int add(int a, int b) {     //inline add function
        return a + b;
    }

    int multiply(int a, int b = 1) {    //function with default arguments
        return a * b;
    }

    int sub(int a, int b) {     //the subtract functions with function overloading
        return a - b;
    }

    int sub(int a, int b, int c) {
        return a - b - c;
    }
};

int main() {

    Functions a;

    cout << "Additon using inline function : " << a.add(5, 6) << endl;
    cout << "Multiplication using default arguments : " << a.multiply(4, 7) << endl;
    cout << "Runtime polymorphism or function overloading 1 : " << a.sub(4, 6) << endl;
    cout << "Runtime polymorphism or function overloading 2 : " << a.sub(3, 6, 8) << endl;

    return 0;
}
