#include<iostream>
#include<climits>
using namespace std;

int firstPosition(int arr[],int n,int target){
    int low=0,high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==target){
            if(mid==0 || arr[mid-1]!=target){
                return mid;
            }
            else{
                high=mid-1;
            }
        }
        else if(arr[mid]>target){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return -1;
}

int lastPosition(int arr[],int n,int target){
    int low=0,high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==target){
            if(mid==n-1 || arr[mid+1]!=target){
                return mid;
            }
            else{
                low=mid+1;
            }
        }
        else if(arr[mid]>target){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return -1;
}

// find second largest element in an array
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
    int arr[]={5,7,7,8,8,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target=1;
    int first=firstPosition(arr,n,target);
    int last=lastPosition(arr,n,target);
    cout<<first<<" "<<last<<endl;
    int second = secondLargest(arr, n);
    cout << "Second Largest: " << second << endl;
    return 0;
}