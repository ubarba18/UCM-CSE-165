#include <iostream>
using namespace std;

class A;
class B;

class A
{
public:
    char letter = 'A';
    void print(B* b);
};

class B
{
public:
    char letter = 'B';
    void print(A* a);
};

void A::print(B* b)
{
    cout << "Class A is printing class B's letter: " << b->letter << endl;
}

void B::print(A* a)
{
    cout << "Class B is printing class A's letter: " << a->letter <<endl;
}

int main()
{
    A a;
    B b;
    
    a.print(&b);
    b.print(&a);
    
    return 0;
}