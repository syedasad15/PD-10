#include <iostream>
using namespace std;
int boxcounter(int numbers[],int size)
{
 
    for(int i=0;i<size;i++)
    cin>>numbers[i];
    for(int a=1;a<size/3;a++)
    {
        if(numbers[a]!=a+1)
        cout<<"To be arranged: " <<numbers[a]<<"\n";
    
 
    }
    
}
main()
{
    int size;
    cout << "Enter the length of array: ";
    cin >> size;
    int numbers[size];
    cout << boxcounter(numbers,size);
}
