#include <iostream>
using namespace std;

// display location of all the alpohabets
main()
{
    string word;
    getline(cin , word);

    int idx = 0;

    while (word[idx] != '\0')
    {
        
        cout << word[idx] << " at index " << idx << endl;
        idx ++;
    }
    

}