#include <iostream>

using namespace std;

int main()
{
    char arr[100];
    cin.getline(arr,100);
    cout << arr;

    char arr1[100];
    cin.getline(arr1,100,'#');
    cout << arr1;

    return 0;
}
