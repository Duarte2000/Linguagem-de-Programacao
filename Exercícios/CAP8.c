#include <stdio.h>
#include <stdlib.h>
#define ex4

#ifdef ex1
/*1 - Escreva um programa que receba via teclado um char, int, long, unsigned,
    float, double, unsigned long e unsigned char, declare ponteiros para os
    mesmos e imprima-os no video utilizando o operador de conteudo * no
    seguinte formato:

            10        20        30        40        50        60
    123456789012345678901234567890123456789012345678901234567890
        int                 long                unsigned
                  float               double              char
             unsigned long       unsigned char*/
main(){
	char *pa,a;
    int *pb,b;
    long *pc,c;
    unsigned *pd,d;
    float *pe,e;
    double *pf,f;
    unsigned long *pug,ug;
    unsigned char *puh,uh;
	int sair;
	do{
	
	    printf("Char: ");
	    a = getchar();
	
	    printf("\nInt: ");
	    scanf("%d",&b);
	
	    printf("\nLong: ");
	    scanf("%ld",&c);
	
	    printf("\nUnsigned: ");
	    scanf("%u",&d);
	
	    printf("\nFloat: ");
	    scanf("%f",&e);
	
	    printf("\nDouble: ");
	    scanf("%lf",&f);
	
	    printf("\nUnsigned Long: ");
	    scanf("%ul",&ug);getchar();
	
	    printf("\nUnsigned Char: ");
	    uh = getchar();
	
	    pa = &a;
	    pb = &b;
	    pc = &c;
	    pd = &d;
	    pe = &e;
	    pf = &f;
	    pug = &ug;
	    puh = &uh;
	
	    printf("        10        20        30        40        50        60\n");
		printf("12345678901234567890123456789012345678901234567890123456789012345\n");

		// 1 COLUNA //
		printf("    %-20d",*pb);	// INT
		printf("%-20ld",*pc);	// LONG
		printf("%u\n",*pd);	// UNSIGNED

		// 2 COLUNA //
		printf("              %-20.2f",*pe);// FLOAT
		printf("%-20lf",*pf);	// DOUBLE
		printf("%-20c\n",*pa);	// CHAR

		// 3 COLUNA //
					 
		printf("         %-20ul", *pug);	// UNSIGNED LONG
		printf("%c\n",*puh);	// UNSIGNED CHAR

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
#endif

#ifdef ex2
/*2 - Com a estrutura abaixo, defina um vetor de estruturas de 4 elementos. 
    Receba os dados pelo teclado usando ponteiros e imprima-os no video 
    também usando ponteiros. Utilize um comando de loop. (vetor de estruturas)
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
	int i, cont=0,res;
	struct menu valor ={1,2,0};
	struct dados pessoa[3];
	struct dados *pd[3];
	
	pd[0] = &pessoa[0];
    pd[1] = &pessoa[1];
    pd[2] = &pessoa[2];
    pd[3] = &pessoa[3];
	
	while(1){
		system("cls");
		printf("Digite o numero da opcao desejada: \n");
		printf("\t(1) Adicionar dados:\n\t(2) Mostrar dados:\n\t(0) Sair:\n /> ");
		scanf("%d",&res);
		getchar();
		
		if(res == valor.adc){
			if(cont <= 3){
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
            printf("\n%i Pessoa: \n", i+1);
			printf("\nNome: %s",  pd[i]->nome);
            printf("\nEnd: %s",   pd[i]->end);
            printf("\nCidade: %s",pd[i]->cidade);
            printf("\nEstado: %s",pd[i]->estado);
            printf("\nCep: %s",   pd[i]->cep);
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
/*	3 - Receba um caracter via teclado usando ponteiros e compara com o vetor abaixo
    usando ponteiros. mostre como resultado se são IGUAIS ou DIFERENTES.
    vetor -> b,d,f,h,j,l,m,o,q,s,u,w,y
*/

main(){
	char vet[] = {'b','d','f','h','j','l','m','o','q','s','u','w','y'};
	char *pvet, k;
	int i, cont=0, sair;
	
	pvet = &vet[0];
	do{
		
		printf("Digite uma letra qualquer: ");
		scanf("%c", &k); 
		
		for(i=0; i<13; i++){
			if(k ==pvet[i]){
				cont++;
				break;
			}
		}
		
		if(cont == 1){
			printf("\nIGUAL!\n");
		}
		else{
			printf("\nDIFERENTE!\n");
		}
		
		printf("\n\nDeseja continuar? ");
	   	printf("\n 1 - Sim");
	    printf("\n 2 - Nao\n/> ");
	    scanf("%d",&sair); getchar();

	    if(sair == 1){
		    system("cls");
		}
	}while(sair==1);
}
#endif

#ifdef ex4
/*4 - Receba 2 string de ate 10 caracteres via teclado, compare-as usando ponteiros
    e mostre como resultado se são IGUAIS ou DIFERENTES.*/

int main(){
	int sair;
	char A[11], B[11], *pA, *pB;
	
	pA = &A[0];
	pB = &B[0];

	do{
		printf("Digite a primeira palavra: ");
		gets(A);  
		
		printf("Digite a segunda palavra: ");
		gets(B);  
		
		while(*pA == *pB && *pA != '\0' && *pB != '\0' ){
			pA++;
			pB++;
		}
		
		if(*pA == *pB){
			printf("\nIGUAIS!\n");
		}
		else{
			printf("\nDIFERENTES!\n");
		}
		
		printf("\n\nDeseja continuar? ");
    	printf("\n 1 - Sim");
    	printf("\n 2 - Nao\n/> ");
    	scanf("%d",&sair);
    	
    	if(sair == 1){
	    	system("cls");
	    	//getchar();
	    	setbuf(stdin,NULL);
		}
	}while(sair==1);
}
#endif

#ifdef ex5
/*5 - Escreva um programa que receba via teclado numeros inteiros positivos usando 
    ponteiros. Quando o numero digitado for negativo o programa deve parar e calcula
    a media dos valores digitados e mostrar o resultado.*/
main()
{
	int n,*pn, i, total=0, sair;
	float m;
	do{
	i=total=0;
		do{
			printf("Digite o %d valor inteiro: ",i+1);
			scanf("%d", &n);
			
			pn = &n;
			
			if(*pn > 0){
				i++;
				total += n;
				m = (float)total / (float)i;
			}	
		}while(*pn > 0);
	
		printf("\n%d / %d = %f\n",total, i, m);
		printf("TOTAL: %d\n",total);
		printf("A media de numeros positivos e': %.2f",m);
		
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
#endif

#ifdef ex6
/*6 - Escreva um programa que contenha uma estrutura representando uma data
    valida. Essa estrutura deve conter os campos dia, mes e ano. Em seguida, 
    leia duas datas e armazene nessa estrutura usando ponteiros. Calcule e exiba o
    numero de dias que decorrem entre as duas datas usando ponteiros.*/

struct data {
	int dia;
	int mes;
	int ano;
	};

main(){
	int difdia, difmes, difano, bissexto;
	struct data calendario[1];
	struct data *pc[1];
	
	printf("Digite a 1 data:\n");
	printf("DIA: ");
	scanf("%d",&calendario[0].dia);
	printf("MES: ");
	scanf("%d",&calendario[0].mes);
	printf("ANO: ");
	scanf("%d",&calendario[0].ano);
	
	printf("Digite a 2 data:\n");
	printf("DIA: ");
	scanf("%d",&calendario[1].dia);
	printf("MES: ");
	scanf("%d",&calendario[1].mes);
	printf("ANO: ");
	scanf("%d",&calendario[1].ano);
	
	pc[0] = &calendario[0];
	pc[1] = &calendario[1];
	
	
	difano= calendario[1].ano - calendario[0].ano;
    bissexto=difano/4;
    difano= difano+bissexto;
    difmes= calendario[1].mes - calendario[0].mes;
    difdia= calendario[1].dia -calendario[0].dia;
	
	printf("\nA diferenca de dias e: %d\n\n", (difano*365)+(difmes*30)+difdia);
}
#endif

#ifdef ex7

#endif

#ifdef ex8

#endif
