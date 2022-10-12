#include<iostream>

using namespace std;

void function(int**& ptr) {
    *ptr = new int(10);
}

int main() {
    int x = 5;
    cout << x << endl;

    int* ptr = &x;
    int** ptr2 = &ptr;
    //cout << **ptr2 << endl;

    function(ptr2);
    cout << **ptr2 << endl;

}