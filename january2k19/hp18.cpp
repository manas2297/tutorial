#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  int n,a,b;
  while(t--){
    cin>>n>>a>>b;

    vector <int> A,B;
    int x;
    for(int i=1;i<n;i++){
      cin>>x;
      if(x%a==0){
        A.push_back(x);
      }else if(x%b==0){
        B.push_back(x);
      }
    }

    do{
      A.erase(A.begin());
      B.erase(B.begin());
    }while(!A.empty() && !B.empty());
    if(A.empty()){
      cout<<"ALICE"<<endl;
    }else{
      cout<<"BOB"<<endl;
    }
  }
}
