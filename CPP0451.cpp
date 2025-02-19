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
        cin >> n;
        vector<int> a(n);
        for (int &x : a) cin >> x;
        sort(a.begin(), a.end());

        cin >> k >> x;

        int idx = -1;
        for (int i = 0; i < n; i++){
            if (a[i] == x){
                idx = i;
                break;
            }   
        }
        for (int i = idx - (k / 2); i < idx; i++) cout << a[i] << " ";
        for (int i = idx + 1; i <= idx + (k / 2); i++) cout << a[i] << " ";
        cout << "\n";
    }
    return 0;
}