#include <iostream>
#include <algorithm>

using namespace std;

bool compare(int a, int b)
{
    return (a > b); // Print max to min 
    // return (a < b) => print min to max
}   

int main()
{

    int arr[] = {7,3,9,5,1,4,2,6,8};
    int n = sizeof(arr)/sizeof(int);
    sort(arr,arr+n, compare); // Passing a function as a parameter

    for(int x: arr)
    {
        cout << x << " ";
    }

    return 0;
}

/*
#include <iostream>
#include <algorithm>

using namespace std;  

int main()
{

    int arr[] = {7,3,9,5,1,4,2,6,8};
    int n = sizeof(arr)/sizeof(int);
    sort(arr,arr+n, greater<int>()); // Inbuilt function to sort in reverse order 

    for(int x: arr)
    {
        cout << x << " ";
    }

    return 0;
}
*/
