#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  int t;

  cin>>t;
  cin.ignore();
  string quote;

  while(t--){

    getline(cin,quote);
    int flag =0;
    int count = 1;
    int counter = 0;
    for(int i=0;i<quote.length();i++){
      if(quote[i]==' '){
        count++;
      }
    }
    string words[count+1];
    for(int i=0;i<quote.length();i++){
      if(quote[i]==' '){
        counter++;
        i++;
      }
      words[counter]+=quote[i];
    }
    for(int i=0;i<counter+1;i++){
      if(words[i].compare("not")==0){
        flag=1;
        break;
      }
    }

    if(flag==1){
      cout<<"Real Fancy"<<endl;
    }else{
      cout<<"regularly fancy"<<endl;
    }
  }
  return 0;
}
