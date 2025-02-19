#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

typedef struct SinhVien{
    int msv;
    string ten, lop, dob;
    double gpa;
} sv;

void nhap(sv a[], int n){
    for (int i = 1; i <= n; i++){
        cin.ignore();
        getline(cin, a[i].ten);

        string w, name = "";
        stringstream ss(a[i].ten);
        while (ss >> w){
            name += toupper(w[0]);
            for (int j = 1; j < w.size(); j++){
                name += tolower(w[j]);
            }
            name += " ";
        }
        a[i].ten = name;

        cin >> a[i].lop >> a[i].dob >> a[i].gpa;
        a[i].msv = i;
    }
}

void in(sv a[], int n){
    for (int i = 1; i <= n; i++){
        cout << "B20DCCN";
        cout << setw(3) << setfill('0') << a[i].msv << " ";
        cout << a[i].ten << a[i].lop << " ";
        string w;
        stringstream ss(a[i].dob);
        while (getline(ss, w, '/')){
            if (w.size() != 4){
                cout << setw(2) << setfill('0') << w << "/";
            }
            else cout << w << " ";
        }
        cout << fixed << setprecision(2) << a[i].gpa << "\n";
    }
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}