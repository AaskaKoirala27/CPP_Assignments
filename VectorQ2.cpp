//WAP to push elements into an empty vector and print the output.
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> vec = {5, 12, 23, 8, 14};

    for (int num : vec) {
        cout << num << " ";
    }
    return 0;
}
