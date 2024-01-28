#include <bits/stdc++.h>

using namespace std;

int main() {
    string s1, s2;
    while(cin >> s1 >> s2) {
        int i1 = stoi(s1), i2 = stoi(s2);
        int total = 0;

        for(; i1 <= i2; ++i1) {
            string S = to_string(i1);
            array<int, 10> M = {};
            bool unico = true;

            for(auto s : S) {
                int n = s - '0';
                M[n]++;
                if (M[n] > 1) {
                    unico = false;
                    break;
                }
            }

            if (unico) {
                total++;
            }
        }

        cout << total << '\n';
    }

    return 0;
}