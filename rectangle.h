int rectangle(char n, int l, int b){
	char area = 'a';
	char perimeter = 'p';
	if(n==area){
		return l*b;
	}
	else if(n==perimeter){
		return 2*(l+b);
	}
	return 0;
}