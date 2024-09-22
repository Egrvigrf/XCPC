```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream f1("wrong.txt"), f2("correct.txt");
    string line1, line2;
    int line_num = 1;

    while (getline(f1, line1) && getline(f2, line2)) {
        if (line1 != line2) {
            cout << "Difference on line " << line_num << ":\n";
            cout << "answer.txt: " << line1 << "\nmyanswer.txt: " << line2 << "\n";
            return 1;
        }
        ++line_num;
    }

    if (getline(f1, line1) || getline(f2, line2)) {
        cout << "Files have different number of lines.\n";
        return 1;
    }

    cout << "Files are identical." << endl;
    return 0;
}

```