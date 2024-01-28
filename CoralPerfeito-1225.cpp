/*
COM TIMELIMIT
#include <bits/stdc++.h>

using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
    int nroCasos;
    while(cin >> nroCasos) {
        vector<int> V;
        for(int i = 0; i < nroCasos; ++i) {
            int n;
            cin >> n;
            V.emplace_back(n);
        }
        int compassos = 1;
        while(true) {
            auto it1 = min_element(V.begin(), V.end());
            auto it2 = max_element(V.begin(), V.end());
            int dif = (*it2) - (*it1);
            if (dif > 1) {
                (*it1)++;
                (*it2)--;
                compassos++;
            }
            else if (dif == 1) {
                cout << "-1" <<'\n';
                break;
            }
            else {
                cout << compassos << '\n';
                break;
            }
        }
    }

    return 0;
}
*/
#include <bits/stdc++.h>

using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
    int nroCasos;
    while(cin >> nroCasos) {
        vector<int> V;
        int soma = 0;
        for(int i = 0; i < nroCasos; ++i) {
            int n;
            cin >> n;
            soma += n;
            V.emplace_back(n);
        }
        if (soma % nroCasos != 0) {
            cout << "-1" << '\n';
        }
        else {
            int compassos = 1;
            soma = soma/nroCasos;
            for (int i = 0; i < nroCasos; ++i) {
                if (V[i] < soma) {
                    compassos += (soma - V[i]);
                }
            }
            cout << compassos << '\n';
        }
        
    }

    return 0;
}
