#include <stdio.h>
#include <stdlib.h>
#define ex7

#ifdef ex1
/*1 - Escreva um programa e inicialize as variaveis do tipo char, int, short,
    long, unsigned(char, int, short, long), float e double com seus valores
    limites e imprima-os no video. Utilize variaveis globais para os valores
    positivos e locais para os negativos.*/
// valores positivos
char c = '127';
short int shortInt = 32767;
long int longInt= 2147483647;
unsigned char uChar = '255';
unsigned short int uShortInt= 65535;
unsigned int uInt= 65535;
unsigned long int uLongInt= 4294967295;

main()
{	//valores negativos
	 char nc = '127';
    short int nShortInt = -32768;
    long int nLongInt= -2147483648;
    unsigned char nUchar = '0';
    unsigned short int nUshortInt= 0;
    unsigned int nUint= 0;
    unsigned long int nUlongInt= 0;

    printf("****MAIORES VALORES****\n");
    printf("Maior valor tipo Char:              %c\n",c);
    printf("Maior valor short int:              %hd\n",shortInt);
    printf("Maior valor long int:               %ld\n",longInt);
    printf("Maior valor unsigned char:          %u%c\n",uChar);
    printf("Maior valor unsigned short int:     %hu\n",uShortInt);
    printf("Maior valor unsigned int:           %u\n",uInt);
    printf("Maior valor long int:               %ul\n\n",uLongInt);

    printf("****MENORES VALORES****\n");
    printf("Menor valor tipo Char:              %c\n",nc);
    printf("\tMenor valor short int:              %hd\n",nShortInt);
    printf("Menor valor long int:               %ld\n",nLongInt);
    printf("Menor valor unsigned char:          %u%c\n",nUchar);
    printf("Menor valor unsigned short int:     %hu\n",nUshortInt);
    printf("Menor valor unsigned int:           %u\n",nUint);
    printf("Menor valor long int:               %ul\n",nUlongInt);

}
#endif

#ifdef ex2
/*2 - Escreva um programa que receba dados via teclado para variaveis do tipo short,
    long, int, float, double e um char e imprima-os no video no seguinte
    formato:

             10        20        30        40        50        60
     12345678901234567890123456789012345678901234567890123456789012345
         short               long                int
                   float               double              char*/
main()
{	
	char f;
	printf("Digite uma letra 'CHAR': ");
	scanf("%c", &f);
	
	short int a;
	printf("Digite um valor 'SHORT': ");
	scanf("%hd", &a);
	
	float b;
	printf("Digite um valor 'FLOAT': ");
	scanf("%f", &b);
	
	long int c;
	printf("Digite um valor 'LONG': ");
	scanf("%ld", &c);
	
	double d;
	printf("Digite um valor 'DOUBLE': ");
	scanf("%d", &d);
	
	int e;
	printf("Digite um valor 'INT': ");
	scanf("%d", &e);
	
	
	printf("        10        20        30        40        50        60\n");
	printf("12345678901234567890123456789012345678901234567890123456789012345\n");
	printf("    %-20hd",a);	// SHORT 
	printf("%-20ld",c);	// LONG
	printf("%d\n",e);	// INT   
	printf("              %-20.2f",b);	// FLOAT
	printf("%-20d",d);	// DOUBLE
	printf("%c",f);	// CHAR	
}
#endif

#ifdef ex3
/*3 - Acrescente ao exercicio anterior mais uma linha. Receba via teclado os valores
    sem sinal char, int e long int e escrevendo nas coluna 10, 30 e 50.*/
