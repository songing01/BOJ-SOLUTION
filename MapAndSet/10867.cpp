#include <iostream>
#include  <set>

using namespace std;

int main() {
    int n, input;
    cin >> n;

    set<int> s;

    while (n--) {
        cin >> input;
        s.insert(input);
    }
    //set<int>::iterator iter; //반복자 선언 >> auto로 초기화 값에 따라 자동으로 데이터 타입 정해주므로 선언 생략
    for (auto iter = s.begin(); iter != s.end(); iter++) {
        cout << *iter << ' ';
    }
    return 0;
}
