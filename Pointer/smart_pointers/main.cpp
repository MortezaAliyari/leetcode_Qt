#include<iostream>

using namespace std;
void printint(int *i){
  cout<<*i<<endl;

}
void printchar(char *i){
  cout<<*i<<endl;

}
template<typename T>
void printanytype(T *i){
  cout<<*i<<endl;
}
void voidpointer(void *ptr,char a='i'){
  switch (a) {
  case 'i': cout<<*((int*) ptr)<<endl;
  case 'c': cout<<*((char*) ptr)<<endl;

  }

}
int main(){

  int j=1;
  char a='b';
  printint(&j);
  printchar(&a);
printanytype(&j);
printanytype(&a);
voidpointer(&j);
  return 0;
}
