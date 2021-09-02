#include <iostream>

using namespace std;

 int sub_array(int *arr, int n)
 {
     int maximum_sum = 0;
     int current_sum = 0;

     for(int i=0; i<n; i++)
     {
         current_sum += arr[i];
         if(current_sum < 0)
         {
             current_sum = 0;
         }
         maximum_sum = max(maximum_sum, current_sum);
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