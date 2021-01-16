#include <stdio.h>
#include <stdlib.h>
#define ex8

#ifdef ex1
/*1 - Escreva um programa para receber 5 nomes, com até 7 caracteres, via teclado
    e imprima-os no video no seguinte formato:

            10        20        30        40        50
    12345678901234567890123456789012345678901234567890
      nome1                                   nome5
                nome2               nome4
                          nome3*/
int main()
{
    char nome[5][7];
    int i, j, lim=0, sair;
    do{

    for(i=0; i<5; i++){ // quantidade de nomes
        do{
        	printf("Digite o %d nome: ", i+1);
        	scanf("%s",nome[i]);
        	
            for(j=0; nome[i][j]; j++){ // conta os caracteres do nome
                lim++;
            }
            
            if(lim>7){
                printf("Digite um nome de ate 7 caracteres!!\n");
            }
        }while(lim>7);
    }
    	printf("\n        10        20        30        40        50\n");
    	printf("12345678901234567890123456789012345678901234567890\n");
    	printf("  %-40s%s\n",nome[0],nome[4]);
    	printf("            %-20s%s\n",nome[1],nome[3]);
    	printf("%23s\n",nome[2]);
	
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
/*2 - Escreva um programa para receber 3 strings de ate 10 caracteres cada via
    teclado e imprima-as no video no seguinte formato:
    (utilize vetores multidimensionais)

            10        20        30        40        50        60
    123456789012345678901234567890123456789012345678901234567890
        string1             string2             string3*/
main(){
	char strA[10],strB[10], strC[10],i,sair;

	do{
		printf("digite a 1 palavra: ");
		scanf("%s", &strA);
		
		printf("digite a 2 palavra: ");
		scanf("%s", &strB);
		
		printf("digite a 3 palavra: ");
		scanf("%s", &strC);
		
		printf("\n        10        20        30        40        50\n");
	    printf("12345678901234567890123456789012345678901234567890\n");
	    printf("    %-20s", strA);
	    printf("%-20s", strB);
	    printf("%s", strC);
	    
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
/*3 - Receba 2 string de ate 10 caracteres via teclado, compare-as mostrando como
    resultado se são IGUAIS ou DIFERENTES.*/
main(){
 char strA [10],strB [10], i=0, sair;
 
	do{
		printf("digite a 1 palavra: ");
		scanf("%s", &strA);
		
		printf("digite a 2 palavra: ");
		scanf("%s", &strB);
		
		while(strA[i] == strB[i] && strA[i]!= '\0' && strB[i]!= '\0')
        {
            i++;
        }
        
        if(strA[i] == '\0' && strB[i] == '\0')
        {
        	printf("As palavras sao IGUAIS!\n");
		}else{
			printf("As palavras sao DIFERENTE!\n");
		}
		
		printf("\n\nDeseja continuar? ");
    	printf("\n 1 - Sim");
    	printf("\n 2 - Nao\n/> ");
    	scanf("%d",&sair);
    	
    	if(sair == 1){
	    	system("cls");
		}
	}while(sair == 1);			
}
#endif

#ifdef ex4
/*4 - Leia uma string (3 caracteres) via teclado que pode assumir os valores seg, 
    ter, qua, qui, sex, sab, dom, e imprima as seguintes mensagens, respectivamente:
    segunda-feira, terca-feira, quarta-feira, quinta-feira, sexta-feira, sabado e
    domingo. Utilize o comando switch - case.*/
main(){
	char dsem [4],sair;
	int op;
	
	do{
	
		printf("escreva o dia da semana: Ex: 'seg = SEGUNDA':  ");
		scanf("%s", &dsem);

		if(dsem[0]=='s' && dsem[1]=='e' && dsem[2]=='g')
		{
			 op = 1;
		}else
		if(dsem[0]=='t' && dsem[1]=='e' && dsem[2]=='r')
		{
			 op = 2;
		}else
		if(dsem[0]=='q' && dsem[1]=='u' && dsem[2]=='a')
		{
			 op = 3;
		}else
		if(dsem[0]=='q' && dsem[1]=='u' && dsem[2]=='i')
		{
			 op = 4;
		}else
		if(dsem[0]=='s' && dsem[1]=='e' && dsem[2]=='x')
		{
			op = 5;
		}else
		if(dsem[0]=='s' && dsem[1]=='a' && dsem[2]=='b')
		{
			op = 6;
		}else{
			op = 7;
		}
		
		switch (op){
			case 1:{
				printf("\nSEGUNDA-FEIRA");
				break;
			}
			case 2:{
				printf("\nTERCA-FEIRA");
				break;
			}
			case 3:{
				printf("\nQUARTA-FEIRA");
				break;
			}
			case 4:{
				printf("\nQUINTA-FEIRA");
				break;
			}
			case 5:{
				printf("\nSEXTA-FEIRA");
				break;
			}
			case 6:{
				printf("\nSABADO");
				break;
			}
			case 7:{
				printf("\nDOMINGO");
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

#ifdef ex5
/*5 - Receba via teclado uma cadeia de caracteres (10) e converta todos os caracteres 
    para letras maiusculas. */
main(){
	char str[10],i,sair;
	
	do{
		printf("digite uma palavra com 10 carateres em MAIUSCULO: ");
		scanf("%s", &str);
		
		for(i=0; str[i]!='\0'; i++)
		{
			if(str[i]>= 65 || str[i]<=90) /*tabela ASCII das letras MAIUSCULAS entre (65 = A) à (90 = Z)*/
			{
				str[i]+= 32;
			}
		}
		
		printf("palavra com letras minusculas: %s",str);
		
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
/*6 - Receba via teclado uma cadeia de caracteres (10) e converta todos os caracteres 
    para letras minusculas.*/
main(){
	char str[10],i,sair;
	do{
		printf("digite uma palavra com 10 carateres em minusculo: ");
		scanf("%s", &str);
		
		for(i=0; str[i]!='\0'; i++)
		{
			if(str[i]>= 97 || str[i]<=122) /*tabela ASCII das letras minusculas entre (97 = a) à (122 = z)*/
			{
				str[i]-= 32;
			}
		}
		
		printf("palavra com letras minusculas: %s",str);
		
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
/*7 - Faca um programa que leia uma palavra (maximo de 50 letras) e some 1 no valor 
    ASCII de cada caractere da palavra. Na sua funcao main(), imprima a string 
    resultante.*/
main(){
	char str[50], sair,i;
	
	do{
		printf("Digite uma palavra qualquer: ");
		scanf("%s", &str);
		
		for(i=0; str[i]!='\0'; i++)
		{
			str[i]+= 1;
		}
		
		printf("resultado somando 1 no caracter: %s",str);
		
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
/*8 - Escreva um programa que calcula o comprimento de uma string recebida via 
    teclado.*/
main(){
	char str[50], sair,i=0;
	
	do{
		printf("Escreva uma palavra: ");
		scanf("%s", str);
		
		while(str[i]!='\0')
		{
			i++;
		}
		
		printf("\nA quantidade de caracter digitado e': %d",i);
		
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
