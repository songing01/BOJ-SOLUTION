#include <iostream>

using namespace std;

/*int gcd(int a, int b) {
    //최대공약수 구하기
    // a,b 중 작은 수를 기준으로 반복문을 돌려 최대공약수 리턴
    for (int i = min(a, b); i > 0; i--) {
        //공약수인지 확인
        if (a % i == 0 && b % i == 0) {
            return i;
        }
    }
    return 1; //조건문 안에만 리턴이 있을 경우 경고 발생.
}*/

//유클리드 호제법 >> gcd(a,b)= gcd(a-b,b)=gcd(a-2b,b)=...=gcd(a%b,b)
int gcdRecursion(int a, int b) {
    // a>b일때 최대공약수 리턴 , a%b는 b보다 작음
    if (b == 0) {
        return a;
    }
    return gcdRecursion(b, a % b);
}
//두수의 곱= 최대공약수 * 최소공배수

int main() {
    int a, b;
    cin >> a >> b;

    int g = gcdRecursion(max(a, b), min(a, b));
    int l = a * b / g;

    cout << g << "\n" << l << "\n";

    return 0;
}