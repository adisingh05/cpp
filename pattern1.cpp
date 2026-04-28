#include<iostream>
using namespace std;        
int main(){
    // int n;
    // cout<<"enter n\n";          
    // cin>>n;
    //  for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         if(i==1||j==1||i==n||j==n){
    //             cout<<"* ";
    //         } else {
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }

    for(int i=0;i<=5;i++){
        for(int j=0;j<=6;j++){
            if(i==0&&j%3!=0){
                cout<<"* ";
            } else if(i==1&&j%3==0){
                cout<<"* ";
            } else if(i+j==8 ||i-j==2){
                cout<<"* ";
            } else {
                cout<<"  ";

            }
        }
        cout<<endl;
    }


    return 0;   
}