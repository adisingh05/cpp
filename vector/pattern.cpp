#include<iostream>
using namespace std;
void printPattern(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void printPattern2(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

void printPattern3(int n){
    for(int i=n; i>0; i--){
        for(int j=1; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void printPattern4(int n){
    for(int i=0; i<n; i++){
        for(int j=1; j<=n-i-1; j++){
            cout<<" ";
        }
        for(int j=1; j<=2*i+1; j++){
            cout<<"*";
        }
        for(int j=1;j<=n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void printPattern5(int n){
    for(int i=0; i<n; i++){
        for(int j=1; j<=i; j++){
            cout<<" ";
        }
        for(int j=1; j<=2*n-(2*i+1); j++){
            cout<<"*";
        }
        for(int j=1;j<=i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void printPattern6(int n){
    for(int i=1; i<=2*n-1; i++){
        int star=i;
        if(i>n-1){
            star=2*n-i;
        }
        for(int j=1;j<=star;j++){
            cout<<"*";
        }
        cout<<endl;
    }
       
}

void printpattern7(int n){
    int start=1;
    for(int i=0;i<n;i++){
        if(i%2==0){
            start=1;
        } else {
            start=0;
        }
        for(int j=0;j<=i;j++){
            cout<<start<<" ";
            start=1-start;
        }
        cout<<endl;
    }
}

void printPattern8(int n){
    int space=2*(n-1);
    for(int i=1;i<=n;i++){
        // number
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        // space
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        // number
        for(int j=i;j>=1;j--){
            cout<<j;
        }

        cout<<endl;
        space-=2;
    }
}

void printPattern9(int n){
    int num =1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
}
  
void printPattern10(int n){
    for(int i=1;i<=n;i++){
        for(char ch='A';ch<'A'+i;ch++){
            cout<<ch<<" ";
        }
        cout<<endl;

    }
}

void printPattern11(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1||j==1||i==n||j==n){
                cout<<"* ";
            } else {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}
int main(){
    int n;
    // cout<<"Enter the number of rows: ";
    // cin>>n;
     printPattern(5);
     printPattern2(5);
     printPattern3(5);
     printPattern4(5);
     printPattern5(5);
     printPattern6(5);
     printpattern7(5);
     printPattern8(5);
     printPattern9(5);
     printPattern10(5);
     printPattern11(5);

    return 0;
}