//first count number of row and number of columan in each row
  #include<iostream>
  using namespace std;
  int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
      int j=1;
      while(j<=n){
        cout<<"*"<<endl;
        j=j+1;
      }
      cout<<endl;
      i=i+1;
  }
  }
  