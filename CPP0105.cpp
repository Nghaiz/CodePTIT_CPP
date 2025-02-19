#include <iostream>
#include <algorithm>
#include <math.h>
#include <iomanip>
#define ll long long

using namespace std;

int check(int n){
    while (n){
        int d = n % 10;
        if (d != 0 && d != 6 && d != 8) return 0;
        n /= 10;
    }
    return 1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        if (check(n)) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }
    return 0;
}