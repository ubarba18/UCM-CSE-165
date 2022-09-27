#include <iostream>
#include"function.h"
using namespace std;

void printError(){
    cout << "Function name is printError. My argument list is: (empty). And my return type is void!\n";
}

char letterExtract(char h){
    cout << "Function name is letterExtract. My argument list is: char h. And my return type is char!\n";
    return h;
}

int sumOfTwoNum(int x, int y){
    cout << "Function name is sumOfTwoNum. My argument list is: int x, int y. And my return type is int!\n";
    return (x + y);
}

float floatMult(float a, float b){
    cout << "Function name is floatMult. My argument list is: float a, float b. And my return type is float!\n";
    return (a * b);
}