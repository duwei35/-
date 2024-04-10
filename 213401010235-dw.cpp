#include <iostream>
using namespace std;

int max_sub_sum(int a[], int n) {
    int max_sum = 0, current_sum = 0;
    for (int i = 0; i < n; ++i) {
        current_sum += a[i];
        if (current_sum < 0) {
            current_sum = 0;
        }
        else if (current_sum > max_sum) {
            max_sum = current_sum;
        }
    }
    return max_sum;
}

int main() {
    int n;
    cout << "请输入数据的个数：";
    cin >> n;

    int a[100] = { 0 };
    cout << "以此输入 " << n << " 个数据：" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int value = max_sub_sum(a, n);
    cout << "最大连续子序列和为：" << value << endl;
    return 0;
}