#include <iostream>
using namespace std;

bool isPrime(int n){

  if(n==1){
    return false;
  }
  for(int i=2;i*i<=n;i++){
    if(n%i==0){
      return false;
    }
  }
  return true;
}


/*int prod(int a,int b){
  int prod=a*b;
  return prod;
}

bool isEven(int n){
  if(n%2==0){
    return true;
  }else{
    return false;
  }
}*/
int factorial(int n){
  int fact =1;
  for(int i=1;i<=n;i++){
    fact=fact*i;
  }
  cout<<"factorial("<< n <<")="<< fact <<endl;
  return fact;
}
int binCoeff(int n,int r){
  int val1=factorial(n);
  int val2=factorial(r);
  int val3=factorial(n-r);

  int result=val1/(val2*val3);
  return result;
}

int main() {
  /*intp=prod(5,6);
  cout<<"prod="<<p<<endl;
  cout<<isEven(21)<<endl;
  factorial(4);
  cout<<isPrime(2)<<endl;*/
  cout<<binCoeff(4,2)<<endl;

return 0;
}
 
