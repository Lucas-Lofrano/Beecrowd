#include <bits/stdc++.h>

using namespace std;

int main() {
    int Q, D, P;
    while (true) {
        cin >> Q;
        if (Q == 0) {
            break;
        }
        cin >> D >> P;
        int res = ((D*P*Q)/(P-Q));

        if (res == 1) {
            cout << res << " pagina" << '\n';
        }
        else {
            cout << res << " paginas" << '\n';
        }
    }

    return 0;
}