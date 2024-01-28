#include <bits/stdc++.h>

using namespace std;

int main() {
    while (true) {
        int nroRodadas;
        cin >> nroRodadas;
        if (nroRodadas == 0) {
            break;
        }

        int vA = 0, vB = 0;
        int auxA, auxB;

        for (int i = 0; i < nroRodadas; i++) {
            cin >> auxA >> auxB;
            if (auxA > auxB) {
                vA++;
            }
            else if (auxB > auxA) {
                vB++;
            }
            else {
                continue;
            }
        }

        cout << vA << ' ' << vB << '\n';
    }
    return 0;
}