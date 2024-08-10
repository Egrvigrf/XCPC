```cpp
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
```