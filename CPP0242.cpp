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
        int n;
        cin >> n;
        int a[n], b[n];
        for (int &x : a) cin >> x;
        for (int &x : b) cin >> x;
        
        int res = 1;
        for (int i = 0; i < n; i++){
            int s1 = 0, s2 = 0;
            for (int j = i; j < n; j++){
                s1 += a[j];
                s2 += b[j];
                
                if (s1 == s2) res = max(res, j - i + 1);
            }
        }
        cout << res << "\n";
    }
    return 0;
}