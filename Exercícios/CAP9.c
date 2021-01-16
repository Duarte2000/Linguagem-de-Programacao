#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define ex1

#ifdef ex1
/*1 - Escreva um programa que tem uma estrutura da dados com os membros abaixo.
    A estrutura é uma variavel local na função main().Receba via teclado o 
    conteudo de cada um dos membros numa função e imprima-os no video no 
    seguinte fomato(também numa função).

            10        20        30        40        50        60        70
    1234567890123456789012345678901234567890123456789012345678901234567890
        char      int       long                float               double
              unsigned char       unsigned int        unsigned long*/
               
struct tipo{
	char a;
    int b;
    long c;
    unsigned int d;
    float e;
    double f;
    unsigned long ug;
    unsigned char uh;
};
          
void leia(struct tipo *pont);
void imprima(struct tipo *pont);		  
		      
main(){
	struct tipo val; 
	struct tipo *pt;
	pt = &val;
	int sair;
	do{
	
	    leia(pt);
	    imprima(pt);

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

void leia(struct tipo *pont){
	printf("Char: ");
	pont->a = getchar();

	printf("\nInt: ");
	scanf("%d",pont->b);
	
	printf("\nLong: ");
	scanf("%ld",pont->c);
	
	printf("\nUnsigned Int: ");
	scanf("%ud",pont->d);
	
	printf("\nFloat: ");
	scanf("%f",pont->e);
	
	printf("\nDouble: ");
	scanf("%lf",pont->f);
	
	printf("\nUnsigned Long: ");
	scanf("%ul",pont->ug);getchar();
	
	printf("\nUnsigned Char: ");
	pont->uh = getchar();
}

void imprima(struct tipo *pont){
	printf("        10        20        30        40        50        60\n");
	printf("12345678901234567890123456789012345678901234567890123456789012345\n");

	// 1 COLUNA //
	printf("    %-20d",pont->b);	// INT
	printf("%-20ld",pont->c);	// LONG
	printf("%ud\n",pont->d);	// UNSIGNED INT

	// 2 COLUNA //
	printf("              %-20.2f",pont->e);// FLOAT
	printf("%-20lf",pont->f);	// DOUBLE
	printf("%-20c\n",pont->a);	// CHAR

	// 3 COLUNA //
					 
	printf("         %-20ul", pont->ug);	// UNSIGNED LONG
	printf("%c\n",pont->uh);	// UNSIGNED CHAR
}
#endif

#ifdef ex2
/*2 - Escreva um programa que receba n valores via teclado, receba também a 
    operação a ser executada. Quando for digitado "=" o programa deve mostrar
    o resultado acumulado dos n valores. As operações aritmeticas e a entrada
    de dados devem ser funções que recebe os valores usando ponteiros.*/

float ler_valor(float *pl);
char ler_opcao(char *pop);
float fazer_conta(float *pl, char *pop, float *r);

int main(){
	float ler, res;
	char op;
	
	ler_valor(&res);
	
	while(1){

		ler_opcao(&op); //printf("OP: %c\n",op);
		
		if(op == '=')
        {
            break;
        }
        
		ler_valor(&ler); //printf("\nRes: %f.2\n",ler);
		
		fazer_conta(&ler, &op, &res);
		printf("\nResultado: %.2f\n",res);
	}
	
	printf("\nResultado Final: %.2f\n", res);
	
}

float ler_valor(float *pl){
	printf("\nDigite um valor qualquer: ");
	scanf("%f", pl);
}

char ler_opcao(char *pop){
	printf("\nEscolha a operacao aritmetica +|-|*|/ ou =: ");
	scanf(" %c", pop);
}

float fazer_conta(float *pl, char *pop, float *r){
	switch(*pop){
		case'+':{
			*r+= (*pl);
			break;
		}
		
		case'-':{
			*r-= (*pl);
			break;
		}
		
		case'*':{
			*r*= (*pl);
			break;
		}
		
		case'/':{
			*r/= (*pl);
			break;
		}	
	}
}
#endif

#ifdef ex3
/*3 - Escreva um programa que receba uma letra via teclado. Escreva uma funcao que
    pesquise esta letra dentro do vetor abaixo. Imprima o resultado da pesquisa no
    video na funcao main(). O vetor é uma variavel local na função main().Passe 
    como parametro para a funcao o vetor e a letra digitada usando ponteiros.
    (utilize o comando return)
    vetor -> b,d,f,h,j,k,m,o,q,s,u,w,y*/

char pesquisa(char *pl, char *pvet);

main(){
	char vet[] = {'b','d','f','h','j','l','m','o','q','s','u','w','y'};
	char ler;
	int sair;
	
	do{
		printf("Digite uma letra qualquer: ");
		ler = getchar();
		int j = pesquisa(&ler, &vet);
		
		if(j == 1){
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

char pesquisa(char *pl, char *pvet){
	int i,cont=0;
	
	for(i=0; i<13; i++){
			if(*pl == pvet[i]){
				cont++;
				break;
			}
		}	
	return cont;
}
#endif

#ifdef ex4
/*4 - Escreva um programa que receba em 2 funcao 2 strings de ate' 10 caracteres.
    Os vetores sao declaradas como variavel local na funï¿½ï¿½o main().
    Escreva uma funcao que recebe as strings com parametros usando ponteiros
    e compare estas 2 strings.
    Retorne como resultado da comparacao 0 se forem DIFERENTES, 1 se forem
    IGUAIS, 2 se a string 1 for maior que a string 2, 3 se a string 2 for maior
    que a string 1 e 4 se as string tem tamanhos iguais mas sï¿½o diferentes.*/

int i=0;
int sair;


char PrimeiraString(char *p1){
  printf("Digite a primeira string\n");
  gets(p1);
}
char SegundaString(char *p2){
  printf("Digite a segunda string\n");
  gets(p2);
}

char Compara(char *p1, char *p2){
  while (*p1 == *p2 && *p1 != '\0') {
          p1++;
          p2++;
      }

      if(*p1 == *p2) {
          printf(" '1' Iguais\n");}
          else if (*p1 == '\0' && *p2 != '\0'){
          printf("'3' Palavra2 > Palavra 1");}
          else if (*p2 == '\0' && *p1 != '\0'){
          printf("'2' Palavra1 > Palavra2\n");}
          else if(*p1 != *p2){
          printf("'4' Mesmo tamanho porem diferentes\n");}

}

int main() {
do{
char s1[11],s2[11],*p1,*p2;

p1 = &s1[0];
p2 = &s2[0];

PrimeiraString(p1);
printf("---------------------\n");
printf("\n");
SegundaString(p2);
Compara(p1, p2);


printf("\n\nDeseja continuar? ");
printf("\n 1 - Sim");
printf("\n 2 - Nao\n/> ");
scanf("%d",&sair);
fflush(stdin);
      if(sair == 1){
        system("cls");
    }
}while(sair==1);
}
#endif

#ifdef ex5
/*5 - Escreva um programa com a estrutura abaixo. Defina um vetor de estruturas 
    de 4 elementos.Receba os 4 registros sequencialmente pelo teclado numa 
    função e imprima todos os registros no video em outra função. Faça um menu. 
    Coloque no menu a opção de sair também. Utilize o comando switch. 
    (vetor de estruturas) 
                nome, end, cidade, estado, cep */

struct dados{
	char nome[50];
	char end[50];
	char cidade[50];
	char estado[3];
	char cep[9];
};

int i, lim=0;

void leia(struct dados *pessoa);
void imprimir(struct dados *pessoa);

main(){
	struct dados pessoa[3];
	int res;
	while(1){
		system("cls");
		printf("Digite o numero da opcao desejada: \n");
		printf("\t(1) Adicionar dados:\n\t(2) Mostrar dados:\n\t(0) Sair:\n /> ");
		scanf("%d",&res);
		getchar();
		
		if(res == 0){
		    printf("\nPrograma Finalizado!\n");
		    break;
		}
		switch (res){
			case 1:{
				leia(pessoa);
				break;
			}	
			case 2:{
				imprimir(pessoa);
				break;
			}
		}	
	}	
}

void leia(struct dados *pessoa){
	if(lim < 4){
		printf("Digite a pessoa numero [%d]\n",lim+1);
		printf("Digite o nome: ");
		gets(pessoa[lim].nome); // conta o espaco <gets>
			
		printf("Digite o end: ");
		gets(pessoa[lim].end);
			
		printf("Digite o cidade: ");
		gets(pessoa[lim].cidade);
			        
		printf("Digite o estado: ");
		gets(pessoa[lim].estado);
			
		printf("Digite o cep: ");
		gets(pessoa[lim].cep);
			
		lim++;
	}
	else{
		printf("\n\tLimite de cadastrado excedido!!");
		printf("\n\npressione ENTER para continuar />");
		getchar();
	}
}

void imprimir(struct dados *pessoa){
	system("cls");
	printf("\nResultados:");
	for(i=0; i<lim; i++){
		printf("\n");
	    printf("\n%i Pessoa: \n", i+1);
		printf("\nNome: %s",  pessoa[i].nome);
	    printf("\nEnd: %s",   pessoa[i].end);
	    printf("\nCidade: %s",pessoa[i].cidade);
	    printf("\nEstado: %s",pessoa[i].estado);
	    printf("\nCep: %s",   pessoa[i].cep);
	}
	printf("\n\tpressione ENTER para continuar />");
	getchar();
}
#endif

#ifdef ex6
struct reg{
    char no[20];
    char end[20];
    char cid[20];
    char es[3];
    char cep[10];
};

main(){
struct reg c[4], *p;
int x;
int op;

p = &c[0];

read(p);

for(;;){
    printf("1 - entra dados\n");
    printf("2 - lista dados\n");
    printf("3 - comp dados\n");
    printf("4 - altera dados\n");
    printf("5 - exclui dados\n");
    printf("6 - sair\n");
    scanf("%d",&op);
    getchar();
 if(op == 6)
        break;

    switch(op){
        case 1 :
            entra(p);
            break;
        case 2 :
            imp(p);
            break;
        case 3 :
            x = comp(p);
            if(x != -1)
                printf("iguais\n");
            else
                printf("diferentes\n");
            break;
        case 4 :
            altera(p);
            break;
         case 5 :
            exclui(p);
            break;
   }
}
}

entra(struct reg *p)
{
    int x;
    for(x=0;x<2;x++){
    printf("digite o nome:");
    gets((p+x) -> no);
    printf("digite o endereco:");
    gets((p+x)->end);
    printf("digite o cidade:");
    gets((p+x)->cid);
    printf("digite o estado:");
    gets((p+x)->es);
    printf("digite o cep:");
    gets((p+x)->cep);
    printf("\n");

}
    save(p);
}
imp(struct reg *p)
{
    int x;
    for(x=0;x<2;x++){
    printf("\n o nome: %s\n",(p+x)->no);
    printf(" o endereco: %s\n",(p+x)->end);
    printf(" o cidade: %s\n",(p+x)->cid);
    printf(" o estado: %s\n",(p+x)->es);
    printf(" o cep: %s\n",(p+x)->cep);
}
}

comp(struct reg *p)
{
char nome1[20], *p1;
int x,y;
p1=nome1;

printf("digite nome1:");
scanf("%s",p1);
//printf("%s\n",p1);

for(y=0;y<2;y++){
    //printf("for %s  %s\n",p1 , (p + y)->no);
for(x=0;*(p1 + x) != '\0';x++){
    //printf("dentro %c  %c\n",*(p1 + x) , (p + y)->no[x]);
    if(*(p1 + x) != (p + y)->no[x])
        break;

}

//printf("fora %c  %c\n",*(p1 + x) , (p + y)->no[x]);
if(*(p1 + x) == '\0' && (p + y)->no[x] == '\0'){
    //printf("iguais\n");
    //break;
    return y;
}
//else
    //printf("diferente\n");

}
return -1;
}
altera(struct reg *p){
    int x;
    x = comp(p);
    if(x == -1){
        printf("nao existe\n");
        return;
    }
    getchar();
     printf("digite o nome:");
    gets((p+x) -> no);
    printf("digite o endereco:");
    gets((p+x)->end);
    printf("digite o cidade:");
    gets((p+x)->cid);
    printf("digite o estado:");
    gets((p+x)->es);
    printf("digite o cep:");
    gets((p+x)->cep);
    printf("\n");
    save(p);
}

exclui(struct reg *p){
    int x;
    x = comp(p);
    if(x == -1){
        printf("nao existe\n");
        return;
    }
    getchar();
    printf("apaga registro!\n");
    printf("nome e': %s\n",(p+x) -> no);
    (p+x) -> no[0] = '*';
    save(p);

}
save(struct reg *p)
{
    int x;
    struct reg temp;
    FILE *pa;

    pa=fopen("cad","w");
    for(x=0;x<2;x++){
    printf("\n o nome: %s\n",(p+x)->no);
    printf(" o endereco: %s\n",(p+x)->end);
    printf(" o cidade: %s\n",(p+x)->cid);
    printf(" o estado: %s\n",(p+x)->es);
    printf(" o cep: %s\n",(p+x)->cep);
        fwrite((p+x),sizeof(temp),1,pa);
    }
    fclose(pa);
}

read(struct reg *p)
{
    int x;
    struct reg temp;
    FILE *pa;
    pa=fopen("cad","r");
    for(x=0;x<2;x++){
        fread((p+x),sizeof(temp),1,pa);
    }
    fclose(pa);
}
#endif
