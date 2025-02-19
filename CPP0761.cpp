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
        ll a;
        string b;
        cin >> a >> b;
        ll tmp = 0;
        for (int i = 0; b[i] != '\0'; i++){
            tmp = (tmp * 10 + (b[i] - '0')) % a;
        }
        cout << __gcd(tmp, a) << "\n";
    }
    return 0;
}