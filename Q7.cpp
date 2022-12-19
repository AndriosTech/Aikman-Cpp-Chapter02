#include<iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    cout<<"enter first number"<<endl;
    cin>>a;
    cout<<"enter second number"<<endl;
    cin>>b;
    cout<<"enter third number"<<endl;
    cin>>c;
    cout<<"enter fourth number"<<endl;
    cin>>d;

    if(a > b)
    {
        if(a > c)
        {
            if(a > d)
            {
                cout<<"first number is greater";
            }
            else
            {
                cout<<"fourth number is greater";
            }
        }
        else
        {
            if(c > d)
            {
                cout<<"third number is greatest";
            }
            else
            {
                cout<<"fourth value is greatest";
            }
        }

    }
    else if(b > c)
    {
        if(b > d)
        {
            cout<<"second value is greatest";
        }
        else
        {
            cout<<"fourth value is greatest";
        }
    }
    else if(c > d)
    {
        if(c > a)
        {
            if(c > b)
            {
                cout<<"third value is greatest";
            }
            else
            {
                cout<<"second value is greatest";
            }
        }
        else
        {
            if(a > b)
            {
                cout<<"first value is greatest";
            }
            else
            {
                cout<<"second value is greatest";
            }
        }
    }
    else if(a > d)
    {
        if(a > c)
        {
            cout<<"first value is greatest";
        }
        else
        {
            cout<<"third value is greatest";
        }
    }
    else if(d > a)
    {
        if(d > b)
        {
            if(d > c)
            {
                cout<<"fourth value is greatest";
            }
            else
            {
                cout<<"third value is greatest";
            }
        }
        else if(b > c)
        {
            cout<<"second value is greatest";
        }
    }
}