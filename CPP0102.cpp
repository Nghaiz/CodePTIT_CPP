#include <iostream>
#include <algorithm>
#include <math.h>
#include <iomanip>
#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        char c;
        cin >> c;
        if (c >= 'a' && c <= 'z') cout << (char)(c -32) << "\n";
        else cout << (char)(c + 32) << "\n";
    }
    return 0;
}