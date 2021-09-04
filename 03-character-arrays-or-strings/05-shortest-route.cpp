#include <iostream>

using namespace std;

int main()
{
    char route[1000];
    cin.getline(route,1000);

    int x=0, y=0;

    for(int i=0; route[i]!='\0'; i++)
    {
        switch (route[i])
        {
            case 'N': y++;
            break;
            case 'S': y--;
            break;
            case 'E': x++;
            break;
            case 'W': x--;
            break;
        }
    }

    cout << "Final value of X and Y is " << x <<"," << y << endl;

    if(x>0 and y>0)
    {
        while(x>0)
        {
            cout << 'E';
            x--;
        }
        while(y>0)
        {
            cout << 'N';
            y--;
        }
    }

    else if(x<0 and y>0)
    {
        while(x<0)
        {
            cout << 'W';
            x++;
        }
        while(y>0)
        {
            cout << 'N';
            y--;
        }
    }

    else if(x<0 and y<0)
    {
        while(x<0)
        {
            cout << 'W';
            x++;
        }
        while(y<0)
        {
            cout << 'S';
            y++;
        }
    }

    else if(x>0 and y<0)
    {
        while(x>0)
        {
            cout << 'E';
            x--;
        }
        while(y<0)
        {
            cout << 'S';
            y++;
        }
    }
    

    return 0;
}
