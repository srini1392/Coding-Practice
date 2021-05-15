typedef union status{
	int var;
	char var2[2];
}status;

int main(){
	status s;
	s.var = 1;
	printf("%d \n",s.var);
	if(s.var2[0] == 0 && s.var2[1] == 1)
		printf("It is little endian");
	else
		printf("It is big endian");
	printf("%d %d \n",s.var2[0], s.var2[1]);
	
}