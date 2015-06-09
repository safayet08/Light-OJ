#include<bits/stdc++.h>

int call(int n) {
    if (n==0) return 0;
    int res = (n / 3) * 2;
    if (n % 3 == 2) res++;
    return res;
}

int main() {
    int T, a, b;
    scanf("%d", &T);
    for(int i=1; i<=T; i++) {
        scanf("%d %d", &a, &b);
        printf("Case %d: %d\n",i, call(b) - call(a - 1));
    }
    return 0;
}
