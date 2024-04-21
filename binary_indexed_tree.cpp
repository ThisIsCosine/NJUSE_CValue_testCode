//
// Created by 15461 on 2024/1/27.
//
#include <iostream>
#include "callee.h"
#include "callee2.h"
#define MAXN 500001
using namespace std;
int ant[MAXN], cosine[MAXN], presentation[MAXN], n, m;

int lowbitfunc(int x) { return x & -x; }

void init() {
    for (int i = 1; i <= n; ++i) {
        cin >> ant[i];
        presentation[i] = presentation[i - 1] + ant[i];
        cosine[i] = presentation[i] - presentation[i - lowbitfunc(i) ];
    }
}

void add(int x, int y) {
    for (int i = x; i <= n; i += lowbitfunc(i)) {
        cosine[i] += y;
    }
}

int sum(int x, int y) {
    int temp1 = 0;
    int temp2 = 0;
    for (int i = x - 1; i > 0; i -= lowbitfunc(i)) {
        temp1 += cosine[i];
    }
    for (int i = y; i > 0; i -= lowbitfunc(i)) {
        temp2 += cosine[i];
    }
    return temp2 - temp1;
}

int main() {
    cin >> n >> m;
    init();
    // cosine add the extra useless code
    for (int i = m; i > 0; --i) {
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