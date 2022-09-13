#include <iostream>
#include <vector>

using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

long long gcdSum(int n, vector<int> &v) {
    //최대 100개의 수 -> 쌍은 100C2 =4950쌍
    //각 수의 최댓값 1,000,000 -> 최대공약수의 최댓값 =1,000,000
    //sum의 최댓값 = 4,950,000,000 > int 값 범위인 21억을 넘음
    long long sum = 0;
    //쌍 만들기
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            sum += gcd(max(v[i], v[j]), min(v[i], v[j]));
        }
    }
    return sum;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n, 0);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cout << gcdSum(n, arr) << "\n";

    }
    return 0;
}