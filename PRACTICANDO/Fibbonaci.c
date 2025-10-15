#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	
	int f;
	printf("\nImprime la sucesion de fibbonaci...\n");
	printf("Dime hasta que numero quieres que llegue la sucesion: ");
	scanf("%i",&f);
	int t,a=1,b=0,c;
	for(t=1; t<=f ; t++){
		printf("%i\n",a);
		c = a+b	;
		b=a;
		a=c;
	}
	return 0;
}
