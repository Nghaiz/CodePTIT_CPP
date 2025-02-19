#include <iostream>
#include <algorithm>
#include <math.h>
#include <iomanip>
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll gcd (ll a, ll b){
    while (b){
        ll r = b;
        b = a % b;
        a = r;
    }
    return a;
}

ll lcm_upto_n (int n){
    ll lcm = 1;
    for (int i = 2; i <= n; i++){
        lcm = (lcm * i) / gcd(lcm, i);
    }
    return lcm;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        cout << lcm_upto_n(n) << "\n";
    }
    return 0;
}