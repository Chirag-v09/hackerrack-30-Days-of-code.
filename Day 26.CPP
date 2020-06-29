#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int da, de, ma, me, ya, ye;
    cin >> da >> ma >> ya >> de >> me >> ye;
    if(ya == ye)
    {
        if(ma == me)
        {
            if(da <= de)
            {
                cout << "0";
            }
            else
            {
                cout << 15*(da-de);
            }
        }
        else
        {
            if(ma < me)
            {
                cout << "0";
            }
            else
            {
                cout << 500*(ma - me);
            }
        }
    }
    else
    {
        if(ya < ye)
        {
            cout << "0";
        }
        else
        {
            cout << 10000;
        }
    }

    return 0;
}
