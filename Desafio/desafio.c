#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*--------------------------------------*/

struct dados
{
    char nome [20];
    char dt_val[11];
    int  qtd;
    int  qtd_min;

};

/*--------------------------------------*/

void listar();
void cadastrar();
void alterar();
void excluir();
int procurar();
int sub_procurar_mes();
int sub_procurar_pletra();
int sub_procurar_nome();
void move_qtd_estoque();
void lista_estoque_min();

/*--------------------------------------*/

int main()
{

        FILE *p1;
        struct dados prod; // declaracao
        struct dados *p;
        int opcao = 0, cont;
        int i;
        int tam;    //n. de bytes da estrutura

        p = &prod;
        tam = sizeof(prod);       
		/*---------------------------------------------------*/ 
	

        /*---------------------------------------------------*/

        while(1)
        {

            system("cls");
            printf("____________________________________________________________________\n\n");
            printf("\t\t\tCONTROLE DE PRODUTOS");
            printf("\n____________________________________________________________________\n\n");
            printf("\n   1- LISTAR");
			printf("\n---------------------------------------------------");
            printf("\n   2- CADASTROS");
			printf("\n---------------------------------------------------");
            printf("\n   3- PROCURAR");
			printf("\n---------------------------------------------------");
            printf("\n   4- LISTA ESTOQUE MINIMO");
			printf("\n---------------------------------------------------");
            printf("\n   5- MOVIMENTA QUANTIDADE DE ESTOQUE DO PRODUTO");
			printf("\n---------------------------------------------------");
            printf("\n   6- ALTERAR");
			printf("\n---------------------------------------------------");
            printf("\n   7- EXCLUIR");
			printf("\n---------------------------------------------------");
            printf("\n   0- SAIR");

            /*---------------------------------------------------*/

            p1 = fopen("contador.txt", "r");
            if(p1 != NULL)
            {
                fscanf(p1,"%d",&cont);
                fclose(p1);
            }

            /*---------------------------------------------------*/
            
        	printf("\n\n___________________________________________________________________\n");
            printf("\nEscolha o numero da opcao que deseja.\n-->");
            scanf("%d", &opcao);
            getchar();

            /*---------------------------------------------------*/
            switch(opcao)
            {
                case 1:
                    listar(p, tam);
                    break;
                case 2:
                    cadastrar(p, tam);
                    break;
                case 3:
                    procurar(p, tam);
                    break;
                case 4:
                    lista_estoque_min(p, tam);
                    break;   
                case 5:
                    move_qtd_estoque(p, tam);
                    break;    
                case 6:
                    alterar(p, tam);
                    break;
                case 7:
                    excluir(p, tam);
                    break;
                case 0:
                    printf("\n\tTHAU! SUMARIAMENTE APROVADO!! \n");
                    exit(0);
                default:
                    printf( "\nEscolha uma opcao valida.\n");
                    system("pause");
            }
            /*---------------------------------------------------*/
        }
}

void cadastrar(struct dados *ps, int tam) //-------------------------------------------------------CADASTRAR
{
    FILE *p, *p1;
    int cont = 0;
    int i;

    /*--------------------------------------*/

    p1 = fopen("contador.txt", "r");
    fscanf(p1,"%d",&cont);
    fclose(p1);

    /*--------------------------------------*/


    p = fopen("arquivaX.txt", "a");
    if(p == NULL)
    {
        printf("\nERRO NA ABERTURA DO ARQUIVO PARA ADICIONAR PRODUTOS.\nRETORNANDO AO MENU INICIAL.");
        return;
    }

    /*--------------------------------------*/
	system("cls");
	printf("____________________________________________________________________\n\n");
    printf("\t\t\tCADASTRAR PRODUTOS");
	printf("\n____________________________________________________________________\n\n");

    printf("Cadastro do produto %d:\n", (cont + 1));
    printf("\n---> Nome do produto (max 20 dig): ");
    gets(ps->nome);

    printf("\n---> Data de validade do produto (DD/MM/AA): ");
    gets(ps->dt_val);

    printf("\n--->Digite a Quantidade do produto: ");
    scanf("%d",&ps->qtd);
    
    printf("\n Digite a Quantidade minima de estoque: ");
    scanf("%d", &ps->qtd_min);

    fwrite(ps,tam,1,p); //INSERE AS INFORMAÇÕES NO ARQUIVO.

    fclose(p);

    /*--------------------------------------*/
    cont++;
    p1 = fopen("contador.txt", "w");
    fprintf(p1,"%d",cont);
    fclose(p1);
    // AUMENTA O NUMERO DE PESSOAS NO CADASTRO
    /*--------------------------------------*/
    system("pause");
}

