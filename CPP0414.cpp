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
        int cnt[10] = {0};
        int n;
        cin >> n;
        string s;
        for (int i = 0; i < n; i++){
            cin >> s;
            for (int j = 0; j < s.length(); j++){
                cnt[s[j] - '0'] = 1;
            }
        }
        for (int i = 0; i <= 9; i++){
            if (cnt[i]) cout << i << " "; 
        }
        cout << "\n";
    }
    return 0;
}