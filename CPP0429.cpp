#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, k, b, x;
    cin >> n >> k >> b;
    vector<int> a(n, 1);
    for (int i = 0; i < b; i++){
        cin >> x;
        a[--x] = 0;
    }
    
    int sum = 0;
    for (int i = 0; i < k; i++){
        sum += a[i];
    }
    
    int max_val = sum;
    for (int i = 1; i <= n - k; i++){
        sum += a[i + k - 1] - a[i - 1];
        if (sum > max_val){
            max_val = sum;
        }
    }
    cout << k - max_val;
    return 0;
}