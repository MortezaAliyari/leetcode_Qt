#include<iostream>
#include<memory>
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
class morteza{
public:
  morteza(){cout<<"constructor is invoked"<<endl;}
  ~morteza(){cout<<"Deconstroctur is invoke"<<endl;}
  void add(){};
};
int main(){
//  morteza m;
//  unique_ptr<int> ptr=make_unique<int>(25);
//  shared_ptr<int> ptr1=make_shared<int>(10);
//  shared_ptr<int> ptr2=ptr1;
//  cout<<*ptr<<" , "<<*ptr1<<" , "<<*ptr2<<*ptr<<endl;
{
    unique_ptr<morteza> ptr=make_unique<morteza>();}{
  shared_ptr<morteza> ptr1=make_shared<morteza>();
  shared_ptr<morteza> ptr2=ptr1;
  cout<<ptr1.get()<<" , "<<ptr2.get()<<endl;}
  weak_ptr<morteza> ptr4;
  {
  shared_ptr<morteza> ptr5=make_shared<morteza>();
  ptr4=ptr5;}
//  cout<<*ptr4<<endl;
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
  shared_ptr<morteza> ptr6=make_shared<morteza>();
  return 0;
}
