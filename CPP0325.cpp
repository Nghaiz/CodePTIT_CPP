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
        string s;
        cin >> s;
        int n = s.size(), t1 = 0, t2 = 0;
        for (int i = 0; i < n; i++){
            if (i & 1) t1 += s[i] - '0';
            else t2 += s[i] - '0';
        }
        if (abs(t2 - t1) % 11 == 0) cout << "1\n";
        else cout << "0\n";
    }
    return 0;
}