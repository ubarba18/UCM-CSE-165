#include<iostream>

using namespace std;

class Array{
    public:
    int arr[5];
    int *ptr;

    Array() {
        ptr = arr;
    }
    void print() {
        //Index through this array using a pointer 
        for (int i = 0; i < 5; i++) {
            cout << *(ptr + i) << endl;
        }
    }
};

int main() {
    Array test;
    for (int i = 0; i < 5; i++) {
        test.arr[i] = i;
    }

    test.print();
    return 0;
}