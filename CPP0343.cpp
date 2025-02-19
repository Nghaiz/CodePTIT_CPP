#include <bits/stdc++.h>
#define ll long long

using namespace std;

int check(int a[], int n) {
    int even = 0, odd = 0;
    
    for (int i = 0; i < n; i++) {
        if (a[i] & 1) ++odd;
        else ++even;
    }
    if (n & 1) return odd > even;
    else return even > odd;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    cin.ignore(); 
    while (t--) {
        string line;
        getline(cin, line);
        istringstream iss(line);

        int a[200];  
        int num;
        int cnt = 0;

        while (iss >> num) {
            a[cnt++] = num;
        }

        if (check(a, cnt)) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }
    return 0;
}
