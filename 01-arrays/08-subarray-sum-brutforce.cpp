#include <iostream>

using namespace std;

 int sub_array(int *arr, int n)
 {
     int maximum_sum = 0;
     for(int i=0; i<n; i++)
     {
         for(int j=i; j<n; j++)
         {
             int sum = 0;
             for(int k=i; k<=j; k++)
             {       
                 sum += arr[k];
             }
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