#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int  i=2;
  while(i<n){
    //divide not prime
    if(n%i==0){
      cout<<"Not prime"<<endl;
    }
    else{
      cout<<"prime for"<<i<<endl;
    }
  i=i+1;
  }
}