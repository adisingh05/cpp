#include<iostream>
using namespace std;

// optimized algorithm O(n^2)
void maxSubarraySum1(int*arr,int n){
    int maxSum=INT8_MIN;

    for(int start=0;start<n;start++){
        int currSum=0;
        for(int end=start;end<n;end++){
           currSum+=arr[end];
           maxSum=max(maxSum,currSum);
        }
    
    }
    cout<<"maximum subarray sum ="<<maxSum<<endl;
}

//brute-force algorithm O(n^3)
void maxSubarraySum2(int*arr,int n){
    int maxSum=INT8_MIN;

    for(int start=0;start<n;start++){
        for(int end=start;end<n;end++){
            int currSum=0;
           for(int i=start;i<=end;i++){
            currSum+=arr[i];
            maxSum=max(maxSum,currSum);
           }
           //cout<<currSum<<",";
        }
       // cout<<endl;
    }
    cout<<"maximum subarray sum ="<<maxSum<<endl;
}

//Kadane's algorithm O(n)
void maxSubarraySum3(int*arr,int n){
    int maxSum=INT8_MIN;
    int currSum=0;

    for(int i=0;i<n;i++){
        currSum+=arr[i];
        maxSum=max(maxSum,currSum);
        if(currSum<0){
            currSum=0;
        }
        // cout<<currSum<<",";
    }
    cout<<"maximum subarray sum ="<<maxSum<<endl;

}

int main(){
    int arr[]={1,-3,-1,-5,4,2};
    int n=sizeof(arr)/sizeof(int);

    
    // maxSubarraySum1(arr,n);
    // maxSubarraySum2(arr,n);
    maxSubarraySum3(arr,n);
    return 0;
}