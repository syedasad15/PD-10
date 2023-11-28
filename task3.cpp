#include <iostream>
using namespace std;
bool cyclechecker(int size, int c, int arr[])
{
    for (int i = 0; i < size; i++)
    {

        if (arr[i] == arr[i + c])
        {

            return true;
        }
        else if (c > size)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
main()
{
    int size;
    cout << "Enter   length of array: ";
    cin >> size;
    int arr[size];
    cout << "Enter   elements of array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int c;
    cout << "Enter   length of cycle: ";
    cin >> c;
    cout << "Output: " << cyclechecker(size, c, arr);
}
