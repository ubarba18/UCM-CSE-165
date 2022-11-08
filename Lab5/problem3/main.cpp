#include <iostream>
#include <string>

using namespace std;

class Pet {
    string petname;
    public:
    Pet(const string& petName) : petname(petName) {}
    virtual string name() = 0;
    virtual string speak() = 0;
};

string Pet::name(){
    return petname;
}

class Dog : public Pet{
    public:
    Dog(const string& petName) : Pet(petName) {}
    string speak() {
        return "Woof";
    }
    string name() {
        return Pet::name();
    }
};

int main() {
    Pet* pet = new Dog("Fido");
    cout << pet->name() << " says " << pet->speak() << endl;

    delete pet;
    return 0;
}
