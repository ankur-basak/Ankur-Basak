#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int number;
    cout<<"Type in your number: "<<endl;
    cin>>number;
    if ( number < 0 )
	number = -number;
    cout<<"The absolute value is "<<number<<endl;
    return 0;
}
