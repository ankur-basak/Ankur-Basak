#include<iostream>
#include<conio.h>
using namespace std;
int main()

{
    int num;
    cout<<"Enter your marks: ";
    cin>>num;

    if(num>=90 && num<=100){
        cout<<"Letter Grade A+";}

        else if(num>=85 && num<=89){
        cout<<"Letter Grade A";
        }
        else if(num>=80 && num<=84){
        cout<<"Letter Grade B+";
        }
        else if(num>=75 && num<=79){
        cout<<"Letter Grade B";
        }
        else if(num>=70 && num<=74){
        cout<<"Letter Grade C+";
        }
        else if(num>=65 && num<=69){
        cout<<"Letter Grade C";
        }
        else if(num>=60 && num<=64){
        cout<<"Letter Grade D+";
        }
        else if(num>=50 && num<=59){
        cout<<"Letter Grade D";
        }
        else if(num<50){
        cout<<"Letter Grade F";
        }
        else {
            cout<<"Invalid input";
        }
        getch();

}

