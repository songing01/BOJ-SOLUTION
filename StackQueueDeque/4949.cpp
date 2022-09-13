#include <iostream>
#include <stack>
#include <map>
//짝이 안맞는 경우
// >> 검사중에 스택에 들어있는것이 없어 비교가 불가능한 경우,
// 비교했을때 다른 경우,
// 끝났을때 스택이 비어있지 않은 경우
using namespace std;

bool isBalance(string &s) {
    stack<char> st;
    map<char, char> m;
    m[')'] = '(';
    m[']'] = '[';
    for (int i = 0; i < s.length(); i++) {
        switch (s[i]) {
            case '(':
            case '[':
                st.push(s[i]);
                break;
            case ')':
            case ']':
                if (st.empty() || st.top() != m[s[i]]) {
                    //비어있는지 검사가 먼저 와야함. 탑과의 비교를 먼저하면, 탑이 없을경우엔 오류가 발생하니까
                    return false;
                }
                st.pop();
                break;
        }
    }
    return st.empty();
}

int main() {
    string s;
    //공백포함 입력받기
    while (getline(cin, s)) {
        //입력이 있을 동안 반복 하다가 .하나만 나오면 종료
        if (s == ".") {
            break;
        }
        if (isBalance(s)) {
            cout << "yes\n";
        } else {
            cout << "no\n";
        }
    }
    return 0;
}
