#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

int legendre (int n, int p){
    int cnt = 0;
    for (int i = p; i <= n; i *= p){
        cnt += n / i;
    }
    return cnt;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        int n, p;
        cin >> n >> p;
        cout << legendre(n, p) << "\n";
    }
    return 0;
}