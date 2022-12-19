#include<iostream>
using namespace std;

int main()
{
    char c;

    cout<<"enter character"<<endl;
    cin>>c;

    switch(c)
    {
        case 'a':
        cout<<"it is vowel";
        break;

        case 'e':
        cout<<"it is vowel";
        break;

        case 'i':
        cout<<"it is vowel";
        break;

        case 'o':
        cout<<"it is vowel";
        break;

        case 'u':
        cout<<"it is vowel";
        break;

        default:
        cout<<"it is consonant";

    }
}