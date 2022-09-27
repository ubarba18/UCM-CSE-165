#include<iostream>

using namespace std;

char* copycharArray(char *charArr, int size) {
    //dynamically allocate memory for the char array
    char *newArr = new char[size];
    int i = 0;

    // while(*(charArr + i) != '\0') {
    //     cout << i;
    //     *(newArr + i) = *(charArr + i);
    //     i++;
    // }

    //copy the contents of the char array
    for (int i = 0; i < size; i++) {
        *(newArr + i) = *(charArr + i);
    }
    
    //return the new array
    return newArr;
    
}

int main() {
    static char charArr[] = "Hello World";
    //cout << "The original array is: " << charArr << endl;
    int size = sizeof(charArr);
    //copy the char array using the function
    char *newArr = copycharArray(charArr, size);
    //cout the new array, with its address
    cout << "The new array is: " << newArr << ", and its address is: " << &newArr << endl;

    char *newArr2 = copycharArray(newArr, size);
    //cout the new array again, with its address
    cout << "The new array is: " << newArr2 << ", and its address is: " << &newArr2 << endl;

    delete [] newArr;
    delete [] newArr2;

    return 0;
}
