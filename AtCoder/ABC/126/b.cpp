#include <iostream>

using namespace std;

typedef long long int ll;
#define REP(i, I, N) for (int i = I; i < N; ++i)
#define rep(i, N) REP(i, 0, N)

bool isMonth(int v) {
    return (0 < v && v < 13);
}

int main() {
    string S;
    cin >> S;

    string head, end;
    head = S.substr(0, 2);
    end = S.substr(2, 2);
    int ihead = stoi(head);
    int iend = stoi(end);

    if (head == "00") {
        if (iend > 12 || iend <= 0) {
            cout << "NA" << endl;
            return 0;
        }
    }
    if (end == "00") {
        if (ihead > 12 || ihead <= 0) {
            cout << "NA" << endl;
            return 0;
        }
    }

    if (isMonth(ihead) && isMonth(iend)) {
        cout << "AMBIGUOUS" << endl;
        return 0;
    } else if (isMonth(ihead) && !isMonth(iend)) {
        cout << "MMYY" << endl;
        return 0;
    } else if (!isMonth(ihead) && isMonth(iend)) {
        cout << "YYMM" << endl;
        return 0;
    }

    cout << "NA" << endl;
    return 0;
}
