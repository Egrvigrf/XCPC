#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define inf 0x3f3f3f3f
#define LOCAL
#ifdef LOCAL
#define dbg(...) _((char *)#__VA_ARGS__,__VA_ARGS__)
#else
#define dbg(...) ((void)0)
#endif
template<typename T, typename... A>
void _(char* f, T x, A... y) {
    while (*f && *f != ',') cout << *f++;
    cout << '=' << x << (sizeof...(y) ? ", " : "\n");
    if constexpr (sizeof...(y) > 0) _(f + 1, y...);
}

void solve() {
    
}

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int T; cin >> T;
    while (T--) solve();
    return 0;
}   /* created: 2024-09-24 19:24 author: Egrvigrf */