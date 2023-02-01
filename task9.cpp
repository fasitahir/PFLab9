#include <iostream>
using namespace std;

// reversing the character array
main()
{
    string word;
    int count = 0;
    getline(cin, word);

    // for (int idx = 0; word[idx] != '\0'; idx++)
    // {

    //     count++;
    // }

    count  = word.length();
    cout << "Reversed string : ";

    for (int idx = count; idx >= 0; idx--)
    {

        cout<< word[idx];
    }
}