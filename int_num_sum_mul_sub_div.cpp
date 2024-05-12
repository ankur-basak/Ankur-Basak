#include<iostream>
#include<conio.h>
using namespace std;

int main ()
{
    int num1,num2;
    //num1 = 30;
    //num2 = 4;

    cout<< "Enter 1st integer number : ";
    cin>> num1;
    cout<< "Enter 2nd integer number : ";
    cin>> num2;
    cout<<endl;

    int sum = num1 + num2;
    cout<<"Sum is: " <<sum;
    cout<<endl;

    int sub = num1 - num2;
    cout<<"Subtraction is : "<<sub;
    cout<<endl;

    int mul = num1 * num2;
    cout<<"Multiplication is : "<<mul;
    cout<<endl;

    double div = (float) num1 / num2;
    cout<<"Division is : "<<div;
    cout<<endl;

    int rem = num1 % num2;
    cout<<"Remainder is : "<<rem;
    cout<<endl;

    getch ();
}
