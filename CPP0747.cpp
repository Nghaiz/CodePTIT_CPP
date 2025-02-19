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
        string s, tmp = "100";
        cin >> s;
        int it, cnt = 0;
        while ((it = s.find(tmp)) != string::npos){
            s.erase(it, 3);
            cnt += 3;
        }
        if (s.empty()) cout << "\n";
        else cout << cnt << "\n";
    }
    return 0;
}