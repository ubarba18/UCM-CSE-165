#include<iostream>
#include<vector>

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

int main() {
    vector<Counted*> vectorC;

    //filling in the vector with 5 counted objects
    for (int i = 0; i < 5; i++){
        vectorC.push_back(new Counted);
    }

    //optional printing each objects id
    // for (int i = 0; i < 5; i++){
    //     cout << vectorC[i]->id << endl;
    // }

    //deleteing the objects in the vector
    for (int i = 0; i < 5; i++){
        delete vectorC[i];
    }

    return 0;
}