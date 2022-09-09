#include <iostream>
#include <set>
#include <map>
// set 사용 >> 시간 초과 & switch문 굳이 쓸 필요 x
using namespace std;

void init(map<string, char> &m) {
    m["add"] = 'a';
    m["remove"] = 'r';
    m["check"] = 'c';
    m["toggle"] = 't';
    m["all"] = 'A';
    m["empty"] = 'e';
}

void cal(set<int> &s, string op, map<string, char> &m) {
    int x;
    switch (m[op]) {
        case 'a':
            cin >> x;
            s.insert(x);
            break;
        case 'r':
            cin >> x;
            s.erase(x);
            break;
        case 'c':
            cin >> x;
            if (s.find(x) !=
                s.end()) { //set의 find함수 : If the element is not found, then the iterator points to the position just after the last element in the set.
                cout << 1 << "\n";
            } else {
                cout << 0 << "\n";
            }
            break;
        case 't':
            cin >> x;
            //set에 x가 있으면
            if (s.find(x) != s.end()) {
                s.erase(x);
            } else {
                //없으면
                s.insert(x);
            }

            break;
        case 'A':
            s.clear();
            for (int i = 1; i <= 20; i++) {
                s.insert(i);
            }
            break;
        case 'e':
            s.clear();
            break;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    string op;
    set<int> s;
    map<string, char> m;
    cin >> n;

    init(m);

    for (int i = 0; i < n; i++) {
        cin >> op;
        cal(s, op, m);

    }
    return 0;
}
