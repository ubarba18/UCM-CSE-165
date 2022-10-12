#include<iostream>

using namespace std;

class Subject {
    public:
    virtual void f() {
        cout << "Calling Subject::f()" << endl;
    }
    virtual void g() { 
        cout << "Calling Subject::g()" << endl;
    }
    virtual void h() {
        cout << "Calling Subject::h()" << endl;
    }
};

class Proxy : public Subject {
    public:
    Proxy(Subject* Sub) : Subject(), ptrSub(Sub) {}
    void f() {
        ptrSub->f();
    }
    void g() {
        ptrSub->g();
    }
    void h() {
        ptrSub->h();
    }
    void installed(Subject* Sub) {
        ptrSub = Sub;
    }
    private:
    Subject* ptrSub;
};

class Implementation1 : public Subject {
    public:
    void f() {
        cout << "Calling Implementation1::f()" << endl;
    }
    void g() {
        cout << "Calling Implementation1::g()" << endl;
    }
    void h() {
        cout << "Calling Implementation1::h()" << endl;
    }
};

class Implementation2 : public Subject {
    public:
    void f() {
        cout << "Calling Implementation2::f()" << endl;
    }
    void g() {
        cout << "Calling Implementation2::g()" << endl;
    }
    void h() {
        cout << "Calling Implementation2::h()" << endl;
    }
};

int main() {
    Implementation1 imp1;
    Implementation2 imp2;
    Proxy proxy(&imp1);

    proxy.f();
    proxy.g();
    proxy.h();

    proxy.installed(&imp2);

    proxy.f();
    proxy.g();
    proxy.h();

    return 0;
}