#include <stdio.h>
#include <stdlib.h>
#define ex10

#ifdef ex1
/*
    1 - Escreva um programa que receba via teclado 2 numeros inteiros e
    imprima-os no video com o resultado das 4 operacoes aritmeticas.
*/
int main(){

int sair;
int res=0, n1, n2;
do{
    printf("Digite o valor de n1: ");
    scanf("%d",&n1);

    printf("Digite o valor de n2: ");
    scanf("%d",&n2);

    res = n1 + n2;
    printf("ADICAO:        %d\n",res);

    res = n1 - n2;
    printf("SUBTRACAO:     %d\n",res);

    res = n1 * n2;
    printf("MULTIPLICACAO: %d\n",res);

    res = n1 / n2;
    printf("DIVISAO:       %d\n",res);


    printf("\n\nDeseja continuar? ");
    printf("\n 1 - Sim\n");
    printf(" 2 - Nao\n");
    scanf("%d",&sair);
    if(sair == 1){
    	system("cls");
	}
}while(sair==1); //
}
#endif
#ifdef ex2
/*
    2 - Reescreva o exercicio anterior utilizando operadores de atribuicao
    composta.
*/
int main(){

int sair;
int n1, n2, n3;
do{
    printf("Digite o valor de n1: ");
    scanf("%d",&n1);
	n3 = n1;
    printf("Digite o valor de n2: ");
    scanf("%d",&n2);
	
    printf("n1+=n2 = %d\n",n1+=n2);
	n1 = n3; // mantem o valor do n1;
    
    printf("n1-=n2 = %d\n",n1-=n2);
	n1 = n3; // mantem o valor do n1;
    
    printf("n1*=n2 = %d\n",n1*=n2);
	n1 = n3; // mantem o valor do n1;
    
    printf("n1/=n2 = %d\n",n1/=n2);


    printf("\n\nDeseja continuar? ");
    printf("\n 1 - Sim\n");
    printf(" 2 - Nao\n");
    scanf("%d",&sair);
    if(sair == 1){
    	system("cls");
	}
}while(sair==1);
}
#endif
#ifdef ex3
/*
    3 - Reescreva o exercicio anterior utilizando numeros float.
*/
int main(){

int sair;
float n1, n2, n3;
do{
    printf("Digite o valor de n1: ");
    scanf("%f",&n1);
	n3 = n1;
    printf("Digite o valor de n2: ");
    scanf("%f",&n2);
	
    printf("n1+=n2 = %.1f\n",n1+=n2);
	n1 = n3; // mantem o valor do n1;
    
    printf("n1-=n2 = %.1f\n",n1-=n2);
	n1 = n3; // mantem o valor do n1;
    
    printf("n1*=n2 = %.1f\n",n1*=n2);
	n1 = n3; // mantem o valor do n1;
    
    printf("n1/=n2 = %.1f\n",n1/=n2);


    printf("\n\nDeseja continuar? ");
    printf("\n 1 - Sim\n");
    printf(" 2 - Nao\n");
    scanf("%d",&sair);
    if(sair == 1){
    	system("cls");
	}
}while(sair==1);
}
#endif
#ifdef ex4
/*4 - Escreva um programa que receba via teclado 2 numeros inteiros e execute
    as operacoes logicas bit a bit AND, OU, OU EXCLUSIVO e imprima-os no
    video no formato decimal e hexadecimal.*/
main()
{
    char c;
    int A,B, sair;
    do{
	    printf("DIGITE O PRIMEIRO NUMERO: ");
	    scanf("%d",&A);
	
	    printf("DIGITE O SEGUNDO NUMERO: ");
	    scanf("%d",&B);
	    printf("\n");
	
	    printf("HEXADECIMAL A & B = %x\nDECIMAL     A & B = %d\n",A&B,A&B);
	    printf("\n");
	    printf("HEXADECIMAL A | B = %x\nDECIMAL     A | B = %d\n",A|B,A|B);
	    printf("\n");
	    printf("HEXADECIMAL A ^ B = %x\nDECIMAL     A ^ B = %d\n",A^B,A^B);
  		
		printf("\n\nDeseja continuar? ");
	    printf("\n 1 - Sim\n");
	    printf(" 2 - Nao\n");
	    scanf("%d",&sair);
	    if(sair == 1){
	    	system("cls");
		}
	}while(sair==1);
}
#endif
#ifdef ex5

/*5 - Escreva um programa que receba um numero inteiro via teclado, divida-o
    por 8 e multiplique-o por 8 utilizando os operadores de deslocamento.
    Imprima no video o numero recebido e os resultados obtidos.*/
