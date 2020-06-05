#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    string str[n];
    for(int i = 0; i < n; i++)
    {
        cin >> str[i];
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < str[i].size(); j = j + 2)
        {
            cout << str[i][j];
        }
        cout << " ";
        for(int j = 1; j < str[i].size(); j = j + 2)
        {
            cout << str[i][j];
        }
        cout << endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
