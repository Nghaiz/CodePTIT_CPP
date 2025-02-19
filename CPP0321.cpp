#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

void hieu(string a, string b){
    int n = max(a.size(), b.size());
    while (a.size() < n) a = "0" + a;
    while (b.size() < n) b = "0" + b;
    if (a < b) swap(a, b);

    string res = "";
    int carry = 0;

    for (int i = a.size() - 1; i >= 0; i--){
        int tmp = (a[i] - '0') - (b[i] - '0') - carry;
        if (tmp < 0){
            tmp += 10;
            carry = 1;
        }
        else carry = 0;

        res += tmp + '0';
    }
    for (int i = res.size() - 1; i >= 0; i--){
        cout << res[i];
    }
    cout << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        string a, b;
        cin >> a >> b;
        hieu(a, b);
    }
    return 0;
}