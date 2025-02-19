#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

typedef struct sinhVien {
    string msv, ten, lop, mail;

    friend istream& operator >> (istream &in, sinhVien &x){
        in >> x.msv;
        cin.ignore();
        getline(cin, x.ten);
        in >> x.lop >> x.mail;
        return in;
    }
    friend ostream& operator << (ostream &out, sinhVien x){
        out << x.msv << " " << x.ten << " " << x.lop << " " << x.mail << "\n";
        return out;
    }
} sv;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, q;
    cin >> n;
    sv a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    cin >> q;
    cin.ignore();
    while (q--){
        string nganh, w;
        getline(cin, nganh);
        transform(begin(nganh), end(nganh), begin(nganh), ::toupper);
        cout << "DANH SACH SINH VIEN NGANH " << nganh << ":\n";

        string check = "";  //Nganh viet tat
        stringstream ss(nganh);
        ss >> w; check += w[0];
        ss >> w; check += w[0];

        for (sv x : a){
            if (check == "CN" || check == "AT"){
                if (x.lop[0] != 'E' && (x.msv.substr(5, 2) == check)) cout << x;
            }
            else {
                if (x.msv.substr(5, 2) == check) cout << x;
            }
        }
    }
    return 0;
}