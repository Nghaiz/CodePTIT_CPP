#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        int n, m;
        cin >> n >> m;
        set<int> hop;
        int a[n], b[m];
        for (int &x : a) {
            cin >> x;
            hop.insert(x);
        }
        for (int &x : b){
            cin >> x;
            hop.insert(x);
        }
        for (int it : hop) cout << it << " ";
        cout << "\n";
        set<int> giao(b, b + m);
        for (int i = 0; i < n; i++){
            if (giao.find(a[i]) != giao.end()){
                cout << a[i] << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}