Coding Challenge
================

This is my coding challenge records.

## Contest

- AtCoder
  - [AtCoder Problems][acp]

- AIZU ONLINE JUDGE
  - [AOJ - User][aoj-user]

- TopCoder
  - ...

- Codeforces
  - ...

## Launguage

Mainly I'm using **C++**.

I use "Ruby" and "Go", "JavaScript" at my job.

## Note

A place to post what I thought or thought about doing a Coding Challenge.

- [文系出身ソフトウェアエンジニアが競プロをやる][magazine]

## Author

- [paveg][github-profile]

[acp]: https://kenkoooo.com/atcoder/#/user/pav
[aoj-user]: http://judge.u-aizu.ac.jp/onlinejudge/user.jsp?id=pav
[magazine]: https://note.mu/pav/m/mba8ec6772817
[github-profile]: https://github.com/paveg

## Description

- About my execution environment.

Included library.

```objectivec
#include "bits/stdc++.h"

using namespace std;
typedef long long ll;
const ll inf = (1 << 30) - 1;
const ll infll = (1LL << 61) - 1;
const ll mod = 1e9 + 7;
#define REP(i, o, n) for (ll i = o; i < n; i++)
#define rep(i, n) REP(i, 0, n)
```

`bits/stdc++.h` is defined by `root/bits/stdc++.h` .

```objectivec
#pragma once

#include <iostream>
#include <iomanip>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <numeric>
#include <limits>
#include <bitset>
#include <queue>
#include <stack>
```

I define `actual()` which is return void reason why `main()` is return int complicated.

```objectivec
void actual() {
}

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    cout << fixed << setprecision(15);
    actual();
    return 0;
}
```
