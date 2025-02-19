#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        int n;
        string s, res = "";
        cin >> n >> s;
        for (char x : s){
            switch(x){
                case '0': case '1': 
                    break;
                case '2': case '3':
                    res += x;
                    break;
                case '4':
                    res += "322";
                    break;
                case '5':
                    res += x;
                    break;
                case '6':
                    res += "53";  //6! = 6 * 5! = 3! * 5!
                    break;
                case '7':
                    res += x;
                    break;
                case '8':
                    res += "7222";  //8! = 8 * 7! = 2! * 2! * 2! * 7!
                    break;
                default:
                    res += "7332"; //9! = 9 * 8 * 7! = 3 * 3 * 2! * 2! * 2! * 7! = 3! * 3! * 2! * 7!
                    break;          
            }       
        }
        sort(res.begin(), res.end(), greater<int>());
        cout << res << "\n";
    }
    return 0;
}
