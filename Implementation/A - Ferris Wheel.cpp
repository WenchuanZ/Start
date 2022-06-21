#include <bits/stdc++.h>
using namespace std;

// ios::sync_with_stdio(false); cin.tie(0);

int main(){
    int a, b, ans;
    scanf("%d%d", &a, &b);

    if (a<=5) {
        ans = 0;

    } else if (a<=12){
        ans = b/2;

    } else {
        ans = b;
    }
    printf("%d", ans);

    return 0;
}
