#include <iostream>

using namespace std;

int main()
{
    // Initialization with one value
    int marks[100] = {-1};

    /* Other initialization techniques
    int a[100];
    int a[100] = {0};
    int a[100] = {1,2,3};
    int a[] = {1,2,3};
    string fruits[4] = {"apple", "mango", "guava", "pomgranate"} */

    int n;
    cout << "Enter the number of student";
    cin >> n;

    // Take array input
    for(int i=0; i<n; i++)
    {
        cin >> marks[i];
    }

    // Output
    for(int i=0; i<n; i++)
    {
        cout << marks[i] << " ";
    }

    return 0;
}