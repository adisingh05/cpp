#include<iostream>
using namespace std;

int getIthBit(int num,int i){
    int bitMask = 1<<i;

    if(!(num & bitMask)){
        return 0;
    }else{
        return 1;
    }
}


int clearIthBit(int num,int i){
    int bitMask = ~(1<<i);
    return num & bitMask;


}

bool isPowerOf2(int num){
    if(!(num &(num-1))){
        return true;
    }else{
        return false;
    }
     
}

int main(){
    cout<<isPowerOf2(4)<<endl;
    cout<<isPowerOf2(13)<<endl;
    cout<<isPowerOf2(16)<<endl;
    
    //a<<b ==a*2^b;  a>>b==a/2^b

    // cout<< getIthBit(6,2)<<endl;
    // cout<< getIthBit(7,1) <<endl;
    // cout<<clearIthBit(6,1)<<endl;
    return 0;
}