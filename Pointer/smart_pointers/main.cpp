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
void findminmax(int array[],int size,int* min,int* max){
  for (int i=0;i<size;i++) {
    if(*(array+i)>*max)
      *max=*(array+i);
    if(*(array+i)<*min)
      *min=*(array+i);
  }


}
int main(){

  int j=1;
  char a='b';
//  int arr[5]={}
//  printint(&j);
//  printchar(&a);
//  printanytype(&j);
//  printanytype(&a);
//  voidpointer(&j);
  int array[5]={1,2,3,6,9};
  int max=-1,min=10;
  findminmax(array,5,&min,&max);
  cout<<"min: "<<min<<"max: "<<max<<endl;
  cout<<array;
  return 0;
}
