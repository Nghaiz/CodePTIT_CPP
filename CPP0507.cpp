#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

typedef struct PhanSo {
    ll tu, mau;
} ps;

void nhap(ps &x){
    cin >> x.tu >> x.mau;
}

ps rutgon(ps x){
    ps res;
    ll tmp = __gcd(x.tu, x.mau);
    res.tu = x.tu / tmp;
    res.mau = x.mau / tmp;
    return res;
}

ps tong(ps a, ps b){
    ps ans;
    ll mc = a.mau / __gcd(a.mau, b.mau) * b.mau;
    ans.mau = mc;
    ans.tu = (mc / a.mau) * a.tu + (mc / b.mau) * b.tu;
    return rutgon(ans);
} 

void in(ps x){
    cout << x.tu << '/' << x.mau;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    ps p,q;
	nhap(p); nhap(q);
	ps t = tong(p,q);
	in(t);
    return 0;
}