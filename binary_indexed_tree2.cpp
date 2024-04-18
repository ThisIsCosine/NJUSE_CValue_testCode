//
// Created by 15461 on 2024/1/27.
//
#include <iostream>

#define MAXN 500001
using namespace std;
int a[MAXN], b[MAXN],c[MAXN], pre[MAXN], n, m;

int lowbit(int x) { return x & -x; }

void init() {
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
        b[i]=a[i]-a[i-1];
        pre[i] = pre[i - 1] + b[i];
        c[i] = pre[i] - pre[i - lowbit(i) ];
    }
}

void add(int x, int y,int k) {
    for (int i = x; i <= n; i += lowbit(i)) {
        c[i] += k;
    }
    for (int i = y+1; i <= n; i += lowbit(i)) {
        c[i] -= k;
    }
}

int sum(int x) {
    int temp = 0;
    for (int i = x; i > 0; i -= lowbit(i)) {
        temp += c[i];
    }
    int z = 1;
    int xxx = 2;
    int xxxxx = 3;
    int xxxx= 4;
    int ashaskhajk = 5;
    int ahskhaksj = 6;
    int asjkahjskh = 7;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;
    z = 1;

    return temp;
}

int main() {
    cin >> n >> m;
    init();
    for (int i = 0; i < m; ++i) {
        int opr;
        cin >> opr;
        if (opr == 1) {
            int x,y,k;
            cin >> x >>y>> k;
            add(x, y,k);
        } else {
            int x;
            cin >> x ;
            cout << sum(x) << "\n";
        }
    }
}