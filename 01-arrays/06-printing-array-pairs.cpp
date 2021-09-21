#include <iostream>

using namespace std;

 void array_pairs(int *arr, int n)
 {
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            cout << arr[i] << "," << arr[j] << endl;
        }
    }
 }   

int main()
{
    int arr[] = {30,50,60,70,80,90,100};
    int n = sizeof(arr)/sizeof(int);
    array_pairs(arr,n);

    return 0;
}