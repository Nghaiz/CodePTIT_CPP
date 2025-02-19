#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

class SinhVien{
    private:
        string msv, ten, lop, dob;
        double gpa;
    public: 
        SinhVien(){
            msv = ten = lop = dob = "";
            gpa = 0.0;
        }
        void nhap(){
            msv = "B20DCCN001";
            getline(cin, ten);
            cin >> lop >> dob >> gpa;
        }   
        void xuat(){
            cout << msv << " " << ten << " " << lop << " ";
            stringstream ss(dob);
            string w;
            while (getline(ss, w, '/')){
                if (w.size() != 4){
                    cout << setw(2) << setfill('0') << w << '/';
                }
                else cout << w << " ";
            }
            cout << fixed << setprecision(2) << gpa;
        }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}