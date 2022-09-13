#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int> q;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        q.push(i);
    }
    while (q.size() != 1) {
        //이 문제는 empty가 될 이유가 없지만, 다른 문제의 경우 pop,top할때는 empty체크 필수!
        q.pop();
        q.push(q.front());
        q.pop();
    }
    cout << q.front();
    return 0;
}