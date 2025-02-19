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
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int &x : a) cin >> x;

        multiset<int> ms(a, a + k);
        for (int i = k; i < n; i++){
            cout << *ms.rbegin() << " ";
            ms.erase(ms.find(a[i - k]));
            ms.insert(a[i]);
        }
        cout << *ms.rbegin() << "\n";
    }
    return 0;
}