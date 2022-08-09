#include <iostream>
#include <fstream>
using namespace std;
void readln() {}
int main(int argc, char* argv[]) {
    cout << "hello world" << endl;
    if(argc == 1) {
        cout << argv[0] << ": <script>" << endl;
    }
    return 0; 
}