#include <iostream>
#include <algorithm>
#include <math.h>
#include <iomanip>
#define ll long long

using namespace std;

int check (ll n){
    int rev = 0, m = n;
    while (n){
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev == m;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        ll n;
        cin >> n;
        if (check(n)) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }
    return 0;
}