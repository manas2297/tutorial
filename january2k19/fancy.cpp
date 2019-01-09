#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main(){

  int t;
  int i,j;
  string s;
  string s1="not";
  cin>>t;
  cin.ignore();
  while(t--){
    getline(cin,s);
    int flag =0;

    for( i=0;i!=s.length();i++){
      for( j=0;(j!=s1.length())&&(i!=s.length());){
        if(s[i]==s[j]){
          i++;j++;
        }
        else{
          i++;
        }
      }
      if((s[i]==' ')&&(j==s1.length())){
        flag = 1;
        break;
      }
    }
    if(flag==1){
      cout<<"Fancy"<<endl;
    }else{
      cout<<"Not fancy"<<endl;
    }
  }
  return 0;
}
