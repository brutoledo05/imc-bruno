#include <stdio.h>
#include <math.h>
int main()
{
	double peso, altura, imc;
	printf("Bem-vindo à calculadora de IMC!\n");
	printf("Digite seu peso (em kg): ");
	scanf("%lf", &peso);
	printf("Digite sua altura (em metros): ");
	scanf("%lf", &altura);
	imc = peso / (pow(altura,2));
	printf("Seu IMC é: %.2lf\n", imc);
	return 0;
}

