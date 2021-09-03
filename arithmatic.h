
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