#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <map>
using namespace std;

int main() {

    map<string, int> phn;
    long int n;
    long int a;
    cin >> n;
    string s[n], s1, name;
    for(int i = 0; i < n; i++)
    {
        cin >> s1 >> a;
        phn.insert({s1, a});
    }/*
    for(int i = 0; i < n; i++)
    {
        cin >> s[i];
    }*/
    while(cin >> name) {
    if (phn.find(name) != phn.end()) {
        cout << name << "=" << phn.find(name)->second << endl;
    } else {
        cout << "Not found" << endl;
    }
}
}
