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
        int n;
        cin >> n;
        int a[n];
        for (int &x : a) cin >> x;
        sort(a, a + n);
        int tmp = a[0], flag = 1;
        for (int i = 1; i < n; i++){
            if (a[i] > tmp){
                flag = 0;
                tmp = a[i];
                break;
            } 
        }
        if (flag) cout << "-1\n";
            
        else cout << a[0] << " " << tmp << "\n";
    }
    return 0;
}