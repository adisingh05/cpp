#include<iostream>
using namespace std;

int countDigits(int n){
    int count=0;
    while(n>0){
        n=n/10;
        count++;
    }
    return count;
}

void sumOfDigits(int n){
    int sum=0;
    while(n>0){
        sum+=n%10;
        n=n/10;
    }
    cout<<"sum of digits is "<<sum<<endl;
}

void productOfDigits(int n){
    int product=1;
    while(n>0){
        product*=n%10;
        n=n/10;
    }
    cout<<"product of digits is "<<product<<endl;
}

int main(){
    int num;
    cout<<"enter a number: ";
    cin>>num;
    cout<<"number of digits is "<<countDigits(num)<<endl;
    if(countDigits(num)%2==0){
        sumOfDigits(num);
    }else {
        productOfDigits(num);
    }
    return 0;
}
