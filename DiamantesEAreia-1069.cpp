#include <bits/stdc++.h>

using namespace std;

int main() {
    int nroCasos;
    cin >> nroCasos;
    for (int i = 0; i < nroCasos; ++i) {
        int nroDiamantes = 0;
        stack<char> P;
        string S;
        cin >> S;
        for (auto s : S) {
            if (s == '<') {
                P.push(s);
            }
            else if (s == '>') {
                if (!P.empty()) {
                    P.pop();
                    nroDiamantes++;
                }
            }
            else {
                continue;
            }
        }
        cout << nroDiamantes << '\n';
    }

    return 0;
}