#include <iostream>
#include <cstring>
using namespace std;

class mySimpleClass {
    public:
    mySimpleClass(): i(0) {}
    mySimpleClass(int i): i(i) {}

    mySimpleClass operator+(const mySimpleClass& rhs) {
        return mySimpleClass(i + rhs.i);
    }

    mySimpleClass operator*(const mySimpleClass& rhs) {
        return mySimpleClass(i * rhs.i);
    }

    void print(ostream& out) {
        out << i << endl;
    }

    private:
        int i;
};

int main() {
    mySimpleClass a(5);
    mySimpleClass b(10);
    mySimpleClass c = a * a + b * b;
    c.print(cout);
    return 0;
}
