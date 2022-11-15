#include"myHeader2.h"

namespace my = myNameSpace;

void test1() {
    my::fun1();
    my::fun2();
}

void test2() {
    using namespace my;

    fun3();
    fun4();
}

int main() {
    test1();
    test2();

    return 0;
}