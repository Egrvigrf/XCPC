You are given an integer sequence $a_1, a_2, \ldots, a_n$. Let $S$ be the set of all possible non-empty subsequences of $a$ without duplicate elements. Your goal is to find the longest sequence in $S$. If there are multiple of them, find the one that minimizes lexicographical order after multiplying terms at odd positions by $-1$. For example, given $a = [3, 2, 3, 1]$, $S = \{[1], [2], [3], [2, 1], [2, 3], [3, 1], [3, 2], [2, 3, 1], [3, 2, 1]\}$. Then $[2, 3, 1]$ and $[3, 2, 1]$ would be the longest, and $[3, 2, 1]$ would be the answer since $[-3, 2, -1]$ is lexicographically smaller than $[-2, 3, -1]$. A sequence $c$ is a subsequence of a sequence $d$ if $c$ can be obtained from $d$ by the deletion of several (possibly, zero or all) elements. A sequence $c$ is lexicographically smaller than a sequence $d$ if and only if one of the following holds: - $c$ is a prefix of $d$, but $c \ne d$; - in the first position where $c$ and $d$ differ, the sequence $c$ has a smaller element than the corresponding element in $d$.

**Input** Each test contains multiple test cases. The first line contains the number of test cases $t$ ($1 \le t \le 5 \cdot 10^4$). The description of the test cases follows. The first line of each test case contains an integer $n$ ($1 \le n \le 3 \cdot 10^5$) — the length of $a$. The second line of each test case contains $n$ integers $a_1, a_2, \ldots, a_n$ ($1 \le a_i \le n$) — the sequence $a$. It is guaranteed that the sum of $n$ over all test cases does not exceed $3 \cdot 10^5$.

**Output** For each test case, output the answer in the following format: Output an integer $m$ in the first line — the length of $b$. Then output $m$ integers $b_1, b_2, \ldots, b_m$ in the second line — the sequence $b$.

贪心，维护一个向右移动的窗口。
不断取交替取最大值和最小值。
把每个出现的元素的下标记录，以及它们最后一次出现的位置

每次查询时，最值的取值范围从当前的左端点（用一个变量l记录，永远不回退）
到所有剩余元素的最后一次出现位置的最小值。

可以考虑用线段树维护最值，然后根据值贪心地寻找最小的下标，更新l的值
