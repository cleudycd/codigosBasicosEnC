#include<stdio.h>
int main(){
	int i=1;
	printf("\n Ascendente\n");
	while(i<=10){
		printf("%i\n",i);
		i++;
	}
	printf("\n");
	i--;
	printf("\n Descendente\n");
	while(i>=1){
		printf("%i\n",i);
		i--;
	}
	return 0;
}
