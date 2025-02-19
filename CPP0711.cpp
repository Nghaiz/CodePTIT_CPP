#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

void Try(int n, string s){
    if (s.size() == n){
        cout << s << " ";
        return;
    }
    Try(n, s + "0");
    Try(n, s + "1");
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        Try(n, "");
        cout << "\n";
    }
    return 0;
}