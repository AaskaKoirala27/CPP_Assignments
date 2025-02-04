// print all the even number from 1 to 20 using do while loop.
#include <iostream>
using namespace std;

int main() {
    int i = 1; 
    cout << "The even numbers from 1 to 20 are: ";
    do {
        if (i % 2 == 0) { 
            cout << i << " "; 
        }
        i++; 
    } while (i <= 20); 

    cout << endl; 
    return 0;
}
