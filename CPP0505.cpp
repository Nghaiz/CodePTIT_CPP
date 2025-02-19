#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

typedef struct NhanVien{
    string ten, sex, dob, dc, tax, date;
} nv;

void nhap(nv &x){
    getline(cin, x.ten);
    getline(cin, x.sex);
    getline(cin, x.dob);
    getline(cin, x.dc);
    getline(cin, x.tax);
    getline(cin, x.date);
}

void in(nv x){
    cout << "00001 " << x.ten << " " << x.sex << " " << x.dob << " " << x.dc << " " << x.tax << " " << x.date;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    nv a;
    nhap(a);
    in(a);
    return 0;
}