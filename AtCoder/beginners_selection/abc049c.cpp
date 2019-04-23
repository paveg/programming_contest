#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool ssEql(string &s, string &t) {
    if (s.substr(0, t.length()) != t) {
        return false;
    } else {
        return true;
    }
}

void rev(string &s) {
    reverse(s.begin(), s.end());
}

int main() {
    string d5 = "dream", d7 = "dreamer", e5 = "erase", e6 = "eraser";
    rev(d5);
    rev(d7);
    rev(e5);
    rev(e6);
    string s;
    bool answer = true;
    cin >> s;
    rev(s);

    vector<string> reverses = {d5, d7, e5, e6};

    string ts = s;
    while (ts.length() != 0) {
        if (!ssEql(ts, d5) && !ssEql(ts, d7) && !ssEql(ts, e5) && !ssEql(ts, e6)) {
            answer = false;
            break;
        }
        for (string &r: reverses) {
            if (ts == r) {
                ts.erase(0, r.length());
            }
        }
        for (string &r: reverses) {
            if (ssEql(ts, r)) {
                ts.erase(0, r.length());
                if (ts.length() == 0) {
                    break;
                }
            }
        }
    }

    if (answer) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
