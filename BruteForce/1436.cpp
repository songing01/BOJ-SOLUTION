//
// Created by songi on 2022-09-21.
//
#include <iostream>

using namespace std;

int getEndNum(int n) {
    //n번째 종말의 숫자 찾기
    int num = 665;

    while (n > 0) {
        string s = to_string(++num);
        if (s.find("666") != s.npos) {
            n--;
        };
    }
    return num;
}

int main() {
    int n;
    cin >> n;
    cout << getEndNum(n);
    return 0;
}