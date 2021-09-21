#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    // Creating a character array
    char a[100];

    // Value initialization in a character array
    char b[] = {'a','b','c','d','\0'};
    char c[] = "abcd";
    /* char b[] = {'a','b','c','d'};  => is wrong. It takes garbage value at last position */

    // input and output operation
    char d[100];
    cin >> d;
    cout << d;

    // Size and length of a character array
    cout << strlen(b) << endl; // number of visible character(without null value)
    cout << sizeof(b) << endl; // +1 because of null character

    return 0;
}
