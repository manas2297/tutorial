//this file shows some basic functions and implementations of list in stl c++
#include <iostream>
#include <list>
#include <iterator>

using namespace std;

//func for print list elements
void showList(list <int> g){
  list <int> :: iterator it;
  for(it= g.begin();it!=g.end();it++)
    cout<<"\t"<< *it;
    cout<<endl;
}

int main(int argc, char const *argv[]) {
  /* code */
  list <int> list1,list2;
  for(int i=0;i<10;i++){
    list1.push_back(i*2);
    list2.push_back(i*3);

  }

  cout<< "\n list 1 is : ";
  showList(list1);
  cout<<"\n List 2 is : ";
  showList(list2);
  cout<<"\n list1.front(): ";
  cout<<list1.front();
  cout<<"\n list1.back(): ";
  cout<<list1.back();
  return 0;
}
