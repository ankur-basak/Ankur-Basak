#include<iostream>
using namespace std;
int main()
{
    char gbf;
    cout<<"Do you have girlfriend or boyfriend? "<<endl;
    cout<<"If you have type y, if you don't have type n"<<endl;
    cin>>gbf;

    if (gbf == 'y')
    {
        cout<<"Congratulation!"<<endl;
    }

    else if(gbf== 'n')
    {
        cout<<"Sad life!"<<endl;
    }
    else
    {
        cout<<"wrong input";
    }


return 0;
}
