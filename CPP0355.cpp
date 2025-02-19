#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string s;
    vector<string> v;
    while (cin >> s){
        transform(begin(s), end(s), begin(s), ::tolower);
        v.push_back(s);
    }
    bool ok = true;
    for (string x : v){
        if (ok){
            x[0] = toupper(x[0]);
            ok = false;
        }
        char tmp = *x.rbegin();
        if (tmp == '.' || tmp == '?' || tmp == '!'){
            x.pop_back();
            cout << x << "\n";
            ok = true;
        }
        else cout << x << " ";
    }
    return 0;
}