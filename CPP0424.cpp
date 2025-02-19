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
        vector<int> v;
        for (int i = 0; i < k; i++){
            for (int i = 0; i < n; i++){
                cin >> x;
                v.push_back(x);
            }
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < v.size(); i++){
            cout << v[i] << " ";
        }
        cout << "\n";
    }   
    return 0;
}