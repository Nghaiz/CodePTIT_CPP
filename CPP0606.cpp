#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

class NhanVien{
    private:
        string ma, ten, sex, dob, dc, tax, date;
    public:
        friend istream& operator >> (istream &in, NhanVien &x){
            x.ma = "00001";
            getline(in, x.ten);
            in >> x.sex >> x.dob;
            cin.ignore();
            getline(in, x.dc);
            in >> x.tax >> x.date;
            return in;
        }   
        friend ostream& operator >> (ostream &out, NhanVien x){
            out << x.ma << " " << x.ten << " " << x.sex << " " << x.dob << " " << x.dc << " " << x.tax << " " << x.date;
            return out;
        }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    NhanVien a;
    cin >> a;
    cout >> a;
    return 0;
}