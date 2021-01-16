#include <stdio.h>
#include <stdlib.h>

#define ex1

#ifdef ex1
/*1 - Escreva um programa para receber via teclado em vetores 3 int, 3 long,
    3 unsigned, 3 float e 3 double e imprima-os no video no seguinte formato:

            10        20        30        40        50
    12345678901234567890123456789012345678901234567890 
      int                 long                unsigned
                float               double
      int                 long                unsigned
                float               double
      int                 long                unsigned
                float               double*/
main(){
	
	int vint[3],x,y, sair;
	long vlong[3];
    unsigned vunsigned[3];
    float vfloat[3];
    double vdouble[3];
    char tipo [5][9]= {"INT","LONG","UNSIGNED","FLOAT","DOUBLE"};
    
   do{
    for(y=0;y<5;y++){
        for(x=0;x<3;x++){
            printf("digite o %d numero %s: ",x+1,tipo[y]);
            if(y==0){
                scanf("%d",&vint[x]);
            } else if (y==1){
                scanf("%ld",&vlong[x]);
            } else if (y==2){
                scanf("%u",&vunsigned[x]);
            } else if (y==3){
                scanf("%f",&vfloat[x]);
            } else {
                scanf("%lf",&vdouble[x]);
            }
        }
    }
    printf("\n        10        20        30        40        50\n");
    printf("12345678901234567890123456789012345678901234567890\n");

    for(x=0;x<3;x++){
        printf("  %-6d              %-10ld          %-5u\n",vint[x],vlong[x],vunsigned[x]);
        printf("            %-8.1f            %-8.1lf\n",vfloat[x],vdouble[x]);
    }
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
/*2 - Um vetor é palíndromo se ele não se altera quando as posições dos componentes
    são invertidos. Por exemplo, o vetor v = {1, 3, 5, 2, 2, 5, 3, 1} é palíndromo.
    Escreva um programa que verifique se um vetor é palíndromo. Receba o vetor 
    via teclado (tamanho 10)*/
main(){
	int vet[10], i, aux = 9, cont=0, sair;
	
   do{
	
	for(i=0; i < 10; i++)
	{
		printf("Digite o %d valor do vetor: ", i+1);
		scanf("%d", &vet[i]);
		
	}
	
	for(i=0; i < 5; i++)
	{
		if(vet[i] == vet [i+aux])
		{
			cont++;
			aux-=2;
		}
	}
	
	if(cont==5){
		printf("E' PALINDROMO!!\n");
	}else{
		printf("NAO E' PALINDROMO!!\n");
	}
	
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

#ifdef ex3
/*3 - Escreva um programa declarando um vetor multidimensional de 2x3x3 de n.
    inteiros e inicialize-o com "0". Receba via teclado novos valores para
    todos os elementos do vetor e imprima no video estes novos conteudos.*/
main(){
	int pag, lin, col, sair;
 do{
	int vet [2][3][3] = {
						 {{0,0,0},
						  {0,0,0},
						  {0,0,0}},
						 
						 {{0,0,0},
						  {0,0,0},
						  {0,0,0}}
					    };
					    
	
	for(pag=0; pag<2; pag++)
	{
		for(lin=0; lin<3; lin++)
		{
			for(col=0; col<3; col++)
			{
				printf("Digite o valor da pag %d, lin %d, col %d: ",pag, lin, col);
				scanf("%d",&vet[pag][lin][col]);
			}
		}
	}
	system("cls");
	printf("Matriz multidimensional com valores digitados: \n");
	for(pag=0; pag<2; pag++)
	{
		for(lin=0; lin<3; lin++)
		{
			for(col=0; col<3; col++)
			{
				printf("%d",vet[pag][lin][col]);
				
			}
			printf("\n");
		}
		printf("\n");
	}
	
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

#ifdef ex4
/*4 - Defina 2 vetores bidimensionais do tipo inteiro de 2x3. Escreva um programa
    que recebe os dados via teclado para esses 2 vetores. Usando o operador
    multiplicacao "*", multiplique os elementos de mesmo indice dos 2 vetores
    e guarde o resultado num 3. vetor. Imprima na tela o indice, os valores e
    o resultado dos 6 elementos dos vetores.*/
main(){
	int sair, vet1[2][3], vet2[2][3], vetr[2][3], i, j;

	do{
		for(i=0;i<=1;i++)
        {
            for(j=0;j<=2;j++)
            {
            	printf("Digite o termo[%d,%d]do vetor 1: ",j+1, j+1);
            	scanf("%d",&vet1[i][j]);
            }
        }

		printf("\n");
        for(i=0;i<=1;i++)
        {
            for(j=0;j<=2;j++)
            {
                printf("Digite o termo[%d,%d]do vetor 2: ",i+1, i+1);
                scanf("%d",&vet2[i][j]);
            }
        }

		printf("\nResultado da multiplicacao dos vetores: \n");
        for(i=0;i<=1;i++)
        {
            for(j=0;j<=2;j++)
            {
                vetr[i][j] = vet1[i][j] * vet2[i][j];
                printf("%d * %d= %d\n",vet1[i][j], vet2[i][j], vetr[i][j]);
            }
			printf("\n");
        }
			
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

#ifdef ex5
/*5 - Escreva um programa que receba um vetor e o decomponha em dois outros vetores, 
    um contendo as componentes de ordem ímpar e o outro contendo as componentes 
    de ordem par. Por exemplo, se o vetor dado for v = {3, 5, 6, 8, 1, 4, 2, 3, 7},
    o programa deve gerar os vetores u = {3, 6, 1, 2, 7} e w = {5, 8, 4, 3}. */
main(){
	int sair,i ,v[10] = {3, 5, 6, 8, 1, 4, 2, 3, 7}, u[10], w[10];
	int x=0, y=0;
	do{
		for(i=0; i<10; i++)
		{
			if(i % 2 == 0){
				u[x] = v[i];
				x++;
			}
			else{
				w[y] = v[i];
				y++;
			}
		}
		printf("vetor com impares: \n");
		for(i=0; i<x; i++)
		{
			printf("%d ", u[i]);
		}
		
		printf("\nvetor com pares: \n");
		for(i=0; i<y; i++)
		{
			printf("%d ", w[i]);
		}
		
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

#ifdef ex6
/*6 - Escreva um programa que decomponha um vetor de inteiros em dois outros vetores,
    um contendo as componentes de valor ímpar e o outro contendo as componentes de
    valor par. Por exemplo, se o vetor dado for v = {3, 5, 6, 8, 1, 4, 2, 3, 7} o
    programa deve gerar os vetores u = {3, 5, 1, 3, 7} e w = {6, 8, 4, 2}. */
main(){ 
	int sair,i ,v[10] = {3, 5, 6, 8, 1, 4, 2, 3, 7},w[10],u[10];
	int x=0, y=0;
	do{
		
		for(i=0; i<10; i++)
		{
			if(v[i] % 2 == 0){
				u[x] = v[i];
				x++;
			}
			else{
				w[y] = v[i];
				y++;
			}
		}
		printf("vetor com impares: \n");
		for(i=0; i<x; i++)
		{
			printf("%d ", u[i]);
		}
		
		printf("\nvetor com pares: \n");
		for(i=0; i<y; i++)
		{
			printf("%d ", w[i]);
		}
		
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

#ifdef ex7
/*7 - Receba via teclado dez valores numericos e ordene por ordem crescente estes
    valores, guardando-os num vetor. Ordene o valor assim que ele for digitado. 
    Mostre ao final os valores em ordem.*/
main(){
	int sair, vet[10],aux,i,j;
	do{
		for(i=0;i<10;i++)
		{
			printf("Digite o %d valor: ",i+1);
			scanf("%d", &vet[i]);
		}
		
		for(i=0; i <10; i++)
        {
        	for(j=i+1; j <10; j++)
            {
                if(vet[i]>vet[j])
                {
                	aux = vet[i];
                	vet[i]= vet[j];
                    vet[j] = aux;
                }
            }
    	}
		
		printf("\nVETOR ORDENADO: \n");
		for(i=0;i<10;i++)
		{
			printf("%d ",vet[i]);
		}
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

#ifdef ex8
/*8 - Leia uma matriz 5 x 5. Leia tambem um valor X. O programa dever fazer a busca
    desse valor na matriz e, ao final escrever a localizacao (linha e coluna) ou 
    uma mensagem de ”nao encontrado”.*/
main(){
	int sair,i,j, vet[5][5], busca,cont=0;
	
	do{
		for(i=0; i<5; i++)
		{
			for(j=0; j<5; j++)
			{
				printf("Digite o [%d][%d] valor inteiro: ", i+1,j+1);
				scanf("%d",&vet[i][j]);
			}
		}
	
		printf("digite um valor para buscar na matriz: ");
		scanf("%d",&busca);
		
		for(i=0; i<5; i++)
		{
			for(j=0; j<5; j++)
			{
				if(busca == vet[i][j])
				{
					printf("posicao do numero buscado na matriz: [%d][%d]\n",i+1,j+1);
					cont++;
				}
			}
		}
		
		if(cont==0)
		printf("\nNumero nao Encontrado!");
		
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