void listar(struct dados *ps, int tam) //----------------------------------------------------------LISTAR
{
    /*--------------------------------------*/

    FILE *p, *p1;
    FILE *a;
    struct dados prod;
    int i;
    int cont,comp, del = 0;

    /*--------------------------------------*/

    p1 = fopen("contador.txt", "r");
    if(p1 == NULL)
    {
        printf("\n\tERRO EM ABERTURA DE ARQUIVO.\n");
        system("pause");
        return;
    }

    fscanf(p1, "%d", &cont);
    fclose(p1);
    // PEGA O ARQUIVO ABERTO NO BLOCO ACIMA, LÊ A INFORMAÇÃO DADA E GUARDA NO cont.

    /*--------------------------------------*/

    p = fopen("arquivaX.txt", "r");
    if(p == NULL)
    {
        printf("\n\tERRO EM ABERTURA DE ARQUIVO.\n");
        system("pause");
        return;
    }

    /*--------------------------------------*/
    

        system("cls");
        printf("____________________________________________________________________\n\n");
        printf("\t\tREGISTRO COMPLETO DOS PRODUTOS CADASTRADOS:");
        printf("\n____________________________________________________________________\n\n");
        printf("\n\n COD     PRODUTO            QTD           DATA DE VALIDADE\n");
        printf("-----------------------------------------------------------------\n");
        
        for(i = 0; i < cont; i++)
        {
            comp = i * tam;
            fseek(p, comp, 0);
            fread(ps,tam,1,p);

            if(ps->nome[0] != '*') // VERIFICA SE O ARQUIVO ESTÁ APAGADO.
            {                      // SE NÃO ESTIVER, SEGUE PRINTAGEM:
                printf("\n  %-5d   %-18s %-15d %s\n", (i + 1), ps->nome, ps->qtd, ps->dt_val);
                printf("-----------------------------------------------------------------\n");
            }
            else
                del++;
            
        }
        
        printf("\n\n\tREGISTRO TERMINADO. %d PRODUTOS CADASTRADOS E ATIVAS.\n", cont - del);
        printf("___________________________________________________________________\n");

    /*--------------------------------------*/

    fclose(p);
    printf("\n");
    system("pause");

    /*--------------------------------------*/

}

int procurar(struct dados *ps, int tam) //---------------------------------------------------------PROCURAR
{
    FILE *a;
    int opcao = 0;
    char c;
    int i = 0, y;
    int cont;
    a = fopen("contador.txt", "r");
    fscanf(a,"%d",&cont);
    fclose(a);

    /*--------------------------------------*/
	system("cls");
	printf("____________________________________________________________________\n\n");
    printf("\t\t\tPROCURAR PRODUTO");
    printf("\n____________________________________________________________________\n\n");
    
	printf("\n---------------------------------------------------\n");
    printf("1 - POR NOME INTEIRO");
    printf("\n---------------------------------------------------\n");
    printf("2 - PELA PRIMEIRA LETRA DO PRODUTO");
    printf("\n---------------------------------------------------\n");
    printf("3 - POR MES DE VALIDADE");
	printf("\n---------------------------------------------------\n");

    printf("\nESCOLHA UMA OPCAO:\n-->");
    scanf("%d", &opcao);

    switch(opcao)
    {
        case 1:
            y = sub_procurar_nome(ps, tam);
            break;
        case 2:
            y = sub_procurar_pletra(ps, tam);
            // A PROCURA DE LETRA MOSTRA O RESULTADO DENTRO DA FUNÇÃO
            break;
        case 3:
            y = sub_procurar_mes(ps, tam);
            break;

    }

    if(y == -1)
    {
        printf("\nREGISTRO NAO ENCONTRADO...\n");
        system("pause");
        return -1;
    }

    /*--------------------------------------*/

    for(i; i < cont; i++)
        if(y == i)
        {
            if(ps->nome[0] != '*')
            {
            	system("cls");
            	printf("____________________________________________________________________\n\n");
    			printf("\t\t\tPROCURAR PRODUTO");
    			printf("\n____________________________________________________________________\n\n");
                printf("\n--------------------------------------\n");
                printf("\nPRODUTO NUMERO %d:", (y + 1));
                printf("\nNome: %s", ps->nome);
                printf("\nData de Validade: %s", ps->dt_val);
                printf("\nQuantidade: %d", ps->qtd);
                printf("\n--------------------------------------\n");
                system("pause");
                return y;
            }
            else
            {
                return -1;
            }

        }
}

