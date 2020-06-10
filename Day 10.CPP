#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int n, b[1000], i = 0, o = 0, flag = 0, max = 0;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    while(n != 0)
    {
        b[i] = n % 2;
        n = n / 2;
        i++;
    }

    for(int j = 0; j < i; j++)
    {
        if(b[j] == 1)
            flag = 1;
        else
        {
            flag = 0;
            o = 0;
        }
        if(flag == 1)
        {
            o++;
            if(o > max)
                max = o;
        }
    }
    
    cout << max;

    return 0;
}
