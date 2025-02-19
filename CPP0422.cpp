#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        int n, cnt = 0;
        cin >> n;
        ll x;
        for (int i = 0; i < n; i++){
            cin >> x;
            if (x != 0) cout << x << " ";
            else cnt++;
        }
        for (int i = 0; i < cnt; i++) cout << "0 ";
        cout << "\n";
    }
    return 0;
}