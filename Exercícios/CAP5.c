#include <stdio.h>
#include <stdlib.h>
#define ex1

#ifdef ex1
/*1 - Escreva um programa que receba uma letra via teclado. Escreva uma funcao que
    pesquise esta letra dentro do vetor abaixo. Imprima o resultado da pesquisa
    no video na funcao main(). Passe como informacao para a funcao a letra 
    digitada.(utilize o comando return)

    vetor -> b,d,f,h,j,k,m,o,q,s,u,w,y*/
char vetor[]={'b','d','f','h','j','k','m','o','q','s','u','w','y'};
int pesquisa(char l);
main(){
	char letra;
	int sair;
	do{
		printf("digite uma letra qualquer: ");
		scanf("%c", &letra);
		
		
		int cont = pesquisa(letra);
		if(cont > 0)
		{
			printf("A letra digitada possui no vetor!\n");
		}else
		{
			printf("A letra digitada N possui no vetor!\n");
		}
		
		printf("\n\nDeseja continuar? ");
    	printf("\n 1 - Sim");
    	printf("\n 2 - Nao\n/> ");
    	scanf("%d",&sair);
    	
    	if(sair == 1){
	    	system("cls");
	    	getchar();
		}
	}while(sair==1);
}

pesquisa(char l){
	int i,cont=0;
	
	for(i=0; i<13; i++){
		if(l == vetor[i]){
			cont++;
		}
	}
	return cont;
}
#endif

#ifdef ex2
/*2 - Escreva um programa que receba na funcao main() 2 valores inteiro. Escreva
    uma funcao para cada operacoes aritmeticas e passe como parametro os 2
    valores recebidos na funcao main(). Retorne os resultados usando o comando
    return e imprima-os no video na funcao main().*/
int adicao(int a, int b);
int sub(int a, int b);
int mult(int a, int b);
int divisao(int a, int b);

main(){
	int n1, n2,sair;
	do{	
		printf("digite o valor de n1: ");
		scanf("%d", &n1);
		
		printf("digite o valor de n2: ");
		scanf("%d", &n2);
	
		printf("ADICAO:        %d\n",adicao(n1, n2));
		printf("SUBTRACAO:     %d\n",sub(n1, n2));
		printf("MULTIPLICACAO: %d\n",mult(n1, n2));
		printf("DIVISAO:       %d\n",divisao(n1, n2));
		
		printf("\n\nDeseja continuar? ");
    	printf("\n 1 - Sim");
    	printf("\n 2 - Nao\n/> ");
    	scanf("%d",&sair);
    	
    	if(sair == 1){
	    	system("cls");
		}
	}while(sair==1);
}

int adicao(int a, int b){
	int res;
	res = a + b;
	return res;
}

int sub(int a, int b){
	int res;
	res = a - b;
	return res;
}

int mult(int a, int b){
	int res;
	res = a * b;
	return res;
}

int divisao(int a, int b){
	int res;
	res = a / b;
	return res;
}
#endif

#ifdef ex3
/*3 - Reescreva o programa do exercicio anterior para receber via teclado n
    valores. Os n valores nao sao definidos previamente.*/
main(){
	int sair, n1, n2;
	while(1){
		printf("\ndigite o valor de n1: ");
		scanf("%d", &n1);
		
		printf("digite o valor de n2: ");
		scanf("%d", &n2);
		
		printf("ADICAO:        %d\n",adicao(n1, n2));
		printf("SUBTRACAO:     %d\n",sub(n1, n2));
		printf("MULTIPLICACAO: %d\n",mult(n1, n2));
		printf("DIVISAO:       %d\n",divisao(n1, n2));
	}
}

int adicao(int a, int b){
	int res;

	res = a + b;
	return res;
}

int sub(int a, int b){
	int res;
	res = a - b;
	return res;
}

int mult(int a, int b){
	int res;
	res = a * b;
	return res;
}

int divisao(int a, int b){
	int res;
	res = a / b;
	return res;
}
#endif

#ifdef ex4
/*4 - Aproveitando o programa anterior inclua a selecao das operacoes aritmeticas
    para transforma-lo em uma calculadora. (utilize o comando switch).*/
main(){
	int sair, n1, n2;
	char op;
	while(1){
		printf("digite o valor de n1: ");
		scanf("%d", &n1);
		
		getchar();
		printf("\nEscolha a operacao aritmetica (+)(-)(*)(/): ");
		scanf("%c", &op);
		
		printf("\ndigite o valor de n2: ");
		scanf("%d", &n2);
		switch(op){
			case '+':{
				printf("\nADICAO: %d\n",adicao(n1, n2));
				break;
			}
			
			case '-':{
				printf("\nSUBTRACAO: %d\n",sub(n1, n2));
				break;
			}
			
			case '*':{
				printf("\nMULTIPLICACAO: %d\n",mult(n1, n2));
				break;
			}
			
			case '/':{
				printf("\nDIVISAO: %d\n",divisao(n1, n2));
				break;
			}
		}	
	}
}

int adicao(int a, int b){
	int res;

	res = a + b;
	return res;
}

int sub(int a, int b){
	int res;
	res = a - b;
	return res;
}

int mult(int a, int b){
	int res;
	res = a * b;
	return res;
}

int divisao(int a, int b){
	int res;
	res = a / b;
	return res;
}
#endif

#ifdef ex5
/*5 - Escreva um programa que receba na funcao main() 2 strings de ate' 10 caracteres.
    Escreva uma funcao que compare estas 2 strings e retorne se sao IGUAIS 1 ou 
    DIFERENTES 0. Se forem DIFERENTES, retorne 2 se a 1. string for maior que a 2.
    e 3 se a 2. string for maior que a 1.. Declare as strings como variavel global.  */
