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