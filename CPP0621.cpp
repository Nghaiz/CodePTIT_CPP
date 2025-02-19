#include <bits/stdc++.h>
using namespace std;

typedef struct sinhVien {
    string msv, ten, lop, mail;
    bool friend operator < (sinhVien a, sinhVien b){
        return a.msv < b.msv;
    }
    friend istream& operator >> (istream &in, sinhVien &x){
        in >> x.msv;
        cin.ignore();
        getline(in, x.ten);
        in >> x.lop >> x.mail;
        return in;
    }
} sv;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    sv a;
    vector<sv> v;
    while (cin >> a){
        v.push_back(a);
    }
    sort(begin(v), end(v));
    for (sv x : v){
        cout << x.msv << " " << x.ten << " " << x.lop << " " << x.mail << "\n";
    }
    return 0;
}   