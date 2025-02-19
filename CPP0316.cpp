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
        while (s.size() > 1){
            int sum = 0;
            for (char x : s){
                sum += x - '0';
            }
            s = to_string(sum);
        }
        if (s == "9") cout << "1\n";
        else cout << "0\n";
    }
    return 0;
}