#include <iostream>
#include <cstring>
using namespace std;

class myClass
{
public:
    myClass(char c = ' ')
    {
        memset(myArray, c, 100);
    }
    void print()
    {
        for (int i = 0; i < 100; i++)
        {
            cout << myArray[i];
        }
        cout << endl;
    }

private:
    char myArray[100];
};

int main()
{
    myClass myObject('z');
    myObject.print();
    return 0;
}