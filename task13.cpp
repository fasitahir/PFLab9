#include <iostream>
using namespace std;

// replacing alphabets in a given word with next alphabet

main()
{
    string word;
    int count;
    getline(cin , word);

    count  = word.length();

    for(int i = 0 ; i < count ; i ++)
    {
        if(word[i] == 'a')
        {
            word[i] = 'b';
        }

        else if(word[i] == 'b')
        {
            word[i] = 'c';
        }

        else if(word[i] == 'c')
        {
            word[i] = 'd';
        }

        else if(word[i] == 'd')
        {
            word[i] = 'e';
        }

        else if(word[i] == 'f')
        {
            word[i] = 'g';
        }

        else if(word[i] == 'g')
        {
            word[i] = 'h';
        }

        else if(word[i] == 'h')
        {
            word[i] = 'i';
        }

        else if(word[i] == 'i')
        {
            word[i] = 'j';
        }

        else if(word[i] == 'j')
        {
            word[i] = 'k';
        }

        else if(word[i] == 'k')
        {
            word[i] = 'l';
        }

        else if(word[i] == 'l')
        {
            word[i] = 'm';
        }

        else if(word[i] == 'm')
        {
            word[i] = 'n';
        }

        else if(word[i] == 'n')
        {
            word[i] = 'o';
        }

        else if(word[i] == 'p')
        {
            word[i] = 'q';
        }

        else if(word[i] == 'q')
        {
            word[i] = 'r';
        }

        else if(word[i] == 'r')
        {
            word[i] = 's';
        }

        else if(word[i] == 's')
        {
            word[i] = 't';
        }

        else if(word[i] == 't')
        {
            word[i] = 'u';
        }

        else if(word[i] == 'u')
        {
            word[i] = 'v';
        }

        else if(word[i] == 'v')
        {
            word[i] = 'w';
        }

        else if(word[i] == 'w')
        {
            word[i] = 'x';
        }

        else if(word[i] == 'x')
        {
            word[i] = 'y';
        }

        else if(word[i] == 'y')
        {
            word[i] = 'z';
        }

        else if(word[i] == 'z')
        {
            word[i] = 'a';
        }
    }

    cout << word;



}