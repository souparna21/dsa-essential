#include <iostream>

using namespace std;

void counting_sort(int *arr, int n)
{
    // Find the limit of the array
    int max_number = INT_MIN;
    for(int i=0; i<n; i++)
    {
        max_number = max(max_number,arr[i]);
    }
    int k = max_number+1;

    // create the count array of size max_number
    int count[k] = {0};

    // Increase the value of the index of count array which is present in main array
    for(int i=0; i<n; i++)
    {
        count[arr[i]]++;
    }

    // Insert the number at the index of count array, how many less than or equal number is present in the main array
    for(int i=1; i<k; i++)
    {
        count[i] += count[i-1];
    } 

    // Create the output array of size n and sort the array
    int output[n];
    for(int i=n-1; i>=0; i--) // Create the loop in reverse for stability(marks of students)
    {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }

    // Copy the output array in the main array
    for(int i=0; i<n; i++)
    {
        arr[i] = output[i];
    }
}  

int main()
{

    int arr[] = {7,3,9,5,1,4,2,6,8};
    int n = sizeof(arr)/sizeof(int);
    counting_sort(arr,n); // Passing a function as a parameter

    for(int x: arr)
    {
        cout << x << " ";
    }

    return 0;
}
