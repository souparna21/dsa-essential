// Works on monotonic arrays only(sorted)
#include <iostream>

using namespace std;

int binary_search(int *arr, int n, int key)
{
    int s = 0;
    int e = n-1;

    while(s <= e)
    {
        int mid = (s+e)/2;
        if(arr[mid] == key)
        {
            return mid;
        }
        else if(arr[mid] < key)
        {
            s = mid+1;
        }
        else
        {
            e = mid-1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {30,50,60,70,80,90,100};
    int n = sizeof(arr)/sizeof(int);

    int key;
    cin >> key;

    int index = binary_search(arr,n,key);

    if(index == -1)
    {
        cout << key << " is not present";
    }
    else
    {
        cout << key << " is present";
    }

    return 0;
}