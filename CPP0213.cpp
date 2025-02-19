#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    unordered_set<int> fib;
    int f1 = 0, f2 = 1, fn;
    fib.insert(f1); fib.insert(f2);
    for (int i = 2; i <= 30; i++){
        fn = f1 + f2;
        f1 = f2;
        f2 = fn;
        fib.insert(fn);
    }
    int t;
    cin >> t;
    while (t--){
        int n, x;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++){
            cin >> x;
            if (fib.count(x)) v.push_back(x);
        }
        for (int x : v) cout << x << " ";
        cout << "\n";
    }
    return 0;
}