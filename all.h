#define PI 3.14
#include<iostream>
using namespace std;
//----------------------------------------arithmatic----------------------------//
int arithmatics(char n, int a, int b){
	char add='a';
	char sub='s';
	char mul='m';
	char div='d';
	char mods='M';
	if(add==n){	
	   return a+b;
	}
	else if(sub==n){
	   return a-b;
	}
	else if(mul==n){
	   return a*b;
	}
	else if(div==n){
	   return a/b;
	}
	else if(mods==n){
        return a%b;
	}
	return -1;
}
//---------------------------------oddeven------------------------------//
#include<iostream>
using namespace std;
void oddEven(int n){
 if(n%2==0){
   cout<<"even";
 }
 else{
   cout<<"odd";
 }
}
//////////////////////////print 1 to n -----------------------------------//
void printRange(int n){
	for(int i=1;i<=n;i++){
	    cout<<i<<endl;
	}
	//return;
}
//----------------------------relational-----------------------------------//
int relational(char n, int a , int b){
	char compare1='g';
	char compare2='s';
	char compare3='e';
	char compare4='L';
	char compare5='G';
	char compare6='n';
	if(n==compare1){
	   if(a>b){
		return a;
	   }
	   else{
		return b;
	   }
	}
	else if(n==compare2){
	   if(a<b){
		return a;
	   }
	   else{
		return b;
	   }
	}
	else if(n==compare3){
	   if(a==b){
		return 0;
	   }
	   else{
		return -1;
	   }
	}
	else if(n==compare4){
	   if(a<=b){
		return 0;
	   }
	   else{
		return -1;
	   }
	}
	else if(n==compare5){
	   if(a>=b){
		return 0;
	   }
	   else{
		return -1;
	   }
	}
	else if(n==compare6){
	   if(a!=b){
		return 0;
	   }
	   else{
		return -1;
	   }
	}
	return -1;
}
//-----------------------------------circle radius circumference----------------------//
float circle(char n,float r){
 char compare1='c';
 char compare2='a';
 if(n==compare1){
  return PI*(2*r);
 }
 else if(n==compare2){
  return PI*(r*r);
 }

 return 0;
}
//-------------------------------------square side area---------------------------------//
int square(char n, int side=0, int perimeter=0){
	char area = 'a';
	char perimeter1='p';
	if(n==area){
		return side * side;
	}
	else if(n==perimeter1){
		return 4 * side;
	}
	return 0;
}
//-------------------------------rectangle side area-----------------------------------//
int rectangle(char n, int l, int b){
	char area = 'a';
	char perimeter = 'p';
	if(n==area){
		return l*b;
	}
	else if(n==perimeter){
		return 2 * (l+b);
	}
	return 0;
}