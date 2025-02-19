#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

string find (string a, string b){
    if (a.size() > b.size()) return a;
    else if (a.size() < b.size()) return b;
    else return max(a, b);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        string s, w, ans = "";
        cin >> s;
        for (char &x : s){
            if (!isdigit(x)) x = ' ';
        }
        stringstream ss(s);
        while (ss >> w){
            while (w.size() > 1 && w[0] == '0') w.erase(0, 1);

            ans = find(ans, w);
        }
        cout << ans << "\n";
    }
    return 0;
}