#include <iostream>
using namespace std;
int boxcounter(int numbers[],int size)
{
    int p[size/3];
    int sum=0;
    for(int i=0;i<size;i++)
    cin>>numbers[i];
    for(int a=0;a<size/3;a++)
    {
        p[a]=numbers[3*a]*numbers[3*a+1]*numbers[3*a+2];
    }
    for(int b=0;b<size/3;b++)
    sum=sum+p[b];
    return sum;
    
}
main()
{
    int size;
    cout << "Enter the number of boxes: ";
    cin >> size;
    int numbers[size*3];
    cout<<"Enter the dimensions of boxes(length,width,heiht): \n";
    cout << boxcounter(numbers,size*3);
}
