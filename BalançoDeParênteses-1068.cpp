#include <bits/stdc++.h>

using namespace std;

int main() {
    string S;
    while (cin >> S) {
        bool certo = true;
        stack<char> P;

        for (auto s : S) {
            if (s == '(') {
                P.push(s);
            }
            else if (s == ')') {
                if (P.empty()) {
                    certo = false;
                    break;
                }
                else {
                    P.pop();
                }
            }
        }

        (certo && P.empty()) ? (cout << "correct" << '\n') : (cout << "incorrect" << '\n');
    }

    return 0;
}