#include <bits/stdc++.h>
using namespace std;

int cnt = 1;

typedef struct giangVien{
    int stt;
    string ten, nganh;

    friend istream& operator >> (istream &in, giangVien &x){
        x.stt = cnt++;
        getline(in, x.ten);
        getline(in, x.nganh);
        return in;
    }
} gv;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, q;
    cin >> n;
    cin.ignore();
    gv a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    cin >> q;
    cin.ignore();
    while (q--){
        string s, w, tmp = "";
        getline(cin, s);
        stringstream ss(s);
        while (ss >> w){
            tmp += toupper(w[0]);
        }
        cout << "DANH SACH GIANG VIEN BO MON " << tmp << ":\n";
        for (gv x : a){
            if (s == x.nganh){
                cout << "GV";
                cout << setw(2) << setfill('0') << x.stt << " ";
                cout << x.ten << " " << tmp << "\n";
            }
        }
    }
    return 0;
}