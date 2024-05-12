#include<iostream>
using namespace std;
int main()
{
        char gbf;
        int money;
        cout<<"Do you have girlfriend or boyfriend? "<<endl;
        cout<<"If you have type y, if you don't have type n"<<endl;
        cin>>gbf;

        if (gbf == 'y'){
        cout<<"Congratulation!"<<endl;
        cout<<"How much money do you have?"<<endl;
        cin>>money;
        cout<<"You have "<<money<<"Taka."<<endl;
        if (money==10000)
        {
            cout<<"Radisson Blu"<<endl;
        }
        else if (money==5000)
        {
            cout<<"Go to Amari Dhaka"<<endl;
        }
        else if(money==2000)
        {
            cout<<"Go to Kahans or kudos"<<endl;
        }
        else if(money==1000)
        {
            cout<<"Go to AIUB canteen"<<endl;
        }
        else if (money==200)
        {
            cout<<"Go to Tong Dokan"<<endl;
        }
    }

        return 0;
}

