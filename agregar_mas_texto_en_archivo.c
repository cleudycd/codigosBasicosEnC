#include<stdio.h>
#include<stdlib.h>
FILE *fd;
int main(){
	int c;
	char direccion[]="C:\\Users\\Miguel-PC\\Desktop\\prueba c\\hola.txt";
	fd=fopen(direccion,"at");
	if(fd==NULL){
		printf("Error al tratar  agregar texto");
		return 1;
	}
	while((c=getchar())!=EOF){
		fputc(c,fd);
	}
	fclose(fd);
	return 0;
}
