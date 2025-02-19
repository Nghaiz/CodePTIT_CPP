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
        friend istream& operator >> (istream &in, SinhVien &x){
            x.msv = "B20DCCN001";
            getline(in, x.ten);
            cin >> x.lop >> x.dob >> x.gpa;
            return in;
        }   
        friend ostream& operator << (ostream &out, SinhVien x){
            out << x.msv << " " << x.ten << " " << x.lop << " ";
            string w;
            stringstream ss(x.dob);
            while(getline(ss, w, '/')){
                if (w.size() != 4) {
                    cout << setw(2) << setfill('0') << w << '/';
                }
                else cout << w << " ";
            }
            cout << fixed << setprecision(2) << x.gpa;
            return out;
        }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}