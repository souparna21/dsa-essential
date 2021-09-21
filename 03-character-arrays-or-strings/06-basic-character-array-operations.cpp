#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char arr1[1000] = "apple";
    char arr2[1000];

    // Calculate length of a string
    cout << strlen(arr1) << endl;

    // Calculate size of a string array(it includes null character)
    cout << strlen(arr2) << endl;

    // Copy a string to another string
    strcpy(arr2,arr1);
    cout << arr2 << endl;

    // Concatination of two different string array using strcat function
    char web[] = "www.";
    char domain[] = "google.com";
    strcat(web,domain);
    cout << web << endl;

    // Compare two character array
    int result = strcmp(arr1,arr2);
    if(result == 0)
    {
        cout << "Strings are equal" << endl;
    }
    else
    {
        cout << "Strings are not equal" << endl;
    }

    return 0;
}