main()
{	
	short int a;
	printf("Digite um valor para 'SHORT': ");
	scanf("%hd", &a);
	
	float b;
	printf("Digite um valor para 'FLOAT': ");
	scanf("%f", &b);
	
	long int c;
	printf("Digite um valor para 'LONG': ");
	scanf("%ld", &c);
	
	double d;
	printf("Digite um valor para 'DOUBLE': ");
	scanf("%lf", &d);
	
	int e;
	printf("Digite um valor para 'INT': ");
	scanf("%d", &e);
	
	getchar();
	char f;
	printf("Digite um valor para 'CHAR': ");
	f = getchar();
	
	getchar();
	unsigned char g;
	printf("Digite um valor para 'CHAR': ");
	g = getchar();
	
	int h;
	printf("Digite um valor para 'INT 2': ");
	scanf("%d", &h);
	
	long int i;
	printf("Digite um valor para 'LONG 2': ");
	scanf("%ld", &i);
	
	printf("        10        20        30        40        50        60\n");
	printf("12345678901234567890123456789012345678901234567890123456789012345\n");
	
	// 1 COLUNA //
	printf("    %-20hd",a);	// SHORT 
	printf("%-20ld",c);	// LONG
	printf("%d\n",e);	// INT 
	// 2 COLUNA //
	printf("              %-20.2f",b);	// FLOAT
	printf("%-20d",d);	// DOUBLE
	printf("%c\n",f);	// CHAR
	// 3 COLUNA //
	printf("         %-20c",g);	// UNSIGNED CHAR
	printf("%-20d", h);	// INT
	printf("%ld",i);	// LONG 
}
#endif

#ifdef ex4
/*4 - Escreva um programa que permute o conteúdo de duas variáveis sem utilizar uma
    variável auxiliar.*/
main(){
    int a;
    int b;

    printf("Digite o valor de A: \n");
    scanf("%d",&a);
    printf("Digite o valor de b: \n");
    scanf("%d",&b);

    printf("\n%d%d\n",a,b);
    printf("Permutado: %d%d\n",b,a);
}

#endif

#ifdef ex5
/*5 - Escreva um programa que determine o menor multiplo de um numero inteiro. Este 
    multiplo deve ser maior que o limite minimo recebido. Recebe os 2 numeros via 
    teclado.
    Ex: menor multiplo de 13 maior que 100. Resultado: 104.*/
main(){
	int n, lim, a;
	
	printf("Digite um numero qualquer: ");
	scanf("%d", &n);
	
	printf("Digite o limite: ");
	scanf("%d", &lim);
	a=lim;	
	
	do{
		lim += 1;
	}while(lim%n!=0);


printf("menor multiplo de %d maior que %d Resultado: %d",n,a,lim);
printf("\n\n %d / %d = %d", lim,n, lim/n);
}
#endif

#ifdef ex6
/*6 - Escreva um programa que receba via teclado um tempo em segundos e converta um
    para horas, minutos e segundos. 
    Ex.: recebe 3850 segundos que converte para 1h 4min 10s.*/
main()
{
	int t, h, m, s;
	printf("entre com o tempo em segundos: ");
    scanf("%d",&t);

    h = t/3600;
    m = (t%3600)/60;
    s = (t%3600)%60;

    printf("%d segundos equivale a %d hora(s),%d minuto(s),%d segundo(s)", t,h,m,s);
}
#endif

#ifdef ex7
/*7 - Faça um programa para ler um numero inteiro, positivo de tres digitos, e gerar
    outro número formado pelos dígitos invertidos do número lido.
    Ex:   NúmeroLido = 123
        NúmeroGerado = 321*/
main(){
int num,x1,x2,x3;

    printf("entre com um valor de 3 digitos: ");
    scanf("%d",&num);
    
	x1 = num%10;
	x2 = (num%100)/10;
	x3 = (num%1000)/100;
	num = (x1*100) + (x2*10) + (x3*1); 
	
	
printf("o valor invertido e': %d",num);
}
#endif

#ifdef ex8
/*8 - Escreva um program que lê um valor em reais e calcula qual o menor número 
    possível de notas de $100, $50, $10 e $1 em que o valor lido pode ser 
    decomposto. Imprimir o valor lido e a relação de notas necessárias.*/
main(){
	int n100, n50, n10, n1, aux, vl;
	printf("Digite um valor inteiro: ");
	scanf("%d", &vl); // EX: 552
	
 	n100 = vl / 100; //  n100 = <5>,52 <<
    aux = vl % 100;  //  aux  = 52
    n50 = aux / 50;	 //  n50  = <1>,04 <<
    aux = aux % 50;	 //  aux  = <2>
    n10 = aux / 10;	 //  n10  = <0>,2 <<
    n1 = aux % 10; 	 //  n1   = 2 <<
    
    printf("quantidade de notas decomposto: \n");
    printf("$100 = %d notas\n",n100); // 5
    printf("$50 = %d notas\n",n50);	  // 1
    printf("$10 = %d notas\n",n10);	  // 0
    printf("$1 = %d notas\n",n1);	  // 2
}
#endif
