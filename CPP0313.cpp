#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string s, t;
    getline(cin, s);
    getline(cin, t);
    s.erase(s.find(t), t.size() + 1);
    cout << s;
    return 0;
}