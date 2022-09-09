#include <iostream>
#include <map>
#include <vector>

using namespace std;

int jumpCar(int n, vector<string> &car_out, map<string, int> &car_in) {
    int ans = 0; //추월한 차의 대수
    for (int i = 0; i < n; i++) {
        //나오는차가 각각 추월을 했는지 확인
        for (int j = i + 1; j < n; j++) {
            //나보다 늦게 나온 차가 먼저 들어온 차였다면 나는 추월을 한것이다.
            if (car_in[car_out[i]] > car_in[car_out[j]]) {
                ans++;
                break;
            }
        }
    }
    return ans;

}

int main() {
    int n;
    string input;
    cin >> n;
    map<string, int> car_in; //key: string, value: int
    vector<string> car_out(n, "");

    for (int i = 1; i <= n; i++) {
        cin >> input;
        car_in[input] = i;
    }
    for (int i = 0; i < n; i++) {
        cin >> car_out[i];
    }

    cout << jumpCar(n, car_out, car_in);


    return 0;
}
