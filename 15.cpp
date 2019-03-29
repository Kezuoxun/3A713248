#include<iostream>
using namespace std;


int main()
{
    int h, m;
    //7:30~17:00
    while( cin >> h >> m )
    {
        if( h<7 )
        {
            cout << "Off School" << endl;
        }
        if( h==7 && m<30 )
        {
            cout << "Off School" << endl;
        }
        if( h==7 && m>=30 )
        {
            cout << "At School" << endl;
        }
        if( h>7 && h<17 )
        {
            cout << "At School" << endl;
        }
        if( h>=17 )
        {
            cout << "Off School" << endl;
        }
    }
    return 0;
}