main(){
	int sair;
	do{
		int n;
		
		printf("digite um valor qualquer para n: ");
		scanf("%d", &n);
		
		//n= n >>3;
		n >>=3;
    	printf("\n divido por 8     = %u\n",n);
    	//n = n <<3;
    	n <<=3;
    	printf("multplicado por 8 = %u",n);
		
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
/*6 - Receba 2 numeros inteiros via teclado. Compare utilizando as expressoes
    abaixo. Imprima no video o resultado (se verdadeiro = 1 se falso = 0)
    a e b e' recebido via teclado para cada expressao
        a >= 120 && b < 240
        a != 60  || b == 120
       (a*25) == 100 && (b+10) >= 100
       ((a + 300)/5) >= 100 || (b - 200) <= 200*/
main(){
	int sair;
	do{
		int a,b;
	
		printf("digite o valor de A: ");
		scanf("%d", &a);
		
		printf("digite o valor de B: ");
		scanf("%d", &b);
		
		printf("\nA >= 120 && B < 240: %d\n",a >= 120 && b < 240);
		printf("A != 60  || B == 120: %d\n",a != 60  || b == 120);
		printf("(A*25) == 100 && (B+10) >= 100: %d\n",(a*25) == 100 && (b+10) >= 100);
		printf("((A + 300)/5) >= 100 || (B - 200) <= 200: %d\n",((a + 300)/5) >= 100 || (b - 200) <= 200);
		
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
/*7 - Escreva um programa que tenha o menu abaixo. F
       1 - transforma graus Celsius em Fahrenheit e Kelvin
       2 - transforma graus Fahrenheit e Celsius e Kelvin
       3 - transforma graus Kelvin e Celsius e Fahrenheit*/
main(){
	int sair;
	do{
		int op;
		float temp, C,F,K;
		
		printf("Escolha uma das opcoes para a conversao:\n");
		printf("1 - transforma graus Celsius em Fahrenheit e Kelvin\n");
	    printf("2 - transforma graus Fahrenheit e Celsius e Kelvin\n");
	    printf("3 - transforma graus Kelvin e Celsius e Fahrenheit\n/>");
	    scanf("%d", &op);
	    
		switch (op){
			case 1:{
				printf("\nDefina a temperatura em Celsius: ");
	   			scanf("%d", &temp);
				F = (temp * 9/5) + 32;       // C para F
				K  = (F - 32) * 5/9 + 273,15; // F para K
				printf("Celsius = %.2fC / Fahrenheit = %.2fF / Kelvin = %.2fK",temp, F, K);
				break;
			}
			
			case 2:{
				printf("\nDefina a temperatura em Fahrenheit: ");
	    		scanf("%d", &temp);
				C = (temp - 32) * 5/9;     // F para C
				K = C + 273,15;			   // C para K
				printf("Fahrenheit = %.2fF / Celcius = %.2fC / Kelvin = %.2fK",temp, C, K);
				break;
			}
			
			case 3:{
				printf("\nDefina a temperatura em Kelvin: ");
	    		scanf("%d", &temp);
				C = temp - 273,15;        // K para C
				F = (C * 9/5) + 32;		  // C para F
				printf("Kelvin = %.2fK / Celcius = %.2fC / Fahrenheit = %.2fF",temp, C, K);
				break;
			}
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
/*8 - Escreva um programa para determinar a idade de uma pessoa, em anos, meses e
    dias, recebendo via teclado a data (dia, mês e ano) do seu nascimento e a
    data (dia, mês e ano) atual.Verifique se a data atual e' anterior a data de
    nascimento.*/
main(){
	int sair;
	do{
		int dia_n, mes_n, ano_n, dia_a, mes_a, ano_a, idade;
		
		printf("\n****digite a data de nascimento:****\n");
		printf("\tdigite o DIA: ");
		scanf("%d", &dia_n);
		printf("\tdigite o MES: ");
		scanf("%d", &mes_n);
		printf("\tdigite o ANO: ");
		scanf("%d", &ano_n);
		
		printf("\n****digite a data ATUAL:****\n");
		printf("\tdigite o DIA: ");
		scanf("%d", &dia_a);
		printf("\tdigite o MES: ");
		scanf("%d", &mes_a);
		printf("\tdigite o ANO: ");
		scanf("%d", &ano_a);
		
		idade = ano_a - ano_n;
		
		if(mes_n <= mes_a){ // caso o MES nasc. seja antes do atual, verifica se o dia tbm é.
            if(dia_n >= dia_a){
				idade--; 
				// caso o DIA nasc. seja antes do atual, diminui a idade, pois ainda nao fez aniversario!
            }   
        }
		else{
            idade--; // caso o MES nasc. seja antes do atual, diminui a idade, pois ainda nao fez aniversario!
        }
        
		printf("\nidade: %d anos", idade);
		
		printf("\n\nDeseja continuar? ");
	    printf("\n 1 - Sim\n");
	    printf(" 2 - Nao\n");
	    scanf("%d",&sair);
	    if(sair == 1){
	    	system("cls");
		}
	}while(sair==1);
}
#endif
#ifdef ex9
/*Escreva um programa para determinar o dia da semana de uma determinada data (dia, mes e ano).
Faça um loop infinito e defina uma saida.*/

	/*  PASSOS PARA SABER UM DIA DA SEMANA DE UMA DATA
		A --> (14 - MES) / 12
		B --> ANO - ANO_atual
		C --> MES + 12*A - 2
		D --> DIA + 31*C/12 + B + B/4 - B/100 + B/400
		R --> (D % 7) + 1
		1-DOM // 2-SEG // 3-TER // 4-QUA // 5-QUI // 6-SEX // 7-SAB
	*/
main()
{	int sair;
	do{
		int A, B, C, D, R, ano, mes, dia;
		
		printf("digite o DIA (dd): ");
		scanf("%d", &dia);
		
		printf("digite o MES (mm): ");
		scanf("%d", &mes);
		
		printf("digite o ANO (aaaa): ");
		scanf("%d", &ano);
		
		A = (14 - mes) /12;
		B = (ano - A);
		C = mes + 12 * A -2;
		D = dia + 31*C/12 + B + B/4 - B/100 + B/400;
		R = (D % 7) + 1;
		//printf("\nvalor de R=%d", R);
		switch (R){
			case 1:{
				printf("\n%d/%d/%d = <DOMINGO>",dia,mes,ano);
				break;
			}
			
			case 2:{
				printf("\n%d/%d/%d = <SEGUNDA-FEIRA>",dia,mes,ano);
				break;
			}
			
			case 3:{
				printf("\n%d/%d/%d = <TERCA-FEIRA>",dia,mes,ano);
				break;
			}
			
			case 4:{
				printf("\n%d/%d/%d = <QUARTA-FEIRA>",dia,mes,ano);
				break;
			}
			
			case 5:{
				printf("\n%d/%d/%d = <QUINTA-FEIRA>",dia,mes,ano);
				break;
			}
			
			case 6:{
				printf("\n%d/%d/%d = <SEXTA-FEIRA>",dia,mes,ano);
				break;
			}
			
			case 7:{
				printf("\n%d/%d/%d = <SABADO>",dia,mes,ano);
				break;
			}
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
#ifdef ex10
/*10 - Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado
     possui uma taxa diferente de imposto sobre o produto (MG 7%; SP 12%; RJ 15%;
     MS 8%). Escreva um programa em que o usuario entre com o valor do produto e o
     estado destino do produto. O programa deve mostrar o preco final do produto
     acrescido do imposto do estado em que ele sera vendido. Se o estado digitado
     nao for valido, mostrar uma mensagem de erro.
*/

main(){
	char estado[2];
	int sair,i;
	do{
		float vlprod, preco;
		
		printf("Digite o valor do produto: ");
		scanf("%f", &vlprod);
		
		printf("Escreva a sigla do estado destino do produto ()Ex: SP - Sao Paulo): ");
		scanf("%s", &estado);
		
		if(estado[0] == 'M' && estado[1] == 'G'){
			preco = vlprod + (vlprod * 0.07);
			printf("\n o valor do produto com imposto em MG sera: R$%.2f!!",preco);
		}
		else
		if(estado[0] == 'S' && estado[1] == 'P'){
			preco = vlprod + (vlprod * 0.12);
			printf("\n o valor do produto com imposto em SP sera: R$%.2f!!",preco);
		}else
		if(estado[0] == 'R' && estado[1] == 'J'){
			preco = vlprod + (vlprod * 0.15);
			printf("\n o valor do produto com imposto em RJ sera: R$%.2f!!",preco);
		}else
		if(estado[0] == 'M' && estado[1] == 'S'){
			preco = vlprod + (vlprod * 0.08);
			printf("\n o valor do produto com imposto em MS sera: R$%.2f!!",preco);
		}
		else{
			printf("\nERRO! Estado nao encontrado!");
		}
		
		printf("\n\nDeseja continuar? ");
	    printf("\n 1 - Sim\n");
	    printf(" 2 - Nao\n");
	    scanf("%d",&sair);
	    if(sair == 1){
	    	system("cls");
		}
	}while(sair==1);
}
#endif
