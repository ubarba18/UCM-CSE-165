//[Exercise 19 on Page 390] Create a class (say myClass) containing both a const (say float f1) and a non-const (say 
//const float f2) float. Initialize f1 and f2 using the constructor initializer list

#include<iostream>

using namespace std;

class myClass {
    public:
    myClass(): f1(0), f2(0) {}
    myClass(float ff1, float ff2): f1(ff1), f2(ff2) {}
    private:
    float f1;
    const float f2;
};

int main() {
    
    myClass(1.0, 2.0);

    return 0;
}