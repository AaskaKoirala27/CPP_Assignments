// to count down to 0 from a given number
#include <iostream>
using namespace std;

int main(){
int number;
cout << "Enter a number you want countdown from: ";
cin >> number;
while (number >= 0){
cout << number << " ";
number--;
}
    cout << endl;

return 0;

}