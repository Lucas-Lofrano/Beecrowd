#include <bits/stdc++.h>

using namespace std;

int main() {
    while (true) {
        int nroElemA, nroElemB;
        cin >> nroElemA >> nroElemB;
        if (nroElemA == 0 && nroElemB == 0) {
            break;
        }
        set<int> A;
        set<int> B;
        for(int i = 0; i < nroElemA; ++i) {
            int n;
            cin >> n;
            A.emplace(n);
        }
        for(int i = 0; i < nroElemB; ++i) {
            int n;
            cin >> n;
            B.emplace(n);
        }

        vector<int> C;
        set_intersection(A.begin(), A.end(), B.begin(), B.end(), back_inserter(C));

        if (A.size() > B.size()) {
            cout << (B.size() - C.size()) << '\n';
        }
        else {
            cout << (A.size() - C.size()) << '\n';
        }
    }
    return 0;
}