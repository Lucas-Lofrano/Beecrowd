#include <bits/stdc++.h>

using namespace std;

int main() {
    int nroCasos;
    cin >> nroCasos;

    while (true) {
        if (nroCasos == 0) {
            break;
        }
        int pares = 0;
        
        for (int i = 0; i < nroCasos; ++i) {
            int tam, n;
            cin >> tam >> n;
            pares += n/2;
        }

        cout << pares/2 << '\n';
        cin >> nroCasos;
    }

    return 0;
}