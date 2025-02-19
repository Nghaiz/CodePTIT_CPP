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
        int n, k, x;
        cin >> n >> k;
        multiset<int> se;
        for (int i = 0; i < n; i++){
            cin >> x;
            se.insert(x);
        }
        vector<int> v;
        for (int x : se) v.push_back(x);
        cout << v[--k] << "\n";
    }
    return 0;
}