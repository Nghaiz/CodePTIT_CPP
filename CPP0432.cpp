#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

bool cmp (string a, string b){
    return (b + a) < (a + b);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        string s;
        vector<string> v;
        for (int i = 0; i < n; i++){
            cin >> s;
            v.push_back(s);
        }
        sort(v.begin(), v.end(), cmp);

        for (string s : v) cout << s;
        cout << "\n";
    }
    return 0;
}