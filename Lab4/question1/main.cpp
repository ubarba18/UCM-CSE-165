#include<iostream>

using namespace std;

int& function(int* ptr) {
    *ptr = 10;
    return *ptr;
}

int main() {
    int x = 3;
    cout << x << endl;

    int& y = function(&x);
    cout << y << endl;
    return 0;
}