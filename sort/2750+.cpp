#include <iostream>
#include <vector>

using namespace std;

vector <int> arr;

void bubbleSort(int n){

    int cnt =0;

    for(int i=0; i<n-1;i++){ // 전체 회전 수 : n-1번
        for(int j =0; j<n-1-i;j++){ //j : 회전당 비교 횟수 : n-1-i
            if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
        cnt++;
        }
    }
    cout<< "count of bubbleSort:"<<cnt<<endl;
}
void advancedBubbleSort(int n){
    int cnt =0;
    for(int i=0; i<n-1;i++){ // 전체 회전 수 : n-1번

        int isSwap =false;

        for(int j =0; j<n-1-i;j++){//j : 회전당 비교 횟수 : n-1-i

            if(arr[j]>arr[j+1]){

                swap(arr[j],arr[j+1]);
                isSwap=true;
            }
            cnt++;
        }
        if(!isSwap)
            break;
    }
    cout<< "count of advancedBubbleSort:"<<cnt<<endl;
}
int main() {
    int n;
    cin>> n;
    arr.assign(n,0);

    for(int i=0;i<n;i++)
        cin>>arr[i];

    bubbleSort(n);
    advancedBubbleSort(n);

    for(int i =0; i<n;i++)
        cout << arr[i]<<endl;
    return 0;
}