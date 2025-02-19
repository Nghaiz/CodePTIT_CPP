#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, cnt = 0;
    cin >> n;
    string a[n];
    for (string &x : a) cin >> x;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (i != j && a[i].find(a[j]) != string::npos) ++cnt;
        }
    }
    cout << cnt;
    return 0;
}