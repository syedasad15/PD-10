#include<iostream>
using namespace std;
main()
{
    string text[4];

    cout<<"Enter a string: ";
    for(int i=0;i<4;i++)
    cin>>text[i]; 
    for(int a=3;a>=0;a--)
    cout<<text[a]<<" ";
}