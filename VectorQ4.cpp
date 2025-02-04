//WAP to input an integer vector and print each element multiplied by 2.

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;

    cout << "Enter the size of the vector: ";
    cin >> n;

    vector<int> vec(n);

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    for (int num : vec) {
        cout << num * 2 << " ";
    }
    return 0;
}
