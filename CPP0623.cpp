#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

typedef struct sinhVien {
    string msv, ten, lop, mail;
} sv;

void nhap(sv &x){
    cin >> x.msv;
    cin.ignore();
    getline(cin, x.ten);
    cin >> x.lop >> x.mail;
}

void in(sv x){
    cout << x.msv << " " << x.ten << " " << x.lop << " " << x.mail << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, q;
    cin >> n;
    sv a[n];
    for (int i = 0; i < n; i++){
        nhap(a[i]);
    }
    cin >> q;
    while (q--){
        string year;
        cin >> year;
        cout << "DANH SACH SINH VIEN KHOA " << year << ":\n";
        year = year.substr(2);
        for (int i = 0; i < n; i++){
            if (year == a[i].lop.substr(1, 2)){
                in(a[i]);
            }
        }
    }
    return 0;
}