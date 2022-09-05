#include <iostream>
#include <vector>

using namespace std;

vector <int> arr;

void bubbleSort(int n){
    for(int i=0; i<n-1;i++) // 전체 회전 수 : n-1번
        for(int j =0; j<n-1-i;j++) //j : 회전당 비교 횟수 : n-1-i
            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
}

int main() {
    int n;
    cin>> n;
    arr.assign(n,0);

    for(int i=0;i<n;i++)
        cin>>arr[i];

    bubbleSort(n);

    for(int i =0; i<n;i++)
        cout << arr[i]<<endl;
    return 0;
}

