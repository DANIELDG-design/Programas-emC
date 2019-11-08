#include<stdio.h>

main()
{
	float temperatura,c,p,m;
	
	printf("Digite a temperatura:");
	scanf("%f",&temperatura);
	
	c=(5*temperatura-160)/9;

	printf("Escreva a quantidade de chuva em polegadas:");
	scanf("%f",&p);
	m=(p*25.4);
	
	printf("a quantidade em milimetros e:%f\n",m);
	printf("temperatura e:%f\n",c );
	

	
	system("pause");
	return 0;
	
}
