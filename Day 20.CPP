#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, i, j, c = 0;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
    	cin >> a[a_i];
    }
    for(i = 0; i < a.size(); i++)
    {
        for(j = 0; j < a.size()-1; j++)
        {
            if(a[j] > a[j+1])
            {
                int temp;
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                c++;
            }
        }
    }
    cout << "Array is sorted in "<< c <<" swaps." << endl;
    cout << "First Element: " << a[0] << endl;
    cout << "Last Element: " << a[a.size()-1];
    return 0;
}