#include <iostream>
using namespace std;

// finding an alphabet in a string

main()
{
    string name;
    char alphabet;
    int count;
    bool check = false;

    getline(cin, name);
    count = name.length();

    cout << "Enter alphabet you want to find: ";
    cin >> alphabet;
    // if (name[count-1] == alphabet)
    // {
    //     cout << true;
    // }

    // else
    // {
    //     cout << false;
    // }

    for (int idx = 0; idx < count; idx++)
    {
        if (name[idx] == alphabet)
        {
            check = true;
            break;
        }
    }

    if (check == true)
    {
        cout << "Present";
    }

    else
    {
        cout << "Not Present";
    }
}