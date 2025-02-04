// WAP to modify the second element of an integer vector and 
// print the new output using a Range-based For Loop.
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers = {5, 12, 23, 8, 14};
    numbers[1] = 99;
    for (int num : numbers) {
        cout << num << " ";
    }
    return 0;
}
