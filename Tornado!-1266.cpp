#include <bits/stdc++.h>

using namespace std;

int main() {
    int nroCasos;
    cin >> nroCasos;
    while (true) {
        if (nroCasos == 0) {
            break;
        }
        list<int> L;
        for(int i = 0; i < nroCasos; ++i) {
            int n;
            cin >> n;
            L.emplace_back(n);
        }
        auto it = L.begin();
        bool precisa = true;

        for(; it != L.end(); ++it) {
            if (*it == 1) {
                precisa = false;
                break;
            }
        }

        if (precisa) {
            it = L.begin();
        }

        auto aux = it;
        int con = 0;
        do {
            if (*aux == 1) {
                precisa = false;
            }
            else if (*aux == 0 && !precisa) {
                precisa = true;
            }
            else {
                precisa = false;
                con++;
            }

            aux = (next(aux) == L.end()) ? L.begin() : next(aux);

        } while (aux != it);

        cout << con << '\n';

        cin >> nroCasos;
    }
    return 0;
}