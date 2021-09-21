#include <iostream>

using namespace std;

void selection_sort(int *arr, int n)
{
    for(int i=0; i<n-1; i++)
    {
        int min_element_index = i;
        for(int j=i+1; j<n; j++)
        {
            if(arr[j] < arr[min_element_index])
            {
                min_element_index = j;
            }
            swap(arr[i],arr[min_element_index]);
        }
    }
}   

int main()
{

    int arr[] = {7,3,9,5,1,4,2,6,8};
    int n = sizeof(arr)/sizeof(int);
    selection_sort(arr,n);

    for(int x: arr)
    {
        cout << x << " ";
    }

    return 0;
}
