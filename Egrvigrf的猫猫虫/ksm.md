```cpp
int ksm(int a, int b) {
    int ans = 1;
    while (b != 0) {
        if (b % 2) {
            ans *= a; // ans = ans*a%p
        } // 如果要对最终结果求余，化作对每一步求余 (((a^2)%p)^(b/2))%p = (a^b)%p
        a *= a; // a = a*a%p
        b /= 2;
    }
    return ans;
}
```