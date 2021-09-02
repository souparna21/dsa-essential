#include <iostream>

using namespace std;

 int sub_array(int *arr, int n)
 {
     int maximum_sum = 0;

     // Create prefix sum array
     int prefix_sum[n] = {0};
     for(int i=1; i<n; i++)
    {
        prefix_sum[i] = prefix_sum[i-1] + arr[i];
    }
     for(int i=0; i<n; i++)
     {
         for(int j=i; j<n; j++)
         {
             int sum = (i>0 ? prefix_sum[j]-prefix_sum[i] : prefix_sum[j]);
             maximum_sum = max(maximum_sum,sum);
         }
     }
     return maximum_sum;
 }   

int main()
{

    int arr[] = {-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(arr)/sizeof(int);
    cout << sub_array(arr,n);

    return 0;
}