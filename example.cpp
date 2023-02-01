#include <iostream>
using namespace std;

// // printing string with spaces

// main()
// {
//     string name;

//     getline(cin , name);

//     cout << name;
// }

// // size of array

main()
{
    int arr[] = {1 , 2, 3, 4, 5, 6, 7, 8,9 ,10};
    // sizeof(arr) give us the space it is holding so we can divide it with single int and can get length
    cout << sizeof(arr)/sizeof(arr[0]);
}