int sub_procurar_mes(struct dados *ps, int tam) //-------------------------------------------------PROCURAR_MES
{
    /*--------------------------------------*/
    FILE *p;
    FILE *a;
    int cont, y, x;
    char mes[3];
    char afirm[2];
    /*--------------------------------------*/

    p = fopen("arquivaX.txt", "r");
    a = fopen("contador.txt", "r");
    fscanf(a,"%d",&cont);
    fclose(a);

    /*--------------------------------------*/
    printf("Informe um mes para pesquisa: (dois digitos)\n");
    scanf("%s", &mes[0]);
    /*--------------------------------------*/

    for(y = 0; y < cont; y++)
    {
        fread(ps,tam,1,p);
        if(mes[0] == ps->dt_val[3] && mes[1] == ps->dt_val[4])
        {
        	 if(ps->nome[0] != '*') // VERIFICA SE O ARQUIVO ESTÁ APAGADO.
            {                      // SE NÃO ESTIVER, SEGUE PRINTAGEM:
	            printf("\n--------------------------------------\n");
	            printf("\nPRODUTO NUMERO %d:", (y + 1));
	            printf("\nNome: %s", ps->nome);
	            printf("\n--------------------------------------\n");
	            printf("ESSE E O PRODUTO QUE PROCURA? (digite 's' pra confirmar ou 'n' pra continuar busca) \n-->");
	            scanf("%s", &afirm[0]);
	            getchar();
	            if(afirm[0] == 's')
	            return y;
            }
        }
    }
    system("pause");
    return -1;

    /*--------------------------------------*/
}

int sub_procurar_pletra(struct dados *ps, int tam) //----------------------------------------------PROCURAR_LETRA
{
    /*--------------------------------------*/
    FILE *p;
    FILE *a;
    int cont, y;
    char letra[2];
    char afirm[2];
    /*--------------------------------------*/

    p = fopen("arquivaX.txt", "r");
    a = fopen("contador.txt", "r");
    fscanf(a,"%d",&cont);
    fclose(a);

    /*--------------------------------------*/
    printf("Informe a letra para pesquisa: ");
    scanf("%s", &letra);
    /*--------------------------------------*/

    for(y = 0; y < cont; y++)
    {
        fread(ps,tam,1,p);
        if(letra[0] == ps->nome[0])
        {
            printf("\n--------------------------------------\n");
            printf("\nPRODUTO NUMERO %d:", (y + 1));
            printf("\nNome: %s", ps->nome);
            printf("\n--------------------------------------\n");
            printf("ESSE E' O PRODUTO QUE PROCURA? (digite 's' pra confirmar ou 'n' pra continuar busca) \n-->");
            scanf("%s", &afirm[0]);
            getchar();
            if(afirm[0] == 's')
                return y;
        }
    }
    system("pause");
    return -1;

    /*--------------------------------------*/
}

int sub_procurar_nome(struct dados *ps, int tam) //------------------------------------------------PROCURAR_NOME
{
    /*--------------------------------------*/
    FILE *p;
    FILE *a;
    int cont, y, x;
    char nome1[20];
    /*--------------------------------------*/

    p = fopen("arquivaX.txt", "r");
    a = fopen("contador.txt", "r");
    fscanf(a,"%d",&cont);
    fclose(a);

    /*--------------------------------------*/
    printf("Informe um nome para pesquisa: ");
    scanf("%s", &nome1);
    getchar();
    /*--------------------------------------*/

    for(y = 0; y < cont; y++)
    {
        fread(ps,tam,1,p);
        for(x = 0; nome1[x] != '\0';x++)
            if(nome1[x] != ps -> nome[x])
                break;

        if(nome1[x] == '\0' && ps -> nome[x] == '\0')
            return y;


    }
    return -1;
}

