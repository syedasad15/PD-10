#include <iostream>
using namespace std;
int wordcounter(string words[], int size)
{
    char ch;
    string current;
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter word " << i + 1 << ": ";
        cin >> words[i];
    }
    cout << "Enter the character you want to count: ";
    cin >> ch;
    for (int x = 0; x<size; x++)
    {
        current = words[x];
        for (int a = 0;a<current.size();a++)
        {
        if(ch==current[a])
        count++;

        }
    }
    return count;
}

main()
{
    int size;
    cout << "Enter the number of Words: ";
    cin >> size;
    string words[size];
    cout << wordcounter(words, size);
}
