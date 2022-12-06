#include <iostream>
using namespace std;

template <class fib> 
fib fibonacci(fib n) {
    static fib fib1, temp1, temp2, fibon;
    temp1 = 0;
    temp2 = 1;

    for(int i = 1; i < n; i++) {
        fibon = temp1 + temp2;
        temp1 = temp2;
        temp2 = fibon;
    }
    
    return fibon;
}

int main() {
    cout << "Fibonaccis (int) 90th number is : ";
    cout << fibonacci(90) << endl;

    cout << "Fibonaccis (long) 90th number is : ";
    long long x = 90;
    cout << fibonacci(x) << endl;

    cout << "Fibonaccis (float) 90th number is : ";
    cout << fibonacci(90.0f) << endl;
    return 0;
}
