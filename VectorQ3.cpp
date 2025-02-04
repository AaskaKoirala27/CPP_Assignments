//WAP to iterate through a vector of strings.

#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
    vector<string> strVec = {"Hello", "World", "C++", "Programming"};
    for (const string& str : strVec) {
        cout << str << " ";
    }
    return 0;
}
