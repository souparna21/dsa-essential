#include <iostream>

using namespace std;

void printArray(int *arr, int n) // Or void printArray(int arr[], int n)
{
    arr[0] = 100;

    cout << "Inside the function-  ";
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(int); // or sizeof(arr)/sizeof(arr[0])   

    cout << "Before changing the value-  ";
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    printArray(arr,n);

    cout << "Inside the main- ";
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}