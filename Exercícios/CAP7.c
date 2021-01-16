#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define ex2

#ifdef ex1
/*1 - Escreva um programa que tem uma estrutura da dados com os membros abaixo.
    receba dados via teclado e imprima estes conteudos no video no seguinte
    formato.
             char, int, long, float, double
             unsigned char, unsigned int, unsigned long,

            10        20        30        40        50        60        70
    1234567890123456789012345678901234567890123456789012345678901234567890
        char      	   		int       		    long
				  float				  double	          unsigned char
		unsigned int        unsigned long*/

struct tipos{
	char a;
	int b;
	long int  c;
	float d;
	double e;
	unsigned char f;
	unsigned int g;
	unsigned long  h;
};

main()
{	int sair;
	struct tipos var;
	do{

		printf("Digite um valor para 'CHAR': ");
		scanf("%c", &var.a);

		printf("Digite um valor para 'INT': ");
		scanf("%d", &var.b);

		printf("Digite um valor para 'LONG': ");
		scanf("%ld", &var.c);

		printf("Digite um valor para 'FLOAT': ");
		scanf("%f", &var.d);

		printf("Digite um valor para 'DOUBLE': ");
		scanf("%lf", &var.e);

		getchar();
		printf("Digite um valor para 'UNSIGNED CHAR': ");
		scanf("%c",&var.f);

		printf("Digite um valor para 'UNSIGNED INT': ");
		scanf("%d", &var.g);

		printf("Digite um valor para 'UNSIGNED LONG': ");
		scanf("%ld", &var.h);

		printf("        10        20        30        40        50        60\n");
		printf("12345678901234567890123456789012345678901234567890123456789012345\n");

		// 1 COLUNA //
		printf("    %-20c",var.a);	// CHAR
		printf("%-20d",var.b);	// INT
		printf("%ld\n",var.c);	// LONG

		// 2 COLUNA //
		printf("              %-20.2f",var.d);	// FLOAT
		printf("%-20lf",var.e);	// DOUBLE
		printf("%c\n",var.f);	// UNSIGNED CHAR

		// 3 COLUNA //
		printf("    %-20d",var.g);	// UNSIGNED INT
		printf("%-20d", var.h);	// UNSIGNED LONG

		printf("\n\nDeseja continuar? ");
    	printf("\n 1 - Sim");
    	printf("\n 2 - Nao\n/> ");
    	scanf("%d",&sair);

    	if(sair == 1){
	    	system("cls");
		}
	}while(sair==1);
}
#endif

#ifdef ex2
/*2 - Escreva um programa com a estrutura abaixo. Defina um vetor de estruturas
    de 4 elementos. Receba os dados pelo teclado e imprima-os no video. Faça um
    menu. (vetor de estruturas)
		nome, end, cidade, estado, cep*/
struct menu{
    int adc;
    int mostra;
    int sair;

};
struct dados{
	char nome[50];
	char end[50];
	char cidade[50];
	char estado[3];
	char cep[9];

};

main(){
	struct dados pessoa[4];
	struct menu valor ={1,2,0};
	int i,res,cont=0;
	while(1){
		system("cls");
		printf("Digite o numero da opcao desejada: \n");
		printf("\t(1) Adicionar dados:\n\t(2) Mostrar dados:\n\t(0) Sair:\n /> ");
		scanf("%d",&res);
		getchar();
		
		if(res == valor.adc){
			if(cont < 4){
				printf("Digite a pessoa numero [%d]\n",cont+1);
				printf("Digite o nome: ");
		        gets(pessoa[cont].nome); // conta o espaco <gets>
		
		        printf("Digite o end: ");
		        gets(pessoa[cont].end);
		
		        printf("Digite o cidade: ");
		        gets(pessoa[cont].cidade);
		        
		        printf("Digite o estado: ");
		        gets(pessoa[cont].estado);
		
		        printf("Digite o cep: ");
		        gets(pessoa[cont].cep);
		
		        cont++;
			}
			else{
				printf("\n\tLimite de cadastrado excedido!!");
				printf("\n\npressione ENTER para continuar />");
		        getchar();
			}
	    }else
	    if(res == valor.mostra){
	    	system("cls");
	        printf("\nResultados:");
	        for(i=0; i<cont; i++){
	        	printf("\n");
	            printf("\ndados pesssoa [%i]: \n", i+1);
	            printf("\n\tDigite o nome: %s",pessoa[i].nome);
	            printf("\n\tDigite o end: %s",pessoa[i].end);
	            printf("\n\tDigite o cidade: %s",pessoa[i].cidade);
	            printf("\n\tDigite o estado: %s",pessoa[i].estado);
	            printf("\n\tDigite o cep: %s\n",pessoa[i].cep);
			}
			printf("\n\tpressione ENTER para continuar />");
	        getchar();
	    }else
	    if(res == valor.sair){
	    	printf("\nPrograma Finalizado!\n");
	    	break;
		}	
	}	
}
#endif

#ifdef ex3
/*   3 - Crie uma estrutura para representar as coordenadas de um ponto no plano
    (posicoes X e Y). Em seguida, declare e leia do teclado um ponto e exiba a
    distancia dele ate' a origem das coordenadas, isto é, posição (0, 0). Para
    realizar o cálculo, utilize a fórmula a seguir:

           d = raiz quadrada de  (XB - XA)² +(YB -YA)²
    Em que:

    d = distância entre os pontos A e B
    X = coordenada X em um ponto
    Y = coordenada Y em um ponto
*/

struct posicoes{
	int xa;
    int xb;
	int ya;
	int yb;
	float d;
};
main(){
	struct posicoes origem = {0,0,0,0,0};
	int sair,i;
	
	do{

	printf("Digite o valor de x: ");
    scanf("%d",&origem.xb);
    printf("\n");
    printf("Digite o valor de y: ");
    scanf("%d",&origem.yb);

    origem.d = sqrt(pow((origem.xb - origem.xa),2) +pow((origem.yb - origem.ya),2));
    printf("\n");
    printf("A Distancia entre a origem e o ponto %d e %d  = %.2f. ",origem.xb,origem.yb,origem.d);

		printf("\n\nDeseja continuar? ");
	    	printf("\n 1 - Sim");
	    	printf("\n 2 - Nao\n/> ");
	    	scanf("%d",&sair);
	    	getchar();

	    	if(sair == 1){
		    	system("cls");
			}
	}while(sair==1);
}
#endif
