#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long int ll;
#define REP(i, I, N) for (ll i = I; i < N; ++i)
#define rep(i, N) REP(i, 0, N)

struct City {
    string name;
    ll point;
    ll ini;

    City(string inputted_name, ll inputted_point, ll inputted_ini) {
        name = inputted_name;
        point = inputted_point;
        ini = inputted_ini;
    }

    bool operator<(const City &another) const {
        if (name < another.name) {
            return true;
        } else if (name == another.name) {
            if (point > another.point) {
                return true;
            }
            return false;
        }
        return false;
    };
};


int main() {
    ll N;
    cin >> N;
    vector<City> p;

    ll P;
    string S;
    rep (i, N) {
        cin >> S >> P;
        p.push_back(City(S, P, i + 1));
    }


    sort(p.begin(), p.end());

    rep(i, p.size()) {
        cout << p[i].ini << endl;
    }
    return 0;
}
