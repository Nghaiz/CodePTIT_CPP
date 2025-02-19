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
        string s;
        cin >> s;
        multiset<char> ms;
        int sum = 0;
        for (char x : s){
            if (isdigit(x)) sum += x - '0';
            else ms.insert(x);
        }
        for (char x : ms) cout << x;
        cout << sum << "\n";
    }
    return 0;
}