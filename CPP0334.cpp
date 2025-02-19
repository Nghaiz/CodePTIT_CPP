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
        string s, w;
        cin >> s;
        for (char &x : s){
            if (!isdigit(x)) x = ' ';
        }
        int ans = 0;
        stringstream ss(s);
        while (ss >> w){
            ans += stoi(w);
        }
        cout << ans << "\n";
    }
    return 0;
}