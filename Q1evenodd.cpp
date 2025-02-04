// WAP to enter a program and check whether its even or odd
#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter an integer number: ";
    cin >> number;

    if(number){
        cout<< "please enter a int no type";
        return 0;
    }

    if (number % 2==0) 
    {
        cout << " The number is even." << endl;
    }
    else if (number%2 !=0){
    cout << " The number is odd." << endl;
    } else {
    cout << "Please enter an integer number." <<endl;
}
return 0; 
}

