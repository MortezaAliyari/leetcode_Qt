#include <QCoreApplication>
#include<iostream>
using namespace std;
int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);
  cout<<"hi"<<endl;
  return a.exec();
}