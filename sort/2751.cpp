#include <iostream>
#include <vector>

using namespace std;

vector<int> arr, sorted;

/*
 * 주어진 리스트 나누기
 * 나눈 리스트 각각을 정렬
 * 정렬한 리스트를 다시 합치기
 * */

void merge(int left, int middle, int right){
    int p1= left; //왼쪽 배열 포인터
    int p2 =middle+1; //오른쪽 배열 포인터
    int k =left;

    while(p1<=middle && p2<=right){
        //두 포인터가 한칸씩 오른쪽으로 이동하면서, 값을 비교해 작은값을 k번째에 저장
        if(arr[p1]<arr[p2])
            sorted[k++]= arr[p1++];
        else
            sorted[k++]= arr[p2++];
    }
    //양쪽 배열 중 한쪽에는 데이터가 남게됨, 남은 데이터 옮기기
    while(p1<=middle){
        //왼쪽 배열에 원소 남아있다면 남은원소 그대로 옮기기
        sorted[k++]=arr[p1++];
    }
    while(p2<=right){
        //오른쪽 배열에 원소 남아있다면 남은원소 그대로 옮기기
        sorted[k++]=arr[p2++];
    }

    //원래 배열에 복사
    for(int i =left;i<=right;i++)
        arr[i]=sorted[i];

}
void mergeSort(int left, int right){

    if(left<right){
        int mid = (left+right)/2;
        mergeSort(left, mid);
        mergeSort(mid+1,right);

        merge(left, mid,right);
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    arr.assign(n,0);
    sorted.assign(n,0);

    for(int i =0;i<n;i++)
        cin>> arr[i];

    mergeSort(0,n-1);

    for(int i=0;i<n;i++)
        cout<< arr[i] << "\n";

    return 0;
}
