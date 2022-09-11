#include <iostream>
#include <vector>

using namespace std;
const int SIZE = 1e4;

vector<int> stack_vector(SIZE);
int top_pointer = -1;//스택의 현재 위치

void push(int x) {
    stack_vector[++top_pointer] = x;
}

void pop() {
    if (top_pointer != -1) {
        cout << stack_vector[top_pointer--] << "\n";
    } else cout << -1 << "\n";
}

void size() {
    cout << top_pointer + 1 << "\n";
}

void empty() {
    if (top_pointer != -1) {
        cout << 0 << "\n";
    } else cout << 1 << "\n";
}

void top() {
    if (top_pointer != -1) {
        cout << stack_vector[top_pointer] << "\n";
    } else cout << -1 << "\n";
}

void cal(string op) {
    int x;
    if (op == "push") {
        cin >> x;
        push(x);
    } else if (op == "pop") {
        pop();
    } else if (op == "size") {
        size();
    } else if (op == "empty") {
        empty();
    } else if (op == "top") {
        top();
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    string op;
    cin >> n;
    while (n--) {
        cin >> op;
        cal(op);
    }
    return 0;
}