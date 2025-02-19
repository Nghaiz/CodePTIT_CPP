#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

ll transform(string s, char from, char to){
    for (char &x : s){
        if (x == from) x = to;
    }
    return stoll(s);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        string x1, x2;
        cin >> x1 >> x2;
        ll min_sum = transform(x1, '6', '5') + transform(x2, '6', '5');
        ll max_sum = transform(x1, '5', '6') + transform(x2, '5', '6');

        cout << min_sum << " " << max_sum << "\n";
    }
    return 0;
}