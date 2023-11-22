#include<iostream>
using namespace std;
int saturdaychecker(int saturdays[],int size)
{
    int count=0;
    for(int i=0;i<size;i++)
    {
        cout<<"Enter the miles of Saturday "<<i+1<<": ";
        cin>>saturdays[i];    
    }
    for(int x=1;x<size;x++)
    {
    if(saturdays[x-1]<saturdays[x])
    {
        count++;
    }
    }
    return count;

}
main()
{
    int size;
    cout<<"Enter the number of Sarurdays: ";
    cin >>size;
    int saturdays[size];
    cout<< saturdaychecker(saturdays,size);
}
