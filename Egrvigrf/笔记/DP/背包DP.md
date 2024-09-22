# 01背包
每种物品只能选择一次,设有$n$种物品，每种物品的价值为$w_i$，体积为$v_i$，背包的容量为$V$。
`ans[i][j]`代表有前$i$个物品，空间为j时的价值最大值。
取选第$i$个物品与不选第$i$个物品的较大值。

```c++
for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= V; j++) {
        if (j < v[i]) { 
            ans[i][j] = ans[i - 1][j];
        } else { 
            ans[i][j] = max(ans[i - 1][j], ans[i - 1][j - v[i]] + w[i]); 
        }
    }
}
```

滚动数组压缩空间
**从后往前**更新
```c++
for(int i = 1; i <= n; i++) {
    for(int j = V; j >= v[i]; j--) {
        ans[j] = max(ans[j],ans[j-v[i]] + w[i]);
    }
}
```

- [P1048 [NOIP2005 普及组] 采药](https://www.luogu.com.cn/problem/P1048)

# 完全背包
每种物品可以取任意次。
转移方程和01背包类似
```c++
for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= V; j++) {
        if (j < v[i]) { 
            ans[i][j] = ans[i - 1][j];
        } else { 
            ans[i][j] = max(ans[i - 1][j], ans[i][j - v[i]] + w[i]); 
        }
    }
}
```

滚动数组压缩空间
**从前往后**更新
```c++
for(int i = 1; i <= n; i++) {
    for(int j = v[i]; j <= V; j++) {
        ans[j] = max(ans[j],ans[j-v[i]] + w[i]);
    }
}
```

- [P1616 疯狂的采药](https://www.luogu.com.cn/problem/P1616)

# n维背包
有多个考虑因素
以二维01背包为例，增加条件背包最大承重为$M$，每一件物品的质量为$m_i$。
```c++
for (int i = 1; i <= n; i++)//放置第i件物品
{
    for (int j = 1; j <= V; j++)//j为当前体积
    {
        for (int k = 1; k <= M; k++)//k为当前质量
        {
            if (j - v[i] < 0 || k - m[i] < 0) { //任意一种条件不满足就放不进去
                a[i][j][k] = a[i - 1][j][k];
            } else {
                a[i][j][k] = max(a[i - 1][j][k], a[i - 1][j - v[i]][k - m[i]] + c[i]);
            }
        }
    }
}
```

滚动数组压缩空间
```c++
for (int i = 1; i <= n; i++) {
    for (int j = V; j >= v[i]; j--) { // j为当前体积
        for (int k = M; k >= m[i]; k--) { // k为当前质量
            b[j][k] = max(b[j][k], b[j - v[i]][k - m[i]] + c[i]);
        }
    }
}
```
- [P1507 NASA的食物计划](https://www.luogu.com.cn/problem/P1507)
