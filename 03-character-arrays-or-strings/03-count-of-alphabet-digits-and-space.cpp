#include <iostream>

using namespace std;

int main()
{
    // First store and then count
    // Take input and count simultaneously (more convinient)
    char temp;
    cin.get(temp);

    // Initialize counts of alphabets, digits and spaces
    int alphabets = 0, digits = 0, spaces = 0;

    while(temp != '\n')
    {
        if((temp >= 'a' and temp <='z') or (temp >='A' and temp <= 'Z'))
        {
            alphabets++;
        }
        else if(temp >= '0' and temp <= '9')
        {
            digits++;
        }
        else if(temp == ' ' or temp == '\t')
        {
            spaces++;
        }
        cin.get(temp);
    }

    cout << "Number of alphabets are " << alphabets << endl; 
    cout << "Number of digits are " << digits << endl; 
    cout << "Number of spaces are " << spaces << endl; 

    return 0;
}
