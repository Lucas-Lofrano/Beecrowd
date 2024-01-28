#include <bits/stdc++.h>

using namespace std;

int main() {
    int nroCasos;
    cin >> nroCasos;
    for(int i = 0; i < nroCasos; ++i) {
        int nroItens, nroCompras;
        float total = 0.0;
        map<string, float> M;
        cin >> nroItens;
        for(int j = 0; j < nroItens; ++j) {
            string s;
            float f;
            cin >> s >> f;
            M.emplace(s, f);
        }

        cin >> nroCompras;
        for(int j = 0; j < nroCompras; ++j) {
            string s;
            int n;
            cin >> s >> n;
            total += (M[s] * n);
        }

        cout << "RS " << setiosflags (ios::fixed) << setprecision(2) << total << '\n';
    }

    return 0;
}