void lista_estoque_min(struct dados *ps, int tam)//------------------------------------------------LISTAR_ESTOQUE_MIN
{
	FILE *p, *a;
	int cont=0, i, comp, del=0;
	
	p = fopen("arquivaX.txt", "r");
    if(p == NULL)
    {
        printf("\n\tERRO EM ABERTURA DE ARQUIVO. RETORNADO AO MENU PRINCIPAL.\n");
        system("pause");
        return;
    }
    
    a = fopen("contador.txt", "r");
    fscanf(a, "%d", &cont);
    fclose(a);
    
    system("cls");
	printf("_____________________________________________________________________________\n\n");
	printf("\t\tPRODUTOS ABAIXO DO ESTOQUE MINIMO DEFINIDO");
    printf("\n_____________________________________________________________________________\n\n");
    
        for(i = 0; i < cont; i++)
        {
            comp = i * tam;
            fseek(p, comp, 0);
            fread(ps,tam,1,p);

            if(ps->nome[0] != '*') // VERIFICA SE O ARQUIVO ESTÁ APAGADO.
            {                      // SE NÃO ESTIVER, SEGUE PRINTAGEM:
                if(ps->qtd_min > ps->qtd)
            	{
            		printf("\n--------------------------------------");
            		printf("\nESTOQUE MINIMO DEFINIDO: %d", ps->qtd_min);
            		printf("\nNome: %s", ps->nome);
                	printf("\nData de Validade: %s", ps->dt_val);
                	printf("\nQuantidade: %d", ps->qtd);
                	printf("\n--------------------------------------\n");
				}
            }
        }
    fclose(p);
    printf("\n\n");
    system("pause");
}

void move_qtd_estoque(struct dados *ps, int tam) //------------------------------------------------MOVER_QTD_ESTOQUE_PRODUTO
{
	FILE *p, *a;
    int cont=0, i, comp, del=0, pesq;
    
	p = fopen("arquivaX.txt", "r+");
    if(p == NULL)
    {
        printf("\n\tERRO EM ABERTURA DE ARQUIVO. RETORNADO AO MENU PRINCIPAL.\n");
        system("pause");
        return;
    }

    /*--------------------------------------*/
    a = fopen("contador.txt", "r");
    fscanf(a, "%d", &cont);
    fclose(a);

    /*--------------------------------------*/
	system("cls");
	printf("____________________________________________________________________\n\n");
	printf("\tALTERACAO DA QUANTIDADE DO PRODUTO NO ESTOQUE");
    printf("\n____________________________________________________________________\n\n");
	
    printf("\n\n COD     PRODUTO            QTD           DATA DE VALIDADE\n");
    printf("-----------------------------------------------------------------\n");
    
        for(i = 0; i < cont; i++)
        {
            comp = i * tam;
            fseek(p, comp, 0);
            fread(ps,tam,1,p);

            if(ps->nome[0] != '*') // VERIFICA SE O ARQUIVO ESTÁ APAGADO.
            {                      // SE NÃO ESTIVER, SEGUE PRINTAGEM:
                printf("\n  %-5d   %-18s %-15d %s\n", (i + 1), ps->nome, ps->qtd, ps->dt_val);
                printf("-----------------------------------------------------------------\n");
            }
            else
                del++;
        }
        
        printf("\n\n\tREGISTRO TERMINADO. %d PRODUTOS CADASTRADOS E ATIVAS.\n", cont - del);
        printf("___________________________________________________________________\n");

        /*--------------------------------------*/
	
        printf("\nDIGITE O CODIGO DO PRODUTO PARA MUDAR A QUANTIDADE (entrada/saida): ");
        scanf("%d", &pesq);
        if(pesq != 0)
        {
            for(i = 0; i < cont; i++)
                if((pesq - 1) == i)
                {
                    if(ps->nome[0] != '*')
                    {
                    	system("cls");
                    	printf("____________________________________________________________________\n\n");
						printf("\tALTERACAO DA QUANTIDADE DO PRODUTO NO ESTOQUE:");
    					printf("\n____________________________________________________________________\n\n");
                        comp = i * tam;
                        fseek(p, comp, 0);
                        fread(ps,tam,1,p);
                        printf("\n--------------------------------------------------------\n");
                        printf("\n COD -   NOME -       QTD\n");
                        printf("\n  %-6d   %-11s %d\n", (i + 1), ps->nome, ps->qtd, ps->dt_val);
                        printf("\n____________________________________________________________________\n\n");
                        printf("--->Digite a nova quantidade do produto no estoque: ");
    					scanf("%d",&ps->qtd);
    					
    					fseek(p, comp, 0);
    					fwrite(ps, tam,1,p);
                        printf("\n--------------------------------------\n");
                        system("pause");
                    }
                    else
                    {
                        printf("\nPRODUTO APAGADO.\n");
                        system("pause");
                    }

                }
        }
    fclose(p); 
}

