#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

typedef struct SinhVien {
    string ten, lop, dob;
    double gpa;
} sv;

void nhap(sv &x){
    getline(cin, x.ten);
    getline(cin, x.lop);
    getline(cin, x.dob);
    cin >> x.gpa;
}

void in(sv x){
    cout << fixed << setprecision(2) << "B20DCCN001 " << x.ten << " " << x.lop << " ";
    string w;
    stringstream ss(x.dob);
    while (getline(ss, w, '/')){
        if (w.size() != 4){
            cout << setw(2) << setfill('0') << w << "/";
        }
        else cout << w << " ";
    }
    cout << x.gpa;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    sv a;
    nhap(a);
    in(a);
    return 0;
}