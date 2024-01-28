#include <bits/stdc++.h>

using namespace std;

int main() {

    vector<int> V1;

    while (true) {
        int nroQuestoes;
        cin >> nroQuestoes;
        if (nroQuestoes == 0) {
            break;
        }

        for(int i = 0; i < nroQuestoes; ++i) {

            int aux0, aux1, aux2, aux3, aux4;
            cin >> aux0 >> aux1 >> aux2 >> aux3 >> aux4;
            V1.push_back(aux0);
            V1.push_back(aux1);
            V1.push_back(aux2);
            V1.push_back(aux3);
            V1.push_back(aux4);

            int cPreto = 0, cBranco = 0, pos = 0, aux = 0;

            for(vector<int>::iterator it = V1.begin(); it != V1.end(); ++it, ++aux) {
                if ( *it > 127 ) {
                    cBranco++;
                } else {
                    cPreto++;
                    pos = aux;
                }
            }

            if (cPreto > 1 || cBranco == 5) {
                cout << '*' << '\n';
            }
            else if (pos == 0) {
                cout << 'A' << '\n';
            }
            else if (pos == 1) {
                cout << 'B' << '\n';
            }
            else if (pos == 2) {
                cout << 'C' << '\n';
            }
            else if (pos == 3) {
                cout << 'D' << '\n';
            }
            else {
                cout << 'E' << '\n';
            }

            V1.clear();
        }
    }
    
    return 0;
}