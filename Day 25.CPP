#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long n;
    cin >> n;
    int a[n], flag = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++)
    {
        if(a[i] == 1)
        {
            cout << "Not prime" << endl;
            continue;
        }
        for(int j = 2; j <= sqrt(a[i]); j++)
        {
            if(a[i]%j == 0)
                flag = 1;
        }
        if(flag == 0)
            cout << "Prime" << endl;
        else {
            cout << "Not prime" << endl;
        }
        flag = 0;
    }

    return 0;
}
