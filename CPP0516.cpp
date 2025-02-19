#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

typedef struct matHang {
    int ma;
    string ten, nhom;
    double mua, ban, earn;

    bool friend operator > (matHang a, matHang b){
        return a.earn > b.earn;
    }
} mh;

void nhap(mh &x){
    getline(cin, x.ten);
    getline(cin, x.nhom);
    cin >> x.mua >> x.ban;
    x.earn = x.ban - x.mua;
}

void in(mh x){
    cout << fixed << setprecision(2) << x.ma << " " << x.ten << " " << x.nhom << " " << x.earn << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    mh a[n];
    for (int i = 0; i < n; i++){
        cin.ignore();
        a[i].ma = i + 1;
        nhap(a[i]);
    }
    sort(a, a + n, greater<mh>());
    for (int i = 0; i < n; i++){
        in(a[i]);
    }
    return 0;
}