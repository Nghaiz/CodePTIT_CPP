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
        void chuanHoa(){
            string w, name = "", birth = "";
            stringstream ss1(ten), ss2(dob);
            while (ss1 >> w){
                name += toupper(w[0]);
                for (int i = 1; i < w.size(); i++){
                    name += tolower(w[i]);
                }
                name += " ";
            }   
            name.pop_back();
            ten = name;

            while (getline(ss2, w, '/')){
                if (w.size() == 1){
                    birth += '0' + w + '/';
                }
                else {
                    birth += w;
                    if (w.size() != 4) birth += '/';
                }
            }
            dob = birth;
        }
        friend istream& operator >> (istream &in, SinhVien &x){
            x.msv = "B20DCCN001";
            getline(in, x.ten);
            in >> x.lop >> x.dob >> x.gpa;
            return in;
        }
        friend ostream& operator << (ostream &out, SinhVien x){
            x.chuanHoa();
            out << fixed << setprecision(2) <<  x.msv << " " << x.ten << " " << x.lop << " " << x.dob << " " << x.gpa;
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