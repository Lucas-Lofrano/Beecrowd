#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<string> V;
    int nro, pos;
    cin >> nro >> pos;

    for(int i = 0; i < nro; ++i) {
        string s;
        cin >> s;
        V.push_back(s);
    }

    sort(V.begin(), V.end());
    cout << V[pos-1] << '\n';

    return 0;
}