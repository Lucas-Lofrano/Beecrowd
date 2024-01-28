#include <bits/stdc++.h>

using namespace std;

int main() {
    int nroCasos;
    cin >> nroCasos;
    for(int i = 0; i < nroCasos; ++i) {
        string s;
        int res;
        cin >> s;
        if (s[0] == s[2]) {
            res = (s[0] - '0') * (s[2] - '0');
        }
        else if (isupper(s[1])) {
            res = (s[2] - '0') - (s[0] - '0');
        }
        else {
            res = (s[0] - '0') + (s[2] - '0');
        }
        cout << res << '\n';
    }
    return 0;
}