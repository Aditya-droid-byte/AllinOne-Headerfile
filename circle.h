#define PI 3.14
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