#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> V(2);
    for (int &a : V) 
        cin >> a;

    if (V[0] == 0) {
        cout << 'C' << '\n';
    }
    else if (V[0] == 1 && V[1] == 0) {
        cout << 'B' << '\n';
    }
    else {
        cout << 'A' << '\n';
    }

    return 0;
}