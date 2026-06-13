#include<iostream>
#include <climits>
using namespace std;
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;
}

int secondLargest(int arr[], int n) {
    int first = INT_MIN, second = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }
    return second;
}



int main(){
    int arr[5]={5,4,1,3,2};
    print(arr,5);
    cout<<"Second largest element is: "<<secondLargest(arr,5)<<endl;
    return 0;
}
