#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Text {
    public:
    string content;
    Text(); // default constructor
    Text(string filename); // constructor that takes a string argument that is the name of the file to open.
    string contents(string content) { //return string member object
        return content;
    }
};

Text::Text(string filename) {
    //print filename
    cout << "Filename: " << filename << endl;

    // open file
    ifstream file(filename);
    string line;
    if (file.is_open()) {
        while (getline(file, line)) {
            content += line;
        }
        file.close();
    }
    else {
        cout << "Unable to open file";
    }

};

int main() {
    Text text1("test.txt");
    cout << text1.contents(text1.content) << endl;
    return 0;
}
