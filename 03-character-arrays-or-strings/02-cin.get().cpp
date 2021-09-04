#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    // By creating a character array
    char arr1[100];
    cin.get(arr1,100); // Can be mentioned terminator also => cin.get(arr1,100,'#'); -> By default terminator is '\n'
    cout << arr1 << endl;

    // By creating a loop and temp character
    char temp;
    cin.get(temp); // May or maynot write. It is written because sometimes it can take garbage values
    while(temp != '#')  // In the inverted comma you can write any termination condition
    {
        cout << temp;
        cin.get(temp);
    }
    cout << endl;

    // Store the input cahracters inside an array
    char sentense[1000];
    char temp1;
    int i = 0;
    while(temp1 != '#')
    {
        cin.get(temp1);
        sentense[i++] = temp1;
    }
    cout << sentense;

    return 0;
}
