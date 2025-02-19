#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

class PhanSo{
    private: 
        ll tu, mau;
    public:
        PhanSo(ll tu, ll mau){
            this->tu = tu;
            this->mau = mau;
        }
        void rutgon(){
            ll uc = __gcd(tu, mau);
            tu = tu / uc;
            mau = mau / uc;
        }
        friend PhanSo operator + (PhanSo a, PhanSo b){
            PhanSo res(1, 1);
            res.mau = a.mau * b.mau;
            res.tu = a.tu * b.mau + b.tu * a.mau;
            return res;
        }
        friend istream& operator >> (istream &in, PhanSo &x){
            in >> x.tu >> x.mau;
            return in;
        }
        friend ostream& operator << (ostream &out, PhanSo x){
            x.rutgon();
            out << x.tu << '/' << x.mau;
            return out;
        }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
    return 0;
}