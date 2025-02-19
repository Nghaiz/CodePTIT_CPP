#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, max = -1e9;
    cin >> n;
    int b[1001] = {};
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        b[x]++;
        if (x > max) max = x;
    }
    for (int i = 1; i <= max; i++){
        if (b[i]) cout << i << " ";
    }
    return 0;
}