#include<bits/stdc++.h>
using namespace std;

 int main(int argc, char const *argv[]) {
  int N,r;
  int R;
  cin>>N>>r;
  for(int i=1;i<=N;i++){
    cin>>R;
    if(R>=r){
      cout<<"Good boi"<<endl;
    }else{
      cout<<"Bad boi"<<endl;
    }
  }
  return 0;
}
