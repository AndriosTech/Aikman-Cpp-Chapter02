#include<iostream>
using namespace std;

int main()
{
    int s, marks;

    cout<<"enter subject marks";
    cin>>s;

    if(s >= 90)
    {
        cout<<"Your grade is A+";
    }
    else if(s >= 70 && s < 90)
    {
        cout<<"Your grade is A";
    }
    else if(s >= 50 && s < 70)
    {
        cout<<"Your grade is B";
    }
    else if(s < 50)
    {
        cout<<"Your grade is F";
    }
}