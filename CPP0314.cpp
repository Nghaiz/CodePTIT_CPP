#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    cin.ignore();
    unordered_set<string> se;
    while (t--){
        string s;
        getline(cin, s);
        se.insert(s);
    }
    cout << se.size();
    return 0;
}