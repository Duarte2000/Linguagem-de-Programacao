#include <stdio.h>
#include <stdlib.h>
#define ex1

#ifdef ex1
/*1 - Escreva um programa que receba via teclado numeros inteiros positivos.
    Quando o numero digitado for negativo o programa deve parar e calcula a
    media dos valores digitados.*/
main()
{
	int n, i=0, total=0;
	float m;
	do{
		printf("Digite o %d valor inteiro: ",i+1);
		scanf("%d", &n);
		
		if(n > 0){
			i++;
			total += n;
			m = (float)total / (float)i;
		}	
	}while(n > 0);
	
	printf("\n%d / %d = %f\n",total, i, m);
	printf("TOTAL: %d\n",total);
	printf("A media de numeros positivos e': %.2f",m);
}

#endif

#ifdef ex2
/*2 - Escreva um programa para adivinhar um numero entre 1 e 99 que o usuario
    pensou. Digite via teclado os simbolos =,> ou < a cada pergunta. Utilize o
    comando if-else.*/
main(){
	int min = 1, max = 100, n;
	char ler;
	
	do{
		printf("O numero q esta pensado e'\nmaior(>), menor(<) ou igual(=) a %d: ", n=(min+max)/2);
		scanf("%c", &ler);	
		printf("\n");
		if(ler == '>'){
			min = n;
			n=(min+max)/2;
		}else
		if(ler == '<'){
			max = n;
			n=(min+max)/2;
		}
	}while(ler != '=');
	
	printf("O numero pensado foi: %d", n);
}
#endif

#ifdef ex3
/*3 - Resecreva o programa do execicio anterior agora utilizando o comando switch.
    Conte o n. de tentativas e imprima o resultado no video.*/
main(){
	int min = 1, max = 100, n;
	char ler;
	
	do{
		
		printf("O numero q esta pensado e' maior(>), menor(<) ou igual(=) a %d: ", n=(min+max)/2);
		scanf("%c", &ler);	
		printf("\n");
		
		switch (ler){
			case '>' : {
				min=n;
				n=(min+max)/2;
				break;
			}
			case '<' : {
				max=n;
				n=(min+max)/2;
				break;
			}
		}		
	}while(ler != '=');
	
	printf("O numero pensado foi: %d", n);
}
#endif

#ifdef ex4
/*4 - De um modo geral, as ligações telefônicas são cobradas pelas suas durações.
    O sistema registra os instantes em que a ligação foi iniciada e concluída.
    Escreva um programa que recebe os dois instantes dados em horas, minutos e
    segundo e determina o intervalo de tempo (em horas, minutos e segundos) 
    decorrido entre eles.*/
main(){
	int h0, m0, s0, h, m, s, t;
	printf(">> informe o horario do inicio da ligacao:hora, minuto, segundo <<\n");
	printf("informe  a hora> ");
	scanf("%d", &h0);
	
	printf("\ninforme o minuto: ");
	scanf("%d", &m0);
	
	printf("\ninforme o segundo: ");
	scanf("%d", &s0);
	
	printf("\n>> informe o horario do termino da ligacao:hora, minuto, segundo <<\n");
	printf("informe a hora: ");
	scanf("%d", &h);
	
	printf("\ninforme o minuto: ");
	scanf("%d", &m);
	
	printf("\ninforme o segundo: ");
	scanf("%d", &s);
	
	printf("O tempo de ligacao foi: %dh :%dm: %ds",abs(h0-h), abs(m0-m), abs(s0-s)); // abs() nao conta o sinal de negativo
}
#endif

#ifdef ex5
/*5 - Escreva um programa que realize arredondamentos de números utilizando a
    seguinte regra:
    - se a parte fracionaria for menor ou igual a 0,24 o n. e' arredonda para 0
    - se a parte fracionaria for maior ou igual a 0,25 e menor ou igual a 0,74 
      o numero e' arredondado para 0,5
    - se a parte fracionaria for maior ou igual a 0,75 o numero e' arredondado
      para o inteiro imediatamente superior*/
int main(){

    float f,r,n,mod;
    int num,dem;
        
    printf("digite o numerador: ");
    scanf("%d",&num);
        
    printf("digite o denominador: ");
    scanf("%d",&dem);

    r=num/dem;     // EX: 8.5 = 34 / 4
    mod=num%dem;   //     2   = 34 / 4
    f=mod/dem;     // 	  0.5 = 2  / 4
	// pega a parte fracionario da divisao
    printf("o inteiro é %.f, o resto é %.2f e a parte fracionario e %.2f\n",r,mod,f);

    if(f<=0.24){
    	r = r+0.0;
        printf("O numero arrendondado e':%.1f",r);
    }
    else 
	if(f>=0.25 && f<=0.74){
        r =r+0.5;
        printf("O numero arrendondado e':%.2f",r);
    }
    else{
        n=r+1;
        printf("O numero arrendondado e':%.f",n);
    }
}
#endif

