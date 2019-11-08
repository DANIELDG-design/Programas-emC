#include <stdio.h>
#include <stdlib.h>

int main (void){


int a,b,c,d,soma;

printf("Digite o valor a:");
scanf("%f",&a);
printf("Digite o valor b:");
scanf("%f",&b);
printf("Digite o valor c:");
scanf("%f",&c);
printf("Digite o valor d:");
scanf("%f",&d);

	if  (a>b && a>c && a<d){
	soma= b+c+d;
	printf ("soma:%f\n",soma);
}

	if (b<a && b<c && b<d){
	soma= a+c+d;
	printf ("soma:%f\n",soma);
}

	if (c<a && c<b && c<d){
	soma= a+b+d;
	printf ("soma:%f\n",soma);
}

	if (d<a && d<b && d<c){
	soma= a+b+c;
	printf ("soma:%f\n",soma);
}


system ("pause");
return 0;
}
