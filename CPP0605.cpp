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
        friend istream& operator >> (istream &in, PhanSo &x){
            in >> x.tu >> x.mau;
            return in;
        }
        friend ostream& operator << (ostream &out, PhanSo x){
            out << x.tu << '/' << x.mau;
            return out;
        }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
    return 0;
}