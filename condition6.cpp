//q-i will give you a character you have to tell mewhether it is a lowers charachter or uppercase character or it is numberic value
#include<iostream>
using namespace std;
int main(){

  char ch;
  cin>>ch;
  if(ch>='a' && ch<='2'){
    cout<<"a is lower bond"<<endl;
    if(ch>='A' && ch<='2'){
      cout<<"A is upper bond"<<endl;
    if(ch>='0'&& ch<='a'){
      cout<<" a is numeric value "<<endl;
    }
      else{
        cout<<"this is symbol"<<endl;
        return 0;
      }
    }
    }
  }