char strA [10],strB [10], i=0, j=0, sair;
int compara();
int compTAM();
main(){
	do{	
		printf("digite a 1 palavra: ");
		scanf("%s",strA);
		getchar();
		printf("digite a 2 palavra: ");
		scanf("%s", strB);

		int n = compara();
		printf("<IGUAIS = 1> <DIFIRENTE = 0> <strA>strB = 2> <strA<strB = 3> \n\nresultado/> ");
	
		if(n==1){
			printf("%d\n", n);
		}else
		{
			printf("%d\n", compTAM());
		}
    
		printf("\n\nDeseja continuar? ");
    	printf("\n 1 - Sim");
    	printf("\n 2 - Nao\n/> ");
    	scanf("%d",&sair);
    	
    	if(sair == 1){
	    	system("cls");
	    	getchar();
		}
	}while(sair == 1);
}

int compara(){
	int cont=0;
    while(strA[cont] == strB[cont] && strA[cont]!= '\0' && strB[cont]!= '\0')
    {
       cont++;
    }
     if(strA[cont] == '\0' && strB[cont] == '\0')
        {
        	return 1; // IGUAL
		}else{
			compTAM(); // DIFIRENTE
		}
}

int compTAM(){
	while(strA[i] != '\0'){// identifica o TAM da strA
		i++;
	}
	
	while(strB[j] != '\0'){// identifica o TAM da strB
		j++;
	}

	if(i>j){
		return 2; // TAM vetor1 maior q vetor2
	}else
	if(i<j){
		return 3; // TAM vetor1 menor q vetor2
	}
	else
	{
		return 0; // TAM vetor1 é igual vetor2
	}
}
#endif

#ifdef ex6
/*6 - Escreva um programa que receba um numero N. Escreva uma função que 
    retorne a soma dos algarismos de N!.     
    Ex: se N = 4, N! = 24. Logo, a soma de seus algarismos ´e 2 + 4 = 6.*/
main(){
	int sair;
	do{
		int num;
		printf("Digite um numero: ");
	    scanf("%d", &num);
	
   		printf("a soma dos algarimos e' %d: ",fatorial(num));
    	
		printf("\n\nDeseja continuar? ");
    	printf("\n 1 - Sim");
    	printf("\n 2 - Nao\n/> ");
    	scanf("%d",&sair);
    	
    	if(sair == 1){
	    	system("cls");
		}

        }while(sair==1);
}

int fatorial(int a)
{
    int fat=1;
    while(a!=1)
        {
         fat = fat*a;
         a--;
        }
     int soma =0;
     while (fat!=0){
        soma = soma + (fat%10);
        fat = fat/10;
     }
    return(soma);
}
#endif

#ifdef ex7
/*7 - Escreva um programa que recebe 2 valores X e Z na função main(). Escreva uma 
    função que receba por parametro os 2 valores X e Z, calcule e retorne o 
    resultado de X exponencial Z para o programa principal. 
    ATENCAO: nao utilize nenhuma funcao pronta de exponenciacao.*/
int expoente(int num, int e);

main(){
	int sair;
	do{
		int X, Z;
		
		printf("digite o valor do numerador: ");
		scanf("%d", &X);
		
		printf("digite o valor do expoente: ");
		scanf("%d", &Z);
		
		printf("resultado: %d", expoente(X, Z));
		
		printf("\n\nDeseja continuar? ");
    	printf("\n 1 - Sim");
    	printf("\n 2 - Nao\n/> ");
    	scanf("%d",&sair);
    	
    	if(sair == 1){
	    	system("cls");
		}
	}while(sair==1);	
}

int expoente(int num, int e){
	int res=1,i;
	if(e == 1)
	{
		res = num;
	}else
	if(e == 0){
		res = 1;
	}else
	{
		for(i=0; i < e; i++){
			res *= num; 
		}
	}
	return res;	
}
#endif

#ifdef ex8
/*8 - Faça um programa receba dois números inteiros e execute as seguintes funções:
    - Verificar se o número digitado é positivo ou negativo. Sendo que o valor de 
      retorno será 1 se positivo, 0 se negativo ou -1 se for igual a 0.
    - Se os 2 números são positivos, retorne a soma dos N números existentes entre 
      eles.
    - Se os 2 números são negativos, retorne a multiplicação dos N números existente
      entre eles.*/
int verificar(int a, int b); 
int operacao(int a, int b, int res); 
main(){
	int sair;
	do{
		int n1, n2;
	
		printf("digite o valor de n1: ");
		scanf("%d",&n1);
		
		printf("digite o valor de n2: ");
		scanf("%d",&n2);
		
		int res =verificar(n1,n2);
		
		printf("return: %d\n", res);
		int r =operacao(n1,n2, res);
		printf("resultado conta: %d", r);
		
		printf("\n\nDeseja continuar? ");
    	printf("\n 1 - Sim");
    	printf("\n 2 - Nao\n/> ");
    	scanf("%d",&sair);
    	
    	if(sair == 1){
	    	system("cls");
		}
	}while(sair==1);
}

int verificar(int a, int b){
	if(a > 0 && b > 0){
		return 1;
	}else
	if(a < 0 && b < 0){
		return -1;
	}else{
		return 0;
	}
}

operacao(int a, int b, int res){
	if(res == 1){
		return a+b;
	}else
	if(res == -1){
		return a*b;
	}
}
#endif
