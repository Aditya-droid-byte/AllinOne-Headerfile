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