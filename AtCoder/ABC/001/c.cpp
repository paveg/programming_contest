#include <iostream>
#include <cstring>
#include <cmath>

#define rep(i, N) for (LL i = 0; i < N; ++i)
typedef long long int LL;

using namespace std;

string deg(int deg) {
    double p = round(deg * 1.0);
    if (112.5 <= p && p < 337.5) return "NNE";
    else if (337.5 <= p && p < 562.5) return "NE";
    else if (562.5 <= p && p < 787.5) return "ENE";
    else if (787.5 <= p && p < 1012.5) return "E";
    else if (1012.5 <= p && p < 1237.5) return "ESE";
    else if (1237.5 <= p && p < 1462.5) return "SE";
    else if (1462.5 <= p && p < 1687.5) return "SSE";
    else if (1687.5 <= p && p < 1912.5) return "S";
    else if (1912.5 <= p && p < 2137.5) return "SSW";
    else if (2137.5 <= p && p < 2362.5) return "SW";
    else if (2362.5 <= p && p < 2587.5) return "WSW";
    else if (2587.5 <= p && p < 2812.5) return "W";
    else if (2812.5 <= p && p < 3037.5) return "WNW";
    else if (3037.5 <= p && p < 3262.5) return "NW";
    else if (3262.5 <= p && p < 3487.5) return "NNW";
    else return "N";
}

int dis(int Dis) {
    double tdis = round(Dis / 6.0);
    if (0.0 <= tdis && tdis <= 2) return 0;
    else if (3 <= tdis && tdis <= 15) return 1;
    else if (16 <= tdis && tdis <= 33) return 2;
    else if (34 <= tdis && tdis <= 54) return 3;
    else if (55 <= tdis && tdis <= 79) return 4;
    else if (80 <= tdis && tdis <= 107) return 5;
    else if (108 <= tdis && tdis <= 138) return 6;
    else if (139 <= tdis && tdis <= 171) return 7;
    else if (172 <= tdis && tdis <= 207) return 8;
    else if (208 <= tdis && tdis <= 244) return 9;
    else if (245 <= tdis && tdis <= 284) return 10;
    else if (285 <= tdis && tdis <= 326) return 11;
    else if (327 <= tdis) return 12;
}

int main() {
    int Deg, Dis, rDis;
    string rDeg;
    cin >> Deg >> Dis;

    rDeg = deg(Deg);
    rDis = dis(Dis);

    if (rDis == 0) cout << 'C' << " " << rDis << endl;
    else cout << rDeg << " " << rDis << endl;
    return 0;
}
