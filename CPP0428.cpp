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
        int n, m, x;
        cin >> n >> m;
        multiset<int> ms;
        for (int i = 0; i < n + m; i++){
            cin >> x;
            ms.insert(x);
        }
        for (int x : ms) cout << x << " ";
        cout << "\n";
    }
    return 0;
}