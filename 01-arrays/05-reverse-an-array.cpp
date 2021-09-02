#include <iostream>

using namespace std;

 void reverseArray(int *arr, int n)
 {
     int s = 0, e = n-1;

     while(s<=e)
     {
         // swap(arr[s],arr[e])     OR
         int temp = arr[s];
         arr[s] = arr[e];
         arr[e] = temp;      

         s++;
         e--;
     }
 }   

int main()
{
    int arr[] = {30,50,60,70,80,90,100};
    int n = sizeof(arr)/sizeof(int);
    reverseArray(arr,n);

    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}