#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int findCountOfSolutions(int n, int p)
{
    // Initialize result
    ll ans = 0;
 
    // Traverse all numbers smaller than
    // given number p. Note that we don't
    // traverse from 1 to n, but 1 to p
    for (ll x=1; x<p; x++)
    {
        // If x is a solution, then count all
        // numbers of the form x + i*p such
        // that x + i*p is in range [1,n]
        if ((x*x)%p == 1)
        {
            // The largest number in the
            // form of x + p*i in range
            // [1, n]
            ll last = x + p * (n/p);
            if (last > n)
                last -= p;
 
            // Add count of numbers of the form 
            // x + p*i. 1 is added for x itself.
            ans += ((last-x)/p + 1);
        }
    }
    return ans;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int b, p;
        cin >> b >> p;
        cout << findCountOfSolutions(b, p) << endl;
    }
    return 0;
}
