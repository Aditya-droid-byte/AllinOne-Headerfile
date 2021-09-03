#include<iostream>
#include "relational.h"
using namespace std;
int main(){
 int a,b;
 cin>>a>>b;
 cout<<relational('g',a,b);
 cout<<relational('s',a,b);
 cout<<relational('e',a,b);
 cout<<relational('L',a,b);
 cout<<relational('G',a,b);
 cout<<relational('n',a,b);
 return 0;
}