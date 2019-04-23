#include<iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    string answer;
    if ((a * b) % 2 == 0) {
        answer = "Even";
    } else {
        answer = "Odd";
    }
    cout << answer;
    return 0;
}
