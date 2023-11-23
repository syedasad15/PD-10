#include <iostream>
using namespace std;
int boxcounter(string directions[],int size)
{
    int r=0;
    int l=0;
    for(int i=0;i<size;i++)
    cin>>directions[i];
    for(int a=0;a<size;a++)
    {
        if(directions[a]=="right")
        r=r+90;
        if(directions[a]=="left")
        l=l+90;
    }
  if(r-l==360)
  cout <<"Number of full rotations : 1";

}
main()
{
    int size;
    cout << "Enter the length of array: ";
    cin >> size;
    string directions[size];
    boxcounter(directions,size);
}
