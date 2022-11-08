#include <iostream>

using namespace std;

class Counted {
    public:
        Counted() : id(count++) {
            cout << "An object is being created is created, id: " << id << endl;
            }
        ~Counted() {
            cout << "The created object is being destroyed, id: " << id << endl;
            }
    private:
        int id;
        static int count;
};

int Counted::count = 5;

int main (){
    Counted c1;
    Counted c2;

    return 0;
}