#include <iostream>
using namespace std;
int boxcounter(int numbers[],int size)
{
    int p[size];
    int sum=0;
    for(int i=0;i<size;i++)
    cin>>numbers[i];
    for(int a=0;a<size;a++)
    {
    for(int x=0;x<size;x++)
    {
        if(x%3==0)
        {
            p[a]=numbers[x-2]*numbers[x-1]*numbers[x];
        }
    }
    }
    for(int b=0;b<size;b++)
    sum=sum+p[b];
    cout<<sum;
    
}
main()
{
    int size;
    cout << "Enter the number of boxes: ";
    cin >> size;
    int numbers[size*3];
    cout<<"Enter the dimensions of boxes(length,width,heiht)";
    cout << boxcounter(numbers,size*3);
}
