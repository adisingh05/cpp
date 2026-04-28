
#include<iostream>
using namespace std;

void print(int n){
    if(n==0){
        return;
    }
    cout<<n<<" ";
    print(n-1);
}
int fact(int n){
    if(n==0){
        return 1;
    }
    return n * fact(n-1);
}

int sum(int n){
    if(n==0){
        return 0;
    }
    return n%10 + sum(n/10);
}

// josephus 
int josephus(int n, int k){
    if(n==1){
        return 0;
    }
    return (josephus(n-1,k)+k)%n;
}
// reverse a number using recursion
int reverse(int n, int rev){
    if(n==0){
        return rev;
    }
    rev = rev*10 + n%10;
    return reverse(n/10, rev);
}



// fibonacci
int fibonacci(int n){
    if(n==0||n==1){
        return n;
    }

    return fibonacci(n-1)+fibonacci(n-2);
}
// power of two recursively
bool isPowerOfTwo(int n){
    if(n==0){
        return false;
    }
    if(n==1){
        return true;
    }
    if(n%2!=0){
        return false;
    }
    return isPowerOfTwo(n/2);
}

bool  isPower(int n){
    return n>0 && (n & (n-1))==0;
}
// recursive function to check if a number is palindrome
bool isPalindrome(int n, int rev){
    if(n==reverse(n,0)){
        return true;
    }else{
        return false;
    }
}

// product of array using recursion
int product(int arr[],int n){
    if(n==0){
        return 1;
    }
    return arr[n-1]*product(arr,n-1);
}
// write a progrm to find maximum sum of subarray whose length is  3 using sliding window technique
int maxSum(int arr[], int n, int k){
    int maxSum=0;
    int currSum=0;
    for(int i=0;i<k;i++){
        currSum+=arr[i];
    }
    maxSum=currSum;
    for(int i=k;i<n;i++){
        currSum+=arr[i]-arr[i-k];
        maxSum=max(maxSum,currSum);
    }
    return maxSum;

}
// 1,2,3,7,5 target is =12  output is 2,4 from which position to which positon subarray lies which has sum equal to target
int findSubarray(int arr[], int n, int target){
    int currSum=0;
    int start=0;
    for(int end=0;end<n;end++){
        currSum+=arr[end];
        while(currSum>target){
            currSum-=arr[start];
            start++;
        }
        if(currSum==target){
            cout << start+1 << " " << end+1 << endl; 
            break;
        }
    }
    return -1; 
}

// defective product filter input arr[85,42,91,67,73,55,88], threshold is 70  output accepted products are 85,91,73,88 accepted products are those which are greater than threshold value   

int filterProducts(int arr[], int n, int threshold){
    for(int i=0;i<n;i++){
        if(arr[i]>threshold){
            cout<<arr[i]<<" "
        }
    }
    cout<<endl;
    return 0;
} 
int filter1(int arr[],int threshold){
    int acceptedCount = 0;
    int rejectedCount = 0;
    for(int i = 0; i<n; i++){
        if(arr[i]>threshold){
            acceptedCount++;
        }else{
            rejectedCount++;
        }
    }
    cout << "Accepted products: " << acceptedCount << endl;
    cout << "Rejected products: " << rejectedCount << endl;
    return 0;
}


int main(){
    int arr[]={85,42,91,67,73,55,88};
    int threshold = 70;
    // print(5);
    // cout << fact(5) << endl;
    // cout << sum(123) << endl;
    // cout << josephus(7, 3) + 1 << endl;
    // cout << reverse(12321,0) << endl;
    // cout <<fibonacci(6)<<endl;
    // cout << isPowerOfTwo(16) << endl;
    // cout << isPower(16) << endl;
    // cout << isPalindrome(12321,0) << endl;
    // cout << product(arr,5) << endl;
    // cout << maxSum(arr,5,3) << endl;
    // cout << findSubarray(arr,5,12) << endl;
    filterProducts(arr,7,threshold);

    return 0;
}