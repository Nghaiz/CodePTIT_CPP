#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

int cnt = 1;

typedef struct NhanVien {
    int ma;
    string ten, sex, dob, dc, tax, date;

    friend istream& operator >> (istream &in, NhanVien &x){
        cin.ignore();
        getline(in, x.ten);
        in >> x.sex >> x.dob;
        cin.ignore();
        getline(in, x.dc);
        in >> x.tax >> x.date;
        x.ma = cnt++;
        return in;
    }
    friend ostream& operator << (ostream &out, NhanVien x){
        out << setw(5) << setfill('0') << x.ma << " ";
        out << x.ten << " " << x.sex << " " << x.dob << " " << x.dc << " " << x.tax << " " << x.date << "\n";
        return out;
    }
} nv;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}