#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int m, s;
    cin >> m >> s;
    if (s > m * 9 || (s == 0 && m > 1)) {
        cout << "-1 -1";
        return 0;
    }

    string min = "", max = "";
    int tmp = s;

    for (int i = 0; i < m; i++){
        if (s >= 9) {
            max.push_back('9');
            s -= 9;
        }
        else {
            max.push_back(s + '0');
            s = 0;
        }
    }

    --tmp;
    for (int i = 0; i < m - 1; i++){
        if (tmp >= 9){
            min = '9' + min;
            tmp -= 9;
        }
        else {
            min = to_string(tmp) + min;
            tmp = 0;
        }
    }
    min = to_string(tmp + 1) + min;
    cout << min << " " << max;
    return 0;
}