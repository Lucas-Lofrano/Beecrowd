#include <bits/stdc++.h>

using namespace std;

auto cmp = [](auto a, auto b) {
    if (get<0>(a) != get<0>(b)) {
        if (get<0>(a) == "branco") {
            return true;
        }
        else {
            return false;
        }
    }
    else {
        if (get<1>(a) != get<1>(b)) {
            if (get<1>(a) > get<1>(b)) {
                return true;
            }
            else {
                return false;
            }
        }
        else {
            if (get<2>(a) < get<2>(b)) {
                return true;
            }
            else {
                return false;
            }
        }
    }
};

int main() {
    int nroPessoas;
    string A;
    getline(cin, A);
    istringstream ISS(A);
    ISS >> nroPessoas;

    while(true) {
        if (nroPessoas == 0) {
            break;
        }
        vector<tuple<string, string, string>> V;

        for(int i = 0; i < nroPessoas; ++i) {
            int j = 0;
            tuple<string, string, string> t;

            getline(cin, get<2>(t));

            string S, w;
            getline(cin, S);
            istringstream iss(S);
            while(iss >> w) {
                if (j == 0) {
                    get<0>(t) = w;
                    j++;
                }
                else {
                    get<1>(t) = w;
                }
            }
            V.push_back(t);
        }

        sort(V.begin(), V.end(), cmp);

        for(auto v : V) {
            cout << (get<0>(v)) << ' ' << (get<1>(v)) << ' ' << (get<2>(v)) << '\n';
        }
        getline(cin, A);
        istringstream ISS(A);
        ISS >> nroPessoas;
        if (nroPessoas != 0) {
            cout << '\n';
        }
    }
    return 0;
}