#include <iostream>
#include <algorithm>
#include <math.h>
#include <iomanip>
#define ll long long

using namespace std;

void solve (int n, int k){
    int cnt = 0;
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0){
            while (n % i == 0){
                ++cnt;
                if (k == cnt) {
                    cout << i;
                    return;
                }
                n /= i;
            }
        }
    } 
    if (n != 1) {
        ++cnt;
        if (k == cnt) {
            cout << n;
            return;
        }
    }
    cout << "-1";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; 
    cin >> t;
    while (t--){
        int n, k;
        cin >> n >> k;
        solve(n, k);
        cout << "\n";
    }
    return 0;
}