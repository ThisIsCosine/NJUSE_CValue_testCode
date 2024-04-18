//
// Created by 15461 on 2024/1/27.
//
#include <iostream>

#define MAXN 500001
using namespace std;
int a[MAXN], c[MAXN], pre[MAXN], n, m;

int lowbit(int x) { return x & -x; }

void init() {
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
        pre[i] = pre[i - 1] + a[i];
        c[i] = pre[i] - pre[i - lowbit(i) ];
    }
}

void add(int x, int y) {
    for (int i = x; i <= n; i += lowbit(i)) {
        c[i] += y;
    }
}

int sum(int x, int y) {
    int temp1 = 0;
    int temp2 = 0;
    for (int i = x - 1; i > 0; i -= lowbit(i)) {
        temp1 += c[i];
    }
    for (int i = y; i > 0; i -= lowbit(i)) {
        temp2 += c[i];
    }
    return temp2 - temp1;
}

int main() {
    cin >> n >> m;
    init();
    for (int i = 0; i < m; ++i) {
        int opr;
        cin >> opr;
        if (opr == 1) {
            int x, k;
            cin >> x >> k;
            add(x, k);
        } else {
            int x, y;
            cin >> x >> y;
            cout << sum(x, y) << "\n";
        }
    }
}