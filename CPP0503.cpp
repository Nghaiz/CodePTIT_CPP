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

void rutgon(ps &x){
    ll mc = __gcd(x.tu, x.mau);
    x.tu = x.tu / mc;
    x.mau = x.mau / mc;
}

void in(ps x){
    cout << x.tu << '/' << x.mau;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    ps p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}