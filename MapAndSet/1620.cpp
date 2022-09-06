#include <iostream>
#include <map>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    string input;
    map<string, int> poketmon_name; // key: 이름, value: 번호
    map<int, string> poketmon_num; // key: 번호, value: 이름

    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> input;
        poketmon_name[input] = i;
        poketmon_num[i] = input;
    }

    while (m--) {
        cin >> input; //문제 받기
        if (isdigit(input[0])) {
            //isdigit : 입력받은것이 번호인지 이름인지 확인, 숫자라면 true 리턴
            //입력이 string인지, int인지 모르지만, 모두 string으로 입력받은 뒤에 첫문자 (input[0])가 숫자인지 확인한다.
            int number = stoi(input); // stoi: string to int, 문자열로 입력받은 포켓몬 번호를 int로 저장
            cout << poketmon_num[number] << "\n";
        } else {
            cout << poketmon_name[input] << "\n";
        }
    }

    return 0;
}