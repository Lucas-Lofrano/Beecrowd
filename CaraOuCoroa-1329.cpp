#include <bits/stdc++.h>

using namespace std;

int main() {
    int nroCasos;
    cin >> nroCasos;
    while (true) {
        if (nroCasos == 0) {
            break;
        }
        int maria = 0, joao = 0;
        for (int i = 0; i < nroCasos; ++i) {
            int n;
            cin >> n;
            if (n == 0) {
                maria++;
            }
            else {
                joao++;
            }
        }
        cout << "Mary won " << maria << " times and John won " << joao << " times" << '\n';

        cin >> nroCasos;
    }

    return 0;
}