#include <bits/stdc++.h>

using namespace std;

int main() {
    int nroCasos;
    cin >> nroCasos;
    for(int i = 0; i < nroCasos; ++i) {
        int nroLugares, nroElem;
        map<int, vector<int>> M;
        cin >> nroLugares >> nroElem;
        for(int j = 0; j < nroElem; ++j) {
            int n, chave;
            cin >> n;
            chave = (n%nroLugares);
            (M[chave]).push_back(n);
        }
        for(int j = 0; j < nroLugares; ++j) {
            auto it = M.find(j);
            if (it != M.end()) {
                cout << j << " -> ";
                for(unsigned int k = 0; k < (M[j]).size(); ++k) {
                    cout << (M[j])[k] << " -> ";
                }
                cout << '\\' << '\n';
            }
            else {
                cout << j << " -> " << '\\' << '\n';
            }
        }
        if (i != (nroCasos -1)) {
            cout << '\n';
        }
    }


    return 0;
}