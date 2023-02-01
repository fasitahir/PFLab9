#include <iostream>
using namespace std;

// counting vowels in the string

main()
{
    string word;
    int count;
    int vowels= 0 ;
    getline(cin , word);

    count  = word.length();

    for(int i = 0 ; i < count ; i++)
    {
        if(word[i] == 'a' ||word[i] == 'e' ||word[i] == 'i' ||word[i] == 'o' ||word[i] == 'u' )
        {
            vowels++;
        }
    }

    cout << vowels;
}