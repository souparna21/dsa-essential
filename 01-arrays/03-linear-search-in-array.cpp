#include <iostream>

using namespace std;

int linear_search(int *arr,int n, int key)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1,2,0,10,11,9,8,8,7};
    int key = 9;
    int n = sizeof(arr)/sizeof(int); // or sizeof(arr)/sizeof(arr[0])   

    int index = linear_search(arr,n,key);
    if(index == -1)
    {
        cout << key << " is not present";
    }
    else
    {
        cout << key << " is present at index" << index;
    }
    return 0;
}