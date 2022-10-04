//: C05:Handle.cpp {O}
// Handle implementation
#include "Handle.h"
// Define Handle's implementation:

struct Handle::Cheshire {
 int i;
};
Handle::Handle() { //Using the Constructor
 smile = new Cheshire;
 smile->i = 0;
}
Handle::~Handle() { //Using the destructor
 delete smile;
}
int Handle::read() {
 return smile->i;
}
void Handle::change(int x) {
 smile->i = x;
} ///:~ 