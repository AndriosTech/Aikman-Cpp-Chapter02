#include<iostream>
using namespace std;

int main()
{
    char c;

    cout<<"Enter character to check if it is vowel"<<endl;
    cin>>c;

    if(c == 'a' || c == 'o')
    {
        cout<<"it is vowel"<<endl;
    }
    else if(c == 'e' || c == 'i')
    {
        cout<<"it is vowel";
    }
    else if(c == 'u')
    {
        cout<<"it is vowel";
    }
    else
    {
        cout<<"it is consonant";
    }
}