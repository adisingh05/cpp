// write program to check perfect number

#include <iostream>
using namespace std;

int main() {
  int n = 28;
//   cout<<"enter a number\n";
//   cin>>n;

  int sum=0;
  for(int i=1;i<n;i++){
    if(n%i==0){
      sum+=i;
    }
  }

  if(sum==n){
    cout<<n<<" is a perfect number\n";
  }else{
    cout<<n<<" is not a perfect number\n";
  }
  return 0;
}