#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

ll value(string s){
    ll ans = 0;
    for (char x : s){
        if (!isdigit(x) || ans > INT_MAX) return 0;
        ans = ans * 10 + (x - '0');
    }
    return ans;
}

int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    ifstream in;
    in.open("DATA.in");
    
    ll sum = 0;
    string s;
    while (in >> s){
        sum += value(s);
    }
    cout << sum;
    return 0;
}