//
// Created by songi on 2022-09-21.
//

#include <iostream>

using namespace std;

int findConstructor(int n) {
    //가장 작은 생성자 리턴
    // 1부터 n까지 분해합을 구하며, 분해합이 n 인 경우 찾기
    int sum;

    for (int i = 1; i < n; i++) {
        int temp = i;
        sum = i;
        //각 자리수 더하기
        while (temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }
        if (sum == n) {
            return i;
        }

    }
    return 0;
}

int main() {
    int n;
    cin >> n;
    cout << findConstructor(n);
    return 0;
}
