#include <iostream>
using namespace std;
// Function prototype (declaration)
int add(int, int);
int main()
{
    int num1, num2, sum;
    cout<<"Enters two numbers to add: ";
    cin >> num1 >> num2;
    // Function call
    sum = add(num1, num2);
    cout << "Sum = " << sum;
    return 0;
    //New comment
}
// Function definition
int xFunction::add(int a, int b)
{
    int add;
    add = a + b;
    // Return statement
    return add;
    //Comment added 
    //Class addded with 
}