#ifdef ex6
/*6 - Um posto está vendendo combustíveis com a seguinte tabela de descontos:
     Álcool
         até 20 litros, desconto de 3% por litro
         acima de 20 litros, desconto de 5% por litro
     Gasolina
          até 20 litros, desconto de 4% por litro
          acima de 20 litros, desconto de 6% por litro
     Escreva um programa que leia o número de litros vendidos e o tipo de
     combustível (codificado da seguinte forma: A-álcool, G-gasolina), calcule e
     imprima o valor a ser pago pelo cliente sabendo-se que o preço do litro da 
     gasolina é R$ 3,88 e o preço do litro do álcool é R$ 3,18.*/
main(){
	int sair;
	char tipo;
	float AL, GL, pgt=0, desc=0;
		
		printf("Digite o tipo de combustivel: A-(alcool), G-(gasolina)");
		scanf("%c", &tipo);
		
		if((tipo == 'A') || (tipo == 'a')){
			printf("\nDigite qtnd de litros de Alcool: ");
			scanf("%f",&AL);
			
			if(AL <= 20){
				desc = (AL * 3.18) * 0.03;
				pgt = (AL * 3.18) - desc;
			}
			else{
				desc = (AL * 3.18) * 0.05;
				pgt = (AL * 3.18) - desc;
			}
			printf("A-alcool %.2fL; Valor a pagar e' R$ %.3f",AL ,pgt);
			
		}
		else{
			printf("\nDigite qtnd de litros de Gasolina: ");
			scanf("%f",&GL);
			
			if(AL <= 20){
				desc = (GL * 3.18) * 0.03;
				pgt = (GL * 3.18) - desc;
			}
			else{
				desc = (GL * 3.18) * 0.05;
				pgt = (GL * 3.18) - desc;
			}
			printf("G-gasolina %.2fL; Valor a pagar e' R$ %.3f",GL ,pgt);
		}		
}
#endif

#ifdef ex7
/*7 - Leia a distancia em Km e a quantidade de litros de gasolina consumidos
    por um carro em um percurso, calcule o consumo em Km/l e escreva uma
    mensagem de acordo com a tabela abaixo:
    CONSUMO (Km/l) MENSAGEM
    menor que 8    Venda o carro!
    entre 8 e 14   Economico!
    maior que 14   Super economico!*/
main(){
	float km, l, m;
	
	printf("digite os km rodados: ");
	scanf("%f", &km);
	
	printf("digite quantdidade de combustivel consumido (l): ");
	scanf("%f", &l);
	
	m = km * l;
	printf("\n\nRESULTADO: consumo por km/l e' %.2f",m);
	if(m<8){
		printf(" <Venda o carro!>");
	}
	else
	if(m>=8 && m<=14){
		printf(" <Economico!>");
	}
	else{
		printf(" <Super economico!>");
	}
}
#endif

#ifdef ex8
/*8 - Escreva um programa que calcule o IMC de uma pessoa e mostre sua classificacao
    conforme tabela abaixo:
       IMC             Classificacao
     < 18,5            Abaixo do Peso
       18,6 - 24,9     Saudavel
       25,0 - 29,9     Peso em excesso
       30,0 - 34,9     Obesidade Grau I
       35,0 - 39,9     Obesidade Grau II(severa)
     > 40,0            Obesidade Grau III(morbida)*/
main(){
	float p, imc, alt;
	
	printf("digite o seu peso: ");
	scanf("%f",&p);
	
	printf("digite o sua altura: ");
	scanf("%f",&alt);
	
	imc = p / (alt*alt);
	
	//system("cls");
	printf("\nRESULTADO: ");
	if(imc <= 18.5){
		printf("<Abaixo do Peso> IMC: %.1f",imc);
	}
	else
	if(imc >= 18.6 && imc <= 24.9){
		printf("<Saudavel> IMC: %.1f",imc);
	}
	else
	if(imc >= 25.0 && imc <= 29.9){
		printf("<Peso em Excesso> IMC: %.1f",imc);
	}
	else
	if(imc >= 30.0 && imc <= 34.9){
		printf("<Obesidade Grau I> IMC: %.1f",imc);
	}
	else
	if(imc >= 35.0 && imc <= 39.9){
		printf("<Obesidade Grau II(severa)> IMC: %.1f",imc);
	}
	else{
		printf("<Obesidade Grau III(morbida)> IMC: %.1f",imc);
	}	
}
#endif
