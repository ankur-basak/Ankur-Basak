#include <iostream>
using namespace std;
int main()
{
	int num;
	cout<< "Enter your number: ";
	cin>> num;
	if(num>=0 && num<=100){
	switch(num/10)
	{
	    case 10:
	    case 9:
	    cout<< "A+";
	    break;
	    case 8:
	    cout<< "A";
	    break;
	    case 7:
	    cout<< "A";
	    break;
	    default:
	    cout<< "Invalid number";
	    break;

	    }
	}
	else
	{
	    cout<< "The number is not valid.";
	}
	return 0;
}
