#include <iostream>
#include<string>
using namespace std;

int main () {

    while(true){
        string str;
        int i = 0;
        cin >> str;

        if (str == "exit") {
            i = 1;
        }
        else if (str == "help") {
            i = 2;
        }

        else if (str == "add") {
            i = 3;
        }

        else if (str == "sub") {
            i = 4;
        }

        else if (str == "mul") {
            i = 5;
        }

        else if (str == "div") {
            i = 6;
        }
        else {
            i = 0;
        }
    

        switch (i){
            case 1:
                cout << "Escaped, congratulations.\n";
                return 0;
            case 2:
                cout << "exit - exit the program\n";
                break;
            case 3:
                cout << "derp, try again\n";
                break;
            case 4:
                cout << "derp, try again\n";
                break;
            case 5:
                cout << "derp, try again\n";
                break;
            case 6:
                cout << "derp, try again\n";
                break;
            default:
                cout << "Invalid command\n";
                break;
            }


    }

    return 0;
}