void alterar(struct dados *ps, int tam) //---------------------------------------------------------ALTERAR
{
    system("cls");
    printf("____________________________________________________________________\n\n");
    printf("\t\t\tALTERACAO DE PRODUTO");
    printf("\n____________________________________________________________________\n\n");
    FILE *p;
    int n_reg;
    int n_bytes;

    printf("\nPRIMEIRO, INFORME O PRODUTO A SER ALTERADO:\n");
    n_reg = procurar(ps, tam);     // CHAMAR A FUNCAO PROCURAR
    if(n_reg == -1)
    {
        printf("\nPRODUTO NAO ENCONTRADO PARA ALTERACAO\n");
        system("pause");
        return;
    }

    printf("\nENCONTRADO PRODUTO N: %d\n",(n_reg + 1));
    n_bytes = tam * n_reg;

    p = fopen("arquivaX.txt", "r+"); // Abre um arquivo texto para leitura e gravação. O arquivo deve existir e pode ser modificado.

    fseek(p,n_bytes,0);            //posiciona o ponteiro do arquivo no registro a ser alterado
    fread(ps, tam, 1, p );         //le registro do arquivo
    system("cls");
    printf("\nALTERAR INFORMACOES:\n-----------------------------------------------------------------------------\n");
    printf("\n---> Nome do produto (max 20 dig): ");
    scanf("%s", &ps->nome);

    printf("\n---> Data de validade (DD/MM/AA): ");
    scanf("%s", &ps->dt_val);
    
    printf("\n--->Digite a Quantidade de produto: ");
    scanf("%d",&ps->qtd);
    
    printf("\n Digite a Quantidade minima de estoque: ");
    scanf("%d", &ps->qtd_min);

    printf("\n-----------------------------------------------------------------------------\n");

    fseek(p,n_bytes,0);            //posiciona o ponteiro do arquivo no inicio do regisro a ser alterado
    fwrite(ps, tam,1,p);           //escreve o registro no arquivo

    fclose(p);
    system("pause");
    return;
}

void excluir(struct dados *ps, int tam) //---------------------------------------------------------EXCLUIR
{
    system("cls");
    printf("____________________________________________________________________\n\n");
    printf("\t\t\tDELETAR REGISTRO");
    printf("\n____________________________________________________________________\n\n");
    char nom = '*';
    FILE *p, *a; //DELET A
    p = fopen("arquivaX.txt", "r+");
    int n_reg, cont = 0;
    int n_bytes;
    //--------------------------------------
    a = fopen("contador.txt", "r");
    fscanf(a,"%d",&cont);
    fclose(a);

    printf("\nPRIMEIRO, INFORME O PRODUTO A SER DELETADO:\n");
    n_reg = procurar(ps, tam); // CHAMAR A FUNCAO PROCURAR
    if(n_reg == -1)
    {
        printf("\nPRODUTO NAO ENCONTRADO PARA DELETAR\n");
        system("pause");
        return;
    }

    // PEGA O USUARIO, CALCULA A POSICAO E USA O FSEEK

    printf("\nENCONTRADO PRODUTO N: %d\n",(n_reg + 1));
    n_bytes = tam * n_reg;

    fseek(p, n_bytes, 0);
    fread(ps, tam, 1, p);

    printf("REGISTRO PARA APAGAR: %s.  <--- DELETADO!\n\n",ps -> nome);
    ps->nome[0] = '*';

    // REGISTRA O USUARIO COM UM ASTERISCO PARA QUE ELE NAO SEJA CONTADO NA CONSULTA EX: *BANANA
    // TODO NOME Q ESTIVER COM *, NÃO VAI SER EXIBIDO

    system("pause");

    fseek(p,n_bytes,0);
    fwrite(ps,tam,1,p);

    fclose(p);

}

