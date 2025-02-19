#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

typedef struct PhanSo{
    ll tu, mau;

    friend PhanSo operator + (PhanSo a, PhanSo b){
        PhanSo tong;
        tong.mau = a.mau * b.mau;
        tong.tu = a.tu * b.mau + b.tu * a.mau;
        return tong;
    }
    friend PhanSo operator * (PhanSo a, PhanSo b){
        PhanSo tich;
        tich.tu = a.tu * b.tu;
        tich.mau = a.mau * b.mau;
        return tich;
    }
} ps;

void rutgon(ps &x){
    ll uc = __gcd(abs(x.tu), abs(x.mau));
    x.tu /= uc;
    x.mau /= uc;
}

void process(ps a, ps b){
    ps c, d;
    c = (a + b) * (a + b);
    d = a * b * c;
    rutgon(c);
    rutgon(d);
    cout << c.tu << '/' << c.mau << " " << d.tu << '/' << d.mau << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
	cin >> t;
	while (t--) {
		ps A, B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
    return 0;
}   