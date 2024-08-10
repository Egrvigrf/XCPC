```cpp
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;
using ull = unsigned long long;

#define _for(i,a,b) for(int i = (a); i < (b); i++)
#define _rep(i,a,b) for(int i = (a); i <= (b); i++)
#define for_(i,b,a) for(int i = (b); i > (a); i--)
#define rep_(i,b,a) for(int i = (b); i >= (a); i--)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define inf 0x3f3f3f3f // 1e9
#define endl '\n'

#define LOCAL
#ifdef LOCAL
#define dbg(...) (cout << "--> ", _debug((char*)#__VA_ARGS__, __VA_ARGS__))
#else
#define dbg(...) ((void)0)
#endif

template<typename T>
void _debug(char* f, T t) {
    cout << f << '=' << t << endl;
}
template<typename T, typename... Args>
void _debug(char* f, T x, Args... y) {
    while (*f != ',') {
        cout << *f++;
    }
    cout << '=' << x << ", ";
    _debug(f + 1, y...);
}

void solve() {
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T;
    cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}

```