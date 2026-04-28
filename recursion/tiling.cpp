#include<iostream>
#include<string>
using namespace std;


int tillingProb(int n){
    if(n==0||n==1){
        return 1;
    }

    return tillingProb(n-1)+tillingProb(n-2);

    // int ans1=tillingProb(n-1);

    // int ans2=tillingProb(n-2);

    // return ans1+ans2;
}

int main(){
    // int n;
    cout<<tillingProb(6)<<endl;

    return 0;
}