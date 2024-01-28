#include <bits/stdc++.h>

using namespace std;

int main() {
    int nroCidade = 0, nroImoveis;

    while (true) {
        map<int, int, less<>> M;
        int nroPessoas = 0, consumo = 0;

        nroCidade++;
        cin >> nroImoveis;
        if (nroImoveis == 0) {
            break;
        }
        if (nroCidade != 1) {
            cout << '\n';
        }

        for(int i = 0; i < nroImoveis; ++i) {
            int pessoas, con, chave;
            cin >> pessoas >> con;
            nroPessoas += pessoas;
            consumo += con;

            chave = (con/pessoas);
            auto it = M.find(chave);
            if (it == M.end()) {
                M.emplace(chave, pessoas);
            }
            else {
                M[chave] += pessoas;
            }
        }
        
        cout << "Cidade# " << nroCidade  << ':' << '\n';
        for(auto it = M.begin(); it != M.end(); ++it) {
            if (it == (--M.end())) {
                cout << (it -> second) << '-' << (it -> first) << '\n';
            }
            else {
                cout << (it -> second) << '-' << (it -> first) << ' ';
            }
        }
        cout << "Consumo medio: " << setiosflags(ios::fixed) << setprecision(2) << (floor((float(consumo)/float(nroPessoas)) * 100))/100 << " m3." << '\n';
    }

    return 0;
}