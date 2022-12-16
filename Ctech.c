//BIBLIOTECAS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <time.h>
#include <locale.h>
#include <Windows.h>
#include <unistd.h>
#define SIZE 200


//constantes com os nomes e codigos das cores padrao
#define PRETO 0
#define AZUL 1
#define VERDE 2
#define CIANO 3
#define VERMELHO 4
#define MAGENTA 5
#define MARROM 6
#define CINZACLARO 7
#define CINZAESCURO 8
#define AZULCLARO 9
#define VERDECLARO 10
#define CIANOCLARO 11
#define VERMELHOCLARO 12
#define MAGENTACLARO 13
#define AMARELO 14
#define BRANCO 15
#define DBF rewind(stdin)

/*/

									######################
									###### LEGENDA #######
									######################

DOUBLE = 			VARIAVEL PARA NUMEROS REAL
INT = 	 			VARIAVEL PARA INTEIRO
CHAR = 				VARIAVEL PARA CARACTERE
STRUCT = 			VARIAVEIS
SCANF =  			LEITURA DE DADOS BASICOS - SEM ESPAÇAMENTO
PRINTF = 			MENSAGEM NA TELA
FPRINTF = 			PERMITE ESCRITA DE DADOS NO ARQUIVO;
FGETS =  			LEITURA DE TEXTOS ATÉ QUEBRA DE LINHA;
IF = 	 			SE
ELSE =   			SENÃO
WHILE = 			SE FOR VERDADEIRO EXECUTA E VOLTA, SE FOR FALSO PULA FORA;
SWITCH = 			TESTA IGUALDADE - DECISAO
GOTO =   			IR PARA - POSICIONAMENTO DO CURSOR
FFLUSH (STDIN) = 	LIMPAR O BUFFER DE SAIDA DE DADOS ( LIMPAR MEMORIA )
BREAK = 			PARAR DE EXECUTAR A REPETIÇÃO
CASE = 				ESTRUTURA DE ESCOLHA
SYSTEM ("CLS") = 	LIMPAR TELA
SYSTEM ("PAUSE") = 	PAUSAR A TELA
STRCSPN = 			RECEPTOR DE 2 STRINGS COMO ENTRADA DE DADOS
// = 				COMENTAR NA LINHA DE CODIGO;
SLEEP () = 			LOOPING NA TELA
FILE * = 			ARQUIVO
FCLOSE = 			FECHAR O ARQUIVO;
FOPEN =				ABRIR O ARQUIVO;
W = 				SE NAO HOUVER ARQUIVO ELE CRIA, CASO EXISTA, ELE SUBISTITUI O DIGITADO (ESCRITA)
AB+ = 				SE NAO HOUVER ARQUIVO ELE CRIA, CASO EXISTA, ELE PULA LINHA E ACRESCENTA (ESCRITA E LEITURA)
.TXT = 				EXTENSAO DO ARQUIVO QUE VAI SER SALVO (BLOCO DE NOTAS)
.XLSX				EXTENSAO DO ARQUIVO QUE VAI SER SALVO (EXCEL)
VOID =

/*/


// GLOBAIS


// CADASTRO DE ORDEM DE SERVI�O
int codigoOS[SIZE];
char Marca_OS[SIZE][12];
char Modelo_OS[SIZE] [10];
char Numero_de_serie_OS[SIZE][10];
char Defeito_Relatado_OS[SIZE][200];
char CPF_CNPJ_OS[SIZE][50];
char Nome_Completo_OS[SIZE][100];
char Data_OS[SIZE] [10];
char Telefone_OS[SIZE][50];
char Estado_OS[SIZE][10];
char Cidade_OS[SIZE][10];
char hora_OS[SIZE][10];
char Servicos_Executado_OS[SIZE][200];
char Tecnico_Responsavel_OS[SIZE][100];

// CADASTRO DE CLIENTES
int C_Cliente[SIZE];
char nome_Cliente[SIZE][100];
char endereco_Cliente [SIZE][200];
char telefone_Cliente[SIZE][50];
char estado_Cliente[SIZE] [50];
char cpf_Cliente[SIZE][50];
char cep_Cliente[SIZE][50];
int codigo_Cliente=0;
char data_nasc_Cliente [SIZE][20];
char cidade_Cliente [SIZE][20];

// CADASTRO DE FUNCIONARIO

char nome_Funcionario[SIZE][100];
char endereco_Funcionario[SIZE][100];
char telefone_Funcionario[SIZE][50];
char rg_Funcionario[SIZE][50];
char cpf_Funcionario[SIZE][50];
char funcao_Funcionario[SIZE][50];
char data_admissao_Funcionario[SIZE][20];
int codigo_Funcionario[SIZE];
char data_nasc_Funcionario[SIZE][20];
char estado_Funcionario[SIZE][50];
char cidade_Funcionario[SIZE][20];
char cep_Funcionario[SIZE][50];

// CADASTRO DE ORCAMENTO

int codigoOrcamento[SIZE];
char Data_Orcamento [SIZE][20];
char Marca_Orcamento[SIZE][50];
char Modelo_Orcamento [SIZE][50];
char Numero_de_serie_Orcamento[SIZE] [20];
char Defeito_Relatado_Orcamento[SIZE] [100];
char Possui_arranhoes_Orcamento[SIZE] [10];
char Possui_Bateria_Orcamento [SIZE][10];
char Possui_fonte_Orcamento [SIZE][10];
char nome_do_cliente_Orcamento[SIZE][100];
char telefone_Orcamento[SIZE];
int CPF_CNPJ_Orcamento[SIZE];

// SERVI�OS

double Formatacao[SIZE][10];
double Reparo_Placa_Mae[SIZE][10];
double Troca_de_Tela[SIZE][10];
double Remocao_de_Virus[SIZE][10];
double Troca_de_Teclado[SIZE][10];
double Backup[SIZE][10];
double Upgrade[SIZE][10];
double Deslocamento[SIZE][10];
double preco[SIZE][10];

//RECEITAS
int C_Receita[SIZE];
double Servicos[SIZE][10];
double Outros[SIZE][10];

//DESPESAS

int C_Despesas[SIZE];
double Conta_agua[SIZE][10];
double Conta_luz[SIZE][10];
double Conta_internet[SIZE][10];
double Conta_aluguel[SIZE][10];
double pgto_funcionario[SIZE][10];
double Conta_extras[SIZE][10];
double total_despesas[SIZE][10];
char data_despesa[SIZE];
int total[SIZE];
char data_receita[SIZE][50];

//ESTRUTURA


struct Servicos
{

    char C_Servicos[10];
    double Formatacao[10];
    double Reparo_Placa_Mae[10];
    double Troca_de_Tela[10];
    double Remocao_de_Virus[10];
    double Troca_de_Teclado[10];
    double Backup[10];
    double Upgrade[10];
    double Deslocamento[10];
    double preco[10];
    char nome_do_cliente[50];

};

struct incluir_Orcamento
{

    char C_Orcamento[10];
    float codigoOrcamento;
    char Data_Orcamento [20];
    char Marca_Orcamento[50];
    char Modelo_Orcamento [50];
    char Numero_de_serie_Orcamento [20];
    char Defeito_Relatado_Orcamento [200];
    char Possui_arranhoes_Orcamento [10];
    char Possui_Bateria_Orcamento [10];
    char Possui_fonte_Orcamento [10];
    char nome_do_cliente_Orcamento[100];
    char telefone_Orcamento[20];
    char CPF_CNPJ_Orcamento[50];

};

struct incluirOS
{

    char C_OS[10];
    char codigoOS[100];
    char Marca_OS[12];
    char Modelo_OS [10];
    char Numero_de_serie_OS [10];
    char Defeito_Relatado_OS [200];
    char CPF_CNPJ_OS[20];
    char Nome_Completo_OS[100];
    char Data_OS [10];
    char Telefone_OS[20];
    char Estado_OS[2];
    char Cidade_OS[10];
    char hora_OS[10];
    char Servicos_Executado_OS[200];
    char Tecnico_Responsavel_OS[100];
    float valor_OS;
};

struct incluir_Cliente
{

    int C_Cliente;
    char nome_Cliente[100];
    char endereco_Cliente[200];
    char telefone_Cliente[50];
    char estado_Cliente[50];
    char cpf_Cliente[14];
    char cep_Cliente[14];
    int codigo_Cliente;
    char data_nasc_Cliente[20];
    char cidade_Cliente[20];

};

struct incluir_funcionarios
{

    int C_Funcionarios[SIZE];
    char nome_Funcionario [SIZE][100];
    char endereco_Funcionario [SIZE][200];
    char telefone_Funcionario[SIZE] [50];
    char rg_Funcionario[SIZE][12];
    char cpf_Funcionario [SIZE][14];
    char funcao_Funcionario[SIZE][50];
    char data_admissao_Funcionario[SIZE][20];
    int codigo_Funcionario[SIZE];
    char data_nasc_Funcionario[SIZE][20];
    char estado_Funcionario[SIZE][50];
    char cidade_Funcionario[SIZE][20];
    char cep_Funcionario[SIZE][10];
};

struct Receita
{


    int C_Receita[SIZE];
    double Servicos[SIZE];
    double Outros[SIZE];
    double total_receitas[SIZE];


};

struct Despesas
{

    char C_Despesas[SIZE][10];
    double Conta_agua[SIZE];
    double Conta_luz[SIZE];
    double Conta_internet[SIZE];
    double Conta_aluguel[SIZE];
    double pgto_funcionario[SIZE];
    double Conta_extras[SIZE];
    double total_despesas[SIZE];
    char data_despesa[SIZE];

};

struct RelatorioFinanceiro
{

    int C_Despesas;
    double Conta_agua;
    double Conta_luz;
    double Conta_internet;
    double Conta_aluguel;
    double pgto_funcionario;
    double Conta_extras;
    double total_despesas;
    int C_Receita;
    double Servicos;
    double Outros;
    char total[1000];
    char data_despesa;

};

void mudacor(int corTexto, int corFundo)
{
    HANDLE tela;
    tela = GetStdHandle(STD_OUTPUT_HANDLE);
    int novasCores;
    novasCores = corFundo;
    novasCores = _rotl(novasCores,4) | corTexto;
    SetConsoleTextAttribute(tela, novasCores);
}

//MARGENS
void gotoxy( int x, int y );
void bordas();

//TELA DE LOGIN
void telaLogin();
void telaLogin2();

//MENU
void menuGeral();
void menuGerente();
void menuFinanceiro();
void menuServicos();
void despesas();
void menuFuncionario();
void Receita();

//MENU CADASTRO
void menuCliente();
void excluirCliente();
void Receita();
//CADASTROS
void incluirCliente();
void incluirfuncionarios();
void incluirServicos();
void Cadastrar_OS();
void incluir_Orcamento();
void editarfuncionario();
void excluirfuncionario();

//EDITAR CLIENTES

void editarCliente();
void pesquisa();

//CONSULTAS
void consultaServicos();
void consultaOS();
void consultaFuncionario();
void consultaOrcamento();


//CATALAGO
void catalogoServico();

//RELATORIO
void relatorio_de_OS();
void relatorio_de_Servicos();
void relatorio_Financeiro();
void menuFinanceiro();

//SAIR
void sair();

int main ()
{
    system("mode con:cols=80 lines=25");
    telaLogin();
    telaLogin2();
    catalogoServico();
    menuServicos();
    system("title CTECH - Sistema de Manuten��oo em Notebooks");

//FUNCAO MENU

    menuGeral();

    return 0;
}

void gotoxy( int x, int y )
{
    printf("%c[%d;%df", 0x1B,y,x );
}

void bordas ()
{
    for (int x =3; x <79; x++ )
    {
        gotoxy (x,2);       // POSICIONAR COLUNA E LINHA
        printf ("%c",196); //BORDA HORIZONTAL SUPERIOR
        gotoxy (x,24);      // POSICIONAR COLUNA E LINHA
        printf ("%c",196); // BORDA HORIZONTAL INFERIOR

    }

    for (int y =3; y <24; y++ )
    {
        gotoxy (2,2);						// POSICIONAR COLUNA E LINHA
        printf ("%c",218);					 //CANTO SUPERIOR ESQUERDO
        gotoxy (79,2);						// POSICIONAR COLUNA E LINHA
        printf ("%c",191); 					//CANTO SUPERIOR DIREITO
        gotoxy (2,y);						// POSICIONAR COLUNA E LINHA
        printf ("%c", 179);					 //BORDA VERTICAL DO LADO DIREITO
        gotoxy (79,y);						// POSICIONAR COLUNA E LINHA
        printf ("%c",179);					 //BORDA VERTICAL DO LADO ESQUERDO
        gotoxy (2,24);						// POSICIONAR COLUNA E LINHA
        printf ("%c",192);					 //CANTO INFERIOR ESQUERDO
        gotoxy (79,24);						// POSICIONAR COLUNA E LINHA
        printf ("%c",217); 					//CANTO INFERIOR DIREITO

    }
}

void telaLogin()
{
    struct Tela_Login_Principal;

    int ch;
    int i = 0;
    char login [20] = "ctech";					// LOGIN DO USUARIO
    char senha [20] = "123";	   				    // SENHA DO USUARIO
    char login10 [20] = "admin";					// LOGIN DO USUARIO
    char senha10 [20] = "admin";
    char login1[20] = {0};
    char senha1[20] = {0};
    system ("cls"); 						        // LIMPAR TELA
    system ("color 0F");						    // ALTERAR A COR DA TELA PRETA COM VERDE
    bordas ();								        // APLICANDO BORDA NO MENU LOGIN PRINCIPAL
    gotoxy (25,3);							        // POSICIONAR COLUNA E LINHA
    mudacor (BRANCO,AZUL);                          // ALTERAR COR DA LINHA
    printf ("               CTECH                ");// NOME DA EMPRESA
    gotoxy (25,4);									// POSICIONAR COLUNA E LINHA
    printf ("     Tecnologia personalizada       ");// SLOGAN
    gotoxy (34,8);							        // POSICIONAR COLUNA E LINHA
    mudacor(BRANCO,AZUL);                           // ALTERAR COR DA LINHA
    printf (" TELA DE LOGIN ");			            // CABECALHO
    mudacor(BRANCO,PRETO);                          // ALTERAR COR DA LINHA
    gotoxy (25,13);							        // POSICIONAR COLUNA E LINHA
    printf ("DIGITE O USUARIO: ");			        // MENSAGEM FIXA
    gotoxy (25,14);							        // POSICIONAR COLUNA E LINHA
    printf ("DIGITE A SENHA..:  ");			        // MENSAGEM FIXA
    gotoxy (45,13);							        // POSICIONAR COLUNA E LINHA
    scanf ("%s",login1);                            // LEITURA DO LOGIN
    fflush (stdin);                                 // LIMPAR BUFFER DO TECLADO
    gotoxy (45,14);                                 // POSICIONAR COLUNA E LINHA


    while (ch !=13)
    {
        ch = getch();
        if (ch == 13)
            break ;
        fflush (stdin);
        if (ch == 8)
        {
            if(i==0)
                continue;
            --i;

            for(int a=0; a<i; a++)
                printf("*");
            continue;
        }
        printf("*");
        senha1[i] = ch;
        i++;
    }

    if((strcmp(login, login1)== 0 && strcmp(senha, senha1)== 0)) // VALIDACAO DO LOGIN E SENHA
    {
        mudacor(BRANCO,VERDE);					                // ALTERAR COR DA TELA VERDE COM BRANCO
        gotoxy(25,19);						                    // POSICIONAR COLUNA E LINHA
        printf(" LOGADO COMO FUNCIONARIO !!!");             	// MENSAGEM NA TELA
        sleep (1);							                    // LOOPING DE 1 SEGUNDO
        mudacor(BRANCO,PRETO);                                  // ALTERAR COR DA LINHA
        menuGeral();						                    // DIRECIONAR AO MENU PRINCIPAL

    }
    else if ((strcmp(login10, login1)== 0 && strcmp(senha10, senha1)== 0))  // CASO CONTRARIO
    {
        mudacor(BRANCO,VERDE);					                // ALTERAR COR DA TELA VERDE COM BRANCO
        gotoxy(25,19);						                    // POSICIONAR COLUNA E LINHA
        printf(" LOGADO COMO GERENTE !!!");
        sleep (1);							                    // LOOPING DE 1 SEGUNDO
        mudacor(BRANCO,PRETO);                                  // ALTERAR COR DA LINHA
        menuGerente();
    }


    else
    {
        mudacor(BRANCO,VERMELHO);
        gotoxy (20,19);							                    // POSICIONAR COLUNA E LINHA
        printf("LOGIN E/OU SENHA INVALIDOS, TENTE NOVAMENTE!");		// MENSAGEM DE FALHA NA AUTENTICACAO
        sleep(1);								                    // LOOPING DE 1 SEGUNDO
        mudacor(BRANCO,PRETO);                                      // ALTERAR COR DA LINHA
        telaLogin();							                    // DIRECIONAR A TELA DE LOGIN NOVAMENTE

    }
}

void telaLogin2()
{
    struct Tela_Login_Gerente;

    int ch2;
    int i2 = 0;
    char loginUser[20] = "admin"; 		                         // LOGIN DO GERENTE
    char login2[20] = {0};
    char senhaUser[20] = "admin";				                 // SENHA DO GERENTE
    char senha2[20] = {0};
    system ("cls");                                             // LIMPAR TELA
    system ("color 0F");						    // ALTERAR A COR DA TELA PRETA COM VERDE
    bordas ();								                    //APLICANDO BORDA NO MENU LOGIN GERENTE
    mudacor(BRANCO,AZUL);                                       // ALTERAR COR DA LINHA
    gotoxy (25,3);							                    // POSICIONAR COLUNA E LINHA
    printf ("               CTECH                ");            // NOME DA EMPRESA
    gotoxy (25,4);									            // POSICIONAR COLUNA E LINHA
    printf ("     Tecnologia personalizada       ");            // SLOGAN
    gotoxy (33,8);                                              // ALTERAR COR DA LINHA
    mudacor(BRANCO,AZUL);							            // POSICIONAR COLUNA E LINHA
    printf ("  TELA DE LOGIN   ");			                    // CABECALHO
    gotoxy(33,9);                                               // POSICIONAR COLUNA E LINHA
    mudacor(VERMELHO,AZUL);                                     // ALTERAR COR DA LINHA
    printf("  ACESSO GERENTE  ");                               // TITULO
    mudacor(BRANCO,PRETO);                                      // ALTERAR COR DA LINHA
    gotoxy (25,13);							                    // POSICIONAR COLUNA E LINHA
    printf ("DIGITE O USUARIO: ");			                    // MENSAGEM FIXA
    gotoxy (25,14);							                    // POSICIONAR COLUNA E LINHA
    printf ("DIGITE A SENHA..: ");			                    // MENSAGEM FIXA
    gotoxy (45,13);							                    // POSICIONAR COLUNA E LINHA
    scanf ("%s",login2);                                        // LEITURA DO LOGIN
    fflush (stdin);							                    // LIMPAR BUFFEN DE TECLADO
    gotoxy (45,14);                                             // POSICIONAR COLUNA E LINHA
    while (ch2!=13)
    {
        ch2 = getch();
        if (ch2 == 13)
            break ;
        if (ch2 == 8)
        {
            if(i2 == 0) continue;
            --i2;

            for(int a = 0; a < i2; a++)
                printf("*");
            continue;
        }
        printf("*");
        senha2[i2] = ch2;
        i2++;
    }
    if(strcmp(loginUser,login2) == 0 && strcmp(senhaUser,senha2)== 0) // VALIDACAO DO LOGIN E SENHA
    {
        mudacor(BRANCO,VERDE);					                    // ALTERAR COR DA TELA VERDE COM BRANCO
        gotoxy(20,19);						                        // POSICIONAR COLUNA E LINHA
        printf("LOGADO COM SUCESSO !!!POR FAVOR, AGUARDE...");	    // MENSAGEM NA TELA
        sleep (1);							                        // LOOPING NO SISTEMA DE 1 SEGUNDO
        mudacor(BRANCO,PRETO);					                    // ALTERAR COR DA TELA PRETO COM AZUL
        menuGerente();						                        // APOS LOGAR, DIRECIONANDO AO MENU GERENTE
    }
    else									                        // CASO CONTRARIO
    {
        mudacor(BRANCO,VERMELHO);						                // ALTERAR COR DA TELA PARA VERMELHO
        gotoxy (21,20);							                        // POSICIONAR COLUNA E LINHA
        printf("LOGIN E SENHA INVALIDOS, TENTE NOVAMENTE!");	        // MENSAGEM DE ERRO NA AUTENTICACAO
        sleep(1);								                        // LOOPING NO SISTEMA DE 1 SEGUNDO
        mudacor(BRANCO,PRETO);						                    // ALTERAR COR DA TELA PARA PRETO COM AZUL
        menuGeral();							                        // DIRECIONANDO PARA VOLTAR AO MENU PRINCIPAL
    }

}

void menuGeral()
{
    system("color 0F");						// ALTERAR A COR DA TELA PARA AZUL E BRANCO
    system ("cls");							// LIMPAR TELA
    bordas ();								// APLICANDO BORDAS NO MENU PRINCIPAL
    char opcao2;                            //VARIAVEL
    mudacor(BRANCO,AZUL);                   // MUDAR COR DA LINHA
    gotoxy (32,3);							// POSICIONAR COLUNA E LINHA
    printf ("MENU PRINCIPAL");	        	// MENSAGEM FIXA
    mudacor(BRANCO,AZUL);                   // MUDAR COR DA LINHA
    gotoxy (29,6);							// POSICIONAR COLUNA E LINHA
    printf ("ESCOLHA A OPCAO ABAIXO:");		// MENSAGEM FIXA
    mudacor(BRANCO,PRETO);                  // MUDAR COR DA LINHA
    gotoxy (32,10);							// POSICIONAR COLUNA E LINHA
    printf ("[1] MENU CLIENTE");			// MENSAGEM FIXA
    gotoxy (32,11);							// POSICIONAR COLUNA E LINHA
    printf ("[2] MENU GERENTE");			// MENSAGEM FIXA
    gotoxy (32,12);							// POSICIONAR COLUNA E LINHA
    printf ("[3] MENU SERVICOS");		    // MENSAGEM FIXA
    gotoxy (32,14);							// POSICIONAR COLUNA E LINHA
    printf ("[0] SAIR DO SISTEMA");		    // MENSAGEM FIXA
    gotoxy (53,6);							// POSICIONAR COLUNA E LINHA
    mudacor(PRETO,PRETO);                   // MUDAR COR DA LINHA
    opcao2 = getche();						// LER COMO CARACTERE E CONVERTE PARA INTEIRO
    switch (opcao2)							// ESCOLHA DE DECISAO
    {
    case '1':								// SE APERTAR A OPCAO 1
        menuCliente();						// DIRECIONANDO PARA MENU CLIENTE
        fflush(stdin);						// LIMPAR O BUFFEN DO TECLADO
        break;								// PARAR

    case '2':								// SE APERTAR A OPCAO 2
        telaLogin2();						// DIRECIONANDO PARA TELA DE LOGIN DO GERENTE
        fflush(stdin);						// LIMPAR O BUFFEN DO TECLADO
        break;								// PARAR

    case '3':						    	// SE APERTAR A OPCAO 3
        menuServicos();				    	// DIRECIONANDO PARA CONSULTA DE PRECOS E SERVICOS
        fflush(stdin);						// LIMPAR O BUFFEN DO TECLADO
        break;								// PARAR

    case '0':
        sair();								// SE APERTAR A OPCAO 0
        fflush(stdin);						// LIMPAR O BUFFEN DO TECLADO
        break;								// PARAR

    default:							    // SE NENHUMA OPCAO DIGITADA
        fflush(stdin);
        gotoxy (31,20);                     // POSIONAR COLUNA E LINHA
        mudacor(BRANCO,VERMELHO);           // MUDAR COR DA LINHA
        printf("OPCAO INVALIDA!!!\n\n");    // MENSAGEM FIXA
        sleep (1);                          // LOPPING 1 SEGUNDO
        mudacor(BRANCO,PRETO);              // MUDAR COR DA LINHA
        system("cls");                      // LIMPAR TELA
        menuGeral();                        // DIRECIONAMENTO PARA O MENU GERAL
        break;                              // PARAR DE VARRER
    };
}

void menuCliente()
{
    system("color 0F");						// ALTERAR A COR DA TELA PARA AZUL E BRANCO
    system("cls");                          // LIMPAR TELA
    bordas ();								// APLICANDO BORDAS NO MENU CLIENTE
    char opcao2;                            // VARIAVEL
    mudacor(BRANCO,AZUL);                   // MUDAR COR DA LINHA
    gotoxy (33,3);							// POSICIONAR COLUNA E LINHA
    printf ( " MENU CLIENTE ");			    // MENSAGEM FIXA
    mudacor(BRANCO,AZUL);                   // MUDAR COR DA LINHA
    gotoxy (29,6);							// POSICIONAR COLUNA E LINHA
    printf ("ESCOLHA A OPCAO ABAIXO:");	    // MENSAGEM FIXA
    mudacor(BRANCO,PRETO);                  // MUDAR COR DA LINHA
    gotoxy (32,10);							// POSICIONAR COLUNA E LINHA
    printf ("[1] CADASTRAR CLIENTE");	    // MENSAGEM FIXA
    gotoxy (32,11);							// POSICIONAR COLUNA E LINHA
    printf ("[2] LOCALIZAR CLIENTE");		// MENSAGEM FIXA
    gotoxy (32,12);							// POSICIONAR COLUNA E LINHA
    printf ("[3] EDITAR CLIENTE");		    // MENSAGEM FIXA
    gotoxy (32,13);							// POSICIONAR COLUNA E LINHA
    printf ("[4] EXCLUIR CLIENTE");		    // MENSAGEM FIXA
    gotoxy (32,14);					    	// POSICIONAR COLUNA E LINHA
    printf ("[5] VOLTAR AO MENU PRINCIPAL");// MENSAGEM FIXA
    gotoxy (32,15);							// POSICIONAR COLUNA E LINHA
    printf ("[0] SAIR DO SISTEMA");		    // MENSAGEM FIXA
    gotoxy (53,6);							// POSICIONAR COLUNA E LINHA
    mudacor(PRETO,PRETO);                   // MUDAR COR DA LINHA
    opcao2 = getche();						// LER COMO CARACTERE E CONVERTE PARA INTEIRO
    switch (opcao2)							// ESCOLHA DE DECISAO
    {
    case '1':								// SE APERTAR A OPCAO 1
        incluirCliente();					// DIRECIONANDO PARA CADASTRAR CLIENTE
        fflush(stdin);						// LIMPAR O BUFFEN DO TECLADO
        break;								// PARAR

    case '2':								// SE APERTAR A OPCAO 2
        consultaCliente();				    // DIRECIONANDO PARA CONSULTAR CLIENTE
        fflush(stdin);						// LIMPAR O BUFFEN DO TECLADO
        break;								// PARAR

    case '3':							    // SE APERTAR A OPCAO 3
        editarCliente();					// DIRECIONANDO PARA CADASTRAR ORDEM DE SERVICOS
        fflush(stdin);						// LIMPAR O BUFFEN DO TECLADO
        break;

    case '4':							    // SE APERTAR A OPCAO 3
        excluirCliente();					// DIRECIONANDO PARA CADASTRAR ORDEM DE SERVICOS
        fflush(stdin);						// LIMPAR O BUFFEN DO TECLADO
        break;

    case '5':						    	// SE APERTAR A OPCAO 3
        menuGeral();						// DIRECIONANDO PARA CADASTRAR ORDEM DE SERVICOS
        fflush(stdin);						// LIMPAR O BUFFEN DO TECLADO
        break;							    // PARAR

    case '0':								// SE APERTAR A OPCAO 0
        sair();								// DIRECIONANDO PARA SAIR DO SISTEMA
        fflush(stdin);						// LIMPAR O BUFFEN DO TECLADO
        break;								// PARAR

    default:						    	// SE NENHUMA OPCAO DIGITADA
        fflush(stdin);                      // LIMPAR BUFFER DO TECLADO
        gotoxy (31,20);                     // POSICIONAMENTO COLUNA E LINHA
        mudacor(BRANCO,VERMELHO);           // MUDAR COR DA LINHA
        printf("OPCAO INVALIDA!!!\n\n");    // MENSAGEM FIXA
        sleep (1);                          // LOOPING DE 1 SEGUNDO
        mudacor(BRANCO,PRETO);              // MUDAR COR DA LINHA
        getchar();
        menuCliente();					    // DIRECIONAMENTO PARA O MENU CLIENTE
    }
}

void menuFuncionario()
{
    system("color 0F");						// ALTERAR A COR DA TELA PARA AZUL E BRANCO
    system("cls");                          // LIMPAR TELA
    bordas ();								// APLICANDO BORDAS NO MENU CLIENTE
    char opcao2;                            // VARIAVEL
    mudacor(BRANCO,AZUL);                   // MUDAR COR DA LINHA
    gotoxy (32,3);							// POSICIONAR COLUNA E LINHA
    printf ( " MENU FUNCIONARIO ");			// MENSAGEM FIXA
    mudacor(BRANCO,AZUL);                   // MUDAR COR DA LINHA
    gotoxy (29,6);							// POSICIONAR COLUNA E LINHA
    printf ("ESCOLHA A OPCAO ABAIXO:");	    // MENSAGEM FIXA
    mudacor(BRANCO,PRETO);                  // MUDAR COR DA LINHA
    gotoxy (32,10);							// POSICIONAR COLUNA E LINHA
    printf ("[1] CADASTRAR FUNCIONARIO");	// MENSAGEM FIXA
    gotoxy (32,11);							// POSICIONAR COLUNA E LINHA
    printf ("[2] LOCALIZAR FUNCIONARIO");	// MENSAGEM FIXA
    gotoxy (32,12);							// POSICIONAR COLUNA E LINHA
    printf ("[3] EDITAR FUNCIONARIO");	// MENSAGEM FIXA
    gotoxy (32,13);							// POSICIONAR COLUNA E LINHA
    printf ("[4] EXCLUIR FUNCIONARIO");	// MENSAGEM FIXA
    gotoxy (32,14);							// POSICIONAR COLUNA E LINHA
    printf ("[5] VOLTAR AO MENU ANTERIOR");	// MENSAGEM FIXA
    gotoxy (32,15);                         // POSICIONAR COLUNA E LINHA
    printf ("[0] SAIR DO SISTEMA");	        // MENSAGEM FIXA
    gotoxy (53,6);                          // POSICIONAR COLUNA E LINHA
    mudacor(PRETO,PRETO);                   // MUDAR COR DA LINHA
    opcao2 = getche();						// LER COMO CARACTERE E CONVERTE PARA INTEIRO
    switch (opcao2)							// ESCOLHA DE DECISAO
    {
    case '1':								// SE APERTAR A OPCAO 1
        incluirfuncionarios();				// DIRECIONANDO PARA CADASTRAR CLIENTE
        fflush(stdin);						// LIMPAR O BUFFEN DO TECLADO
        break;								// PARAR

    case '2':								// SE APERTAR A OPCAO 2
        consultaFuncionario();				// DIRECIONANDO PARA CONSULTAR CLIENTE
        fflush(stdin);						// LIMPAR O BUFFEN DO TECLADO
        break;								// PARAR

    case '3':							// SE APERTAR A OPCAO 7
        editarfuncionario();						// DIRECIONANDO PARA MENU PRINCIPAL
        fflush(stdin);						// LIMPAR O BUFFEN DO TECLADO
        break;								// PARAR

    case '4':							// SE APERTAR A OPCAO 7
        excluirfuncionario();						// DIRECIONANDO PARA MENU PRINCIPAL
        fflush(stdin);						// LIMPAR O BUFFEN DO TECLADO
        break;								// PARAR


    case '5':							// SE APERTAR A OPCAO 7
        menuGerente();						// DIRECIONANDO PARA MENU PRINCIPAL
        fflush(stdin);						// LIMPAR O BUFFEN DO TECLADO
        break;								// PARAR

        return;
    default:                             // SE NENHUMA DAS OP��ES ACIMA
        fflush(stdin);                      // LIMPAR BUFFER TECLADO
        gotoxy (31,20);                     // POSICIONAR COLUNA E LINHA
        mudacor(BRANCO,VERMELHO);           // MUDAR COR DA LINHA
        printf("OPCAO INVALIDA!!!\n\n");    // MENSAGEM FIXA
        sleep (1);                          // LOOPING DE 1 SEGUNDO
        mudacor(BRANCO,PRETO);              // MUDAR COR DA LINHA
        getchar();
        menuFuncionario();                  // DIRECIONAMENTO PARA MENU FUNCIONARIO
    }
}

void menuServicos()
{
    system("color 0F");						    // ALTERAR A COR DA TELA PARA AZUL E BRANCO
    system("cls");                              // LIMPAR TELA
    bordas ();								    // APLICANDO BORDAS NO MENU CLIENTE
    char opcao2;                                // VARIAVEL
    mudacor(BRANCO,AZUL);                       // MUDAR COR DA LINHA
    gotoxy (32,3);							    // POSICIONAR COLUNA E LINHA
    printf (" MENU SERVICOS ");			        // MENSAGEM FIXA
    mudacor(BRANCO,AZUL);                       // MUDAR COR DA LINHA
    gotoxy (29,6);							    // POSICIONAR COLUNA E LINHA
    printf ("ESCOLHA A OPCAO ABAIXO:");		    // MENSAGEM FIXA
    mudacor(BRANCO,PRETO);                      // MUDAR COR DA LINHA
    gotoxy (29,10);							    // POSICIONAR COLUNA E LINHA
    printf ("[1] CADASTRAR ORDEM DE SERVICOS");	// MENSAGEM FIXA
    gotoxy (29,11);							    // POSICIONAR COLUNA E LINHA
    printf ("[2] LOCALIZAR ORDEM DE SERVICOS"); // MENSAGEM FIXA
    gotoxy (29,12);							    // POSICIONAR COLUNA E LINHA
    printf ("[3] CADASTRAR ORCAMENTO CLIENTE"); // MENSAGEM FIXA
    gotoxy (29,13);							    // POSICIONAR COLUNA E LINHA
    printf ("[4] LOCALIZAR ORCAMENTO CLIENTE");	// MENSAGEM FIXA
    gotoxy (29,14);							    // POSICIONAR COLUNA E LINHA
    printf ("[5] CONSULTAR SERVICOS E VALORES");// MENSAGEM FIXA
    gotoxy (29,16);                             // POSICIONAR COLUNA E LINHA
    printf ("[6] VOLTAR AO MENU ANTERIOR");	    // MENSAGEM FIXA
    gotoxy (29,18);                             // POSICIONAR COLUNA E LINHA
    printf ("[0] SAIR");	                    // MENSAGEM FIXA
    gotoxy (53,6);							    // POSICIONAR COLUNA E LINHA
    mudacor(PRETO,PRETO);                       // MUDAR COR DA LINHA
    opcao2 = getche();					        // LER COMO CARACTERE E CONVERTE PARA INTEIRO
    switch (opcao2)						        // ESCOLHA DE DECISAO
    {
    case '1':							    // SE APERTAR A OPCAO 1
        Cadastrar_OS();						    // DIRECIONANDO PARA CADASTRAR CLIENTE
        fflush(stdin);                          // LIMPAR O BUFFEN DO TECLADO
        break;								    // PARAR

    case '2':								// SE APERTAR A OPCAO 2
        consultaOS();							// DIRECIONANDO PARA CONSULTAR CLIENTE
        fflush(stdin);						    // LIMPAR O BUFFEN DO TECLADO
        break;							    	// PARAR

    case '3':							    // SE APERTAR A OPCAO 3
        incluir_Orcamento();				    // DIRECIONANDO PARA CADASTRAR ORDEM DE SERVICOS
        fflush(stdin);						    // LIMPAR O BUFFEN DO TECLADO
        break;								    // PARAR

    case '4':						    	// SE APERTAR A OPCAO 4
        consultaOrcamento();				    // DIRECIONANDO PARA CONSULTAR ORDEM DE SERVICOS
        fflush(stdin);						    // LIMPAR O BUFFEN DO TECLADO
        break;								    // PARAR

    case '5':								// SE APERTAR A OPCAO 4
        catalogoServico();					    // DIRECIONANDO PARA CONSULTAR ORDEM DE SERVICOS
        fflush(stdin);						    // LIMPAR O BUFFEN DO TECLADO
        break;

    case '6':							    // SE APERTAR A OPCAO 0
        menuGeral();						    // DIRECIONANDO PARA SAIR DO SISTEMA
        fflush(stdin);						    // LIMPAR O BUFFEN DO TECLADO
        break;								    // PARAR

    case '0':								// SE APERTAR A OPCAO 0
        sair();								    // DIRECIONANDO PARA SAIR DO SISTEMA
        fflush(stdin);						    // LIMPAR O BUFFEN DO TECLADO
        break;								    // PARAR

    default:							    // SE NENHUMA OPCAO DIGITADA
        fflush(stdin);                          // LIMPAR O BUFFER DO TECLADO
        gotoxy (31,20);                         // POSICIONAR COLUNA E LINHA
        mudacor(BRANCO,VERMELHO);               // MUDAR COR DA LINHA
        printf("OPCAO INVALIDA!!!\n\n");        // MENSAGEM FIXA
        sleep (1);                              // LOOPING 1 SEGUNDO
        mudacor(BRANCO,PRETO);                  // MUDAR COR DA LINHA
        getchar();
        menuServicos();                         // DIRECIONAMENTO PARA O MENU SERVICOS
    }
}

void menuGerente()
{
    system("color 0F");						    // ALTERAR A COR DA TELA PARA AZUL E BRANCO
    system ("cls");							    // LIMPAR TELA
    bordas ();								    // APLICANDO BORDAS NO MENU GERENTE
    char opcao;                                 // VARIAVEL
    gotoxy (33,3);                              // POSICIONAR COLUNA E LINHA
    mudacor(BRANCO,AZUL);						// MUDAR COR DA LINHA
    printf (" MENU GERENTE ");                  // TITULO
    mudacor(BRANCO,AZUL);                       // MUDAR COR DA LINHA
    gotoxy (29,6);							    // POSICIONAR COLUNA E LINHA
    printf ("ESCOLHA A OPCAO ABAIXO:");			// MENSAGEM FIXA
    mudacor(BRANCO,PRETO);                      // MUDAR COR DA LINHA
    gotoxy (30,9);							    // POSICIONAR COLUNA E LINHA
    printf ("[1] MENU FUNCIONARIO");            // MENSAGEM FIXA
    gotoxy (30,10);							    // POSICIONAR COLUNA E LINHA
    printf ("[2] MENU FINANCEIRO");			    // MENSAGEM FIXA
    gotoxy (30,11);							    // POSICIONAR COLUNA E LINHA
    printf ("[3] VOLTAR AO MENU ANTERIOR");     // MENSAGEM FIXA
    gotoxy (30,13);							    // POSICIONAR COLUNA E LINHA
    printf ("[0] SAIR DO SISTEMA");			    // MENSAGEM FIXA
    gotoxy (53,6);							    // POSICIONAR COLUNA E LINHA
    mudacor(PRETO,PRETO);                       //MUDAR COR DA LINHA
    opcao = getche();						    // LER COMO CARACTERE E CONVERTE PARA INTEIRO
    switch (opcao)							    // ESCOLHA DE DECISAO
    {
    case '1':								    // SE APERTAR A OPCAO 1
        menuFuncionario();				        // DIRECIONANDO PARA CADASTRO DE FUNCIONARIOS
        fflush(stdin);						    // LIMPAR O BUFFEN DO TECLADO
        break;								    // PARAR

    case '2':								    // SE APERTAR A OPCAO 3
        menuFinanceiro();					    // DIRECIONANDO PARA RELATORIO FINANCEIRO
        fflush(stdin);						    // LIMPAR O BUFFEN DO TECLADO
        break;								    // PARAR

    case '3':								    // SE APERTAR A OPCAO 4
        menuGeral();						    // DIRECIONANDO PARA VOLTAR AO MENU PRINCIPAL
        fflush(stdin);						    // LIMPAR O BUFFEN DO TECLADO
        break;								    // PARAR

    case '0':								    // SE APERTAR A OPCAO 0
        sair();								    // DIRECIONANDO PARA SAIR DO SISTEMA
        fflush(stdin);						    // LIMPAR O BUFFEN DO TECLADO
        break;								    // PARAR;

    default:                                    // SE NENHUMA DA OP��O
        fflush(stdin);                          // LIMPAR O BUFFER DO TECLADO
        gotoxy (31,20);                         // POSICIONAMENTO COLUNA E LINHA
        mudacor(BRANCO,VERMELHO);               // MUDAR COR DA LINHA
        printf("OPCAO INVALIDA!!!");           // MENSAGEM FIXA
        sleep (1);                              // LOOPING DE 1 SEGUNDO
        mudacor(BRANCO,PRETO);                  // MUDAR COR DA LINHA
        getchar();
        menuGerente();							// DIRECIONAMENTO PARA O MENU GERENTE
    }

}

void menuFinanceiro()
{
    system("color 0F");						// ALTERAR A COR DA TELA PARA AZUL E BRANCO
    system ("cls");							// LIMPAR TELA
    bordas ();								// APLICANDO BORDAS NO MENU GERENTE
    char opcao;                             // VARIAVEL CHARACTERE
    gotoxy (32,3);							// POSICIONAR COLUNA E LINHA
    mudacor(BRANCO,AZUL);                   // MUDAR COR DA LINHA
    printf (" MENU FINANCEIRO ");           // TITULO
    mudacor(BRANCO,AZUL);                   // MUDAR COR DA LINHA
    gotoxy (29,6);							// POSICIONAR COLUNA E LINHA
    printf ("ESCOLHA A OPCAO ABAIXO:");	    // MENSAGEM FIXA
    mudacor(BRANCO,PRETO);                  // MUDAR COR DA LINHA
    gotoxy (30,10);
    printf ("[1] DESPESAS MENSAIS");		// MENSAGEM FIXA
    gotoxy (30,11);							// POSICIONAR COLUNA E LINHA
    printf ("[2] GANHOS MENSAIS");		    // MENSAGEM FIXA
    gotoxy (30,12);							// POSICIONAR COLUNA E LINHA
    printf ("[3] RELATORIO FINANCEIRO");	// MENSAGEM FIXA
    gotoxy (30,13);							// POSICIONAR COLUNA E LINHA
    printf ("[4] VOLTAR AO MENU ANTERIOR"); // MENSAGEM FIXA
    gotoxy (30,15);							// POSICIONAR COLUNA E LINHA
    printf ("[0] SAIR DO SISTEMA");			// MENSAGEM FIXA
    gotoxy (53,6);							// POSICIONAR COLUNA E LINHA
    opcao = getche();						// LER COMO CARACTERE E CONVERTE PARA INTEIRO
    switch (opcao)							// ESCOLHA DE DECISAO
    {
    case '1':								// SE APERTAR A OPCAO 1
        despesas();     				    // DIRECIONANDO PARA CADASTRO DE FUNCIONARIOS
        fflush(stdin);						// LIMPAR O BUFFEN DO TECLADO
        break;								// PARAR

    case '2':								// SE APERTAR A OPCAO 2
        Receita();					        // DIRECIONANDO PARA CONSULTA DE FUNCIONARIOS
        fflush(stdin);						// LIMPAR O BUFFEN DO TECLADO
        break;								// PARAR;

    case '3':							// SE APERTAR A OPCAO 4
        relatorio_Financeiro();				// DIRECIONANDO PARA VOLTAR AO MENU PRINCIPAL
        fflush(stdin);						// LIMPAR O BUFFEN DO TECLADO
        break;								// PARAR

    case '4':								// SE APERTAR A OPCAO 0
        menuGerente();						// DIRECIONANDO PARA SAIR DO SISTEMA
        fflush(stdin);						// LIMPAR O BUFFEN DO TECLADO
        break;								// PARAR;

    case '0':								// SE APERTAR A OPCAO 0
        sair();								// DIRECIONANDO PARA SAIR DO SISTEMA
        fflush(stdin);						// LIMPAR O BUFFEN DO TECLADO
        break;								// PARAR;

    default:                                // SE NENHUMA OPCAO DIGITADA
        fflush(stdin);                       // LIMPAR O BUFFEN DO TECLADO
        gotoxy (31,20);                     // POSICIONAMENTO COLUNA E LINHA
        mudacor(BRANCO,VERMELHO);           // MUDAR COR DA LINHA
        printf("OPCAO INVALIDA!!!");    // MENSAGEM FIXA
        sleep (1);                          // LOOPING DE 1 SEGUNDO
        mudacor(BRANCO,PRETO);              // MUDAR COR DA LINHA
        getchar();
        menuFinanceiro();					// DIRECIONAMENTO PARA O MENU FINANCEIRO
    }

}

void catalogoServico()
{

    system ("cls");							// LIMPAR TELA
    mudacor(BRANCO,PRETO);
    bordas();								// APLICANDO BORDAS NA TELA CONSULTA
    gotoxy (25,3);							// POSICIONAR COLUNA E LINHA
    mudacor(BRANCO,AZUL);                   // MUDAR COR DA LINHA
    printf ("AREA DE CONSULTA PRECOS E SERVICOS ");// MENSAGEM FIXA
    mudacor(BRANCO,PRETO);                  // MUDAR COR DA LINHA
    gotoxy (31,5);							// POSICIONAR COLUNA E LINHA

    printf(" Valores de Mao de Obra Tabelados");// MENSAGEM FIXA
    gotoxy(30,6);							// POSICIONAR COLUNA E LINHA
    printf(" Os valores nao inclui Pecas!!!");// MENSAGEM FIXA

    gotoxy(4,8);							// POSICIONAR COLUNA E LINHA
    printf("Formatacao: R$ 250,00");        // MENSAGEM FIXA

    gotoxy(4,9);							// POSICIONAR COLUNA E LINHA
    printf("Reparo na Placa Mae: R$ 850,00");// MENSAGEM FIXA

    gotoxy(4,10);							// POSICIONAR COLUNA E LINHA
    printf("Troca da Tela: R$ 420,00");     // MENSAGEM FIXA

    gotoxy(4,11);							// POSICIONAR COLUNA E LINHA
    printf("Troca do Teclado: R$ 350,00");  // MENSAGEM FIXA

    gotoxy(4,12);							// POSICIONAR COLUNA E LINHA
    printf("Backup: R$ 280,00");            // MENSAGEM FIXA

    gotoxy(4,13);							// POSICIONAR COLUNA E LINHA
    printf("Deslocamento por hora: R$ 150,00");// MENSAGEM FIXA


    gotoxy(10,22);                          // POSICIONAR COLUNA E LINHA
    mudacor(PRETO,PRETO);                   // MUDAR COR DA LINHA
    system ("pause");                       // PAUSAR MENSAGEM NA TELA
    mudacor(BRANCO,PRETO);                  // MUDAR COR DA LINHA

    menuGeral();                            // DIRECIONAMENTO PARA O MENU GERAL

}

void despesas()
{
    struct Despesas;

    char R_Financeiro[1000];
    float Conta_agua;
    float  Conta_luz;
    float  Conta_internet;
    float  Conta_aluguel;
    float  pgto_funcionario;
    float  Conta_extras;
    float  total_despesas;
    char data_despesa[50];
    int soma;



    system("cls");                                  // LIMPAR TELA
    mudacor(BRANCO,PRETO);
    bordas();                                       // APLICANDO BORDAS
    gotoxy (31,3);                                  // POSICIONAMENTO COLUNA E LINHA
    mudacor(BRANCO,AZUL);                           // MUADR COR DA LINHA
    printf (" DESPESAS MENSAIS ");                  // MENSAGEM FIXA
    mudacor(BRANCO,PRETO);                          // MUDAR COR DA LINHA

    FILE *Financeiro_arquivo;                       // CRIANDO PONTEIRO
    Financeiro_arquivo = fopen("financeiro.txt","ab+"); // CRIANDO ARQUIVO

    gotoxy(6,7);
    printf("MES/ANO......................:");
    gotoxy(40,7);
    scanf("%s",&data_despesa);
    fflush(stdin);

    gotoxy(6,8);                                // POSICIONAMENTO COLUNA E LINHA
    printf("CONTA DE AGUA R$.............:");   // MENSAGEM FIXA
    gotoxy(40,8);                               // POSICIONAMENTO COLUNA E LINHA
    scanf("%f",&Conta_agua);                    // DIGITAR O DADO
    fflush(stdin);                              // LIMPAR BUFFER DO TECLADO

    gotoxy(6,9);                                // POSICIONAMENTO COLUNA E LINHA
    printf("CONTA DE LUZ R$..............:");   // MENSAGEM FIXA
    gotoxy(40,9);                               // POSICIONAMENTO COLUNA E LINHA
    scanf("%f",&Conta_luz);                     // DIGITAR O DADO
    fflush(stdin);                              // LIMPAR BUFFER DO TECLADO

    gotoxy(6,10);                               // POSICIONAMENTO COLUNA E LINHA
    printf("CONTA DE INTERNET R$.........:");   // MENSAGEM FIXA
    gotoxy(40,10);                              // POSICIONAMENTO COLUNA E LINHA
    scanf("%f",&Conta_internet);                // DIGITAR O DADO
    fflush(stdin);                              // LIMPAR BUFFER DO TECLADO

    gotoxy(6,11);                               // POSICIONAMENTO COLUNA E LINHA
    printf("ALUGUEL R$...................:");   // MENSAGEM FIXA
    gotoxy(40,11);                              // POSICIONAMENTO COLUNA E LINHA
    scanf("%f",&Conta_aluguel);                 // DIGITAR O DADO
    fflush(stdin);                              // LIMPAR BUFFER DO TECLADO

    gotoxy(6,12);                               // POSICIONAMENTO COLUNA E LINHA
    printf("PAGAMENTO DE FUNCIONARIOS R$.:");   // MENSAGEM FIXA
    gotoxy(40,12);                              // POSICIONAMENTO COLUNA E LINHA
    scanf("%f",&pgto_funcionario);              // DIGITAR O DADO
    fflush(stdin);                              // LIMPAR BUFFER DO TECLADO

    gotoxy(6,13);                               // POSICIONAMENTO COLUNA E LINHA
    printf("DESPESAS EXTRAS R$...........:");   // MENSAGEM FIXA
    gotoxy(40,13);                              // POSICIONAMENTO COLUNA E LINHA
    scanf("%f",&Conta_extras);                  // DIGITAR O DADO
    fflush(stdin);                              // LIMPAR BUFFER DO TECLADO

    gotoxy(6,15);                               // POSICIONAMENTO COLUNA E LINHA
    mudacor(BRANCO,VERMELHO);
    printf("TOTAL BRUTO DE DESPESAS R$...: "   "   %.2f",(Conta_agua+Conta_luz+Conta_internet+Conta_aluguel+pgto_funcionario+Conta_extras)); // MENSAGEM FIXA
    mudacor(BRANCO,PRETO);


    if (Financeiro_arquivo !=NULL)                      // SE O ARQUIVO EXISTIR, GRAVAR
    {

        fprintf(Financeiro_arquivo,"DESPESAS - CTECH TECNOLOGIA\n");    // TITUTO
        fprintf(Financeiro_arquivo,"MES/ANO.........................: ""%s\n",data_despesa);     //SALVANDO NO ARQUIVO
        fprintf(Financeiro_arquivo,"CONTA DE AGUA.................R$: ""%.2f\n",Conta_agua);    // SALVANDO NO ARQUIVO
        fprintf(Financeiro_arquivo,"CONTA DE LUZ .................R$: ""%.2f\n",Conta_luz);     // SALVANDO NO ARQUIVO
        fprintf(Financeiro_arquivo,"CONTA DE INTERNET.............R$: ""%.2f\n",Conta_internet);// SALVANDO NO ARQUIVO
        fprintf(Financeiro_arquivo,"ALUGUEL ......................R$: ""%.2f\n",Conta_aluguel); // SALVANDO NO ARQUIVO
        fprintf(Financeiro_arquivo,"PAGAMENTO DE FUNCIONARIOS.... R$: ""%.2f\n",pgto_funcionario);// SALVANDO NO ARQUIVO
        fprintf(Financeiro_arquivo,"DESPESAS EXTRAS.............. R$: ""%.2f\n",Conta_extras);  // SALVANDO NO ARQUIVO
        fprintf(Financeiro_arquivo,"TOTAL BRUTO DE DESPESAS.......R$: ""%.2f\n\n",(Conta_agua+Conta_luz+Conta_internet+Conta_aluguel+pgto_funcionario+Conta_extras)); // SALVANDO NO ARQUIVO
        fclose(Financeiro_arquivo);                     // FECHANDO O PONTEIRO

        gotoxy(4,20);                                   // POSICIONAMENTO COLUNA E LINHA
        mudacor(BRANCO,VERDE);                          // MUDAR COR DA LINHA
        gotoxy (20,20);                                 // POSICIONAMENTO COLUNA E LINHA
        printf("DESPESAS REGISTRADADAS COM SUCESSO!!!");// MENSAGEM FIXA
        getchar();
        mudacor(BRANCO,PRETO);
        menuFinanceiro();                                  // DIRECIONAMENTO PARA O MENU GERENTE
    }
    else                                            // SE NAO EXISTIR
    {

        mudacor(BRANCO,VERMELHO);                   // ALTERAR COR DA LINHA
        gotoxy (10,24);                             // POSICIONAMENTO COLUNA E LINHA
        printf("ERRO AO CADASTRAR FINANCAS, TENTE NOVAMENTE!!!"); // MENSAGEM FIXA
        mudacor(BRANCO,PRETO);                      // ALTERAR COR DA LINHA
        menuGerente();
    }
}

void Receita()
{
    struct Receita;

    char R_Financeiro[1000];
    float servicos;
    float outros;
    char data_receita[50];


    system("cls");                                              // LIMPA TELA
    mudacor(BRANCO,PRETO);
    bordas();                                                   // MARGENS
    gotoxy (31,3);                                              // POSICIONAMENTO DE COLUNAS E LINHAS
    mudacor(BRANCO, AZUL);                                      //  MUDAR COR DA LINHA
    printf (" RECEITAS MENSAIS ");                              // MENSAGEM FIXA
    gotoxy (31,5);                                              // POSICIONAMENTO DE COLUNAS E LINHAS
    mudacor(BRANCO, PRETO);                                     //  MUDAR COR DA LINHA

    FILE *Financeiro_arquivo;                                   // CRIAR PONTEIRO
    Financeiro_arquivo = fopen("financeiro.txt","ab+");     // CRIANDO ARQUIVO

    gotoxy(6,7);
    printf("MES/ANO......................:");
    gotoxy(37,7);
    scanf("%s",&data_receita);
    fflush(stdin);

    gotoxy(6,8);                                            // POSICIONAMENTO DE COLUNAS E LINHAS
    printf("SERVICOS R$..................:");               // MENSAGEM FIXA
    gotoxy(37,8);                                           // POSICIONAMENTO DE COLUNAS E LINHAS
    scanf("%f",&servicos);                                  // LEITURA DE DADOS
    fflush(stdin);                                          // LIMPAR BUFFER DO TECLADO

    gotoxy(6,9);                                            // POSICIONAMENTO DE COLUNAS E LINHAS
    printf("OUTROS R$....................:");               // MENSAGEM FIXA
    gotoxy(37,9);                                           // POSICIONAMENTO DE COLUNAS E LINHAS
    scanf("%f",&outros);                                    // LEITURA DE DADOS
    fflush(stdin);                                          // LIMPAR BUFFER DO TECLADO

    gotoxy(6,11);                                           // POSICIONAMENTO DE COLUNAS E LINHAS
    printf("TOTAL DE RECEITAS R$..........:" " %.2f",(servicos+outros)); // MENSAGEM FIXA

    if (Financeiro_arquivo!=NULL)                           // ABRINDO ARQUIVO
    {

        fprintf(Financeiro_arquivo,"RECEITA - CTECH TECNOLOGIA\n"); //GRAVANDO NO ARQUIVO
        fprintf(Financeiro_arquivo,"MES/ANO.........................: ""%s\n",data_receita);
        fprintf(Financeiro_arquivo,"SERVICOS......................R$: ""%.2f\n",servicos); //GRAVANDO NO ARQUIVO
        fprintf(Financeiro_arquivo,"OUTROS .......................R$: ""%.2f\n",outros);   //GRAVANDO NO ARQUIVO
        fprintf(Financeiro_arquivo,"TOTAL DE RECEITAS.............R$: ""%.2f\n\n",(servicos+outros)); //GRAVANDO NO ARQUIVO

        fclose(Financeiro_arquivo);                             // FECHANDO E SALVANDO ARQUIVO

        gotoxy(4,20);                                           // POSICIONAMENTO DE COLUNAS E LINHAS
        mudacor(BRANCO,VERDE);                                  // MUDAR COR DA LINHA
        gotoxy (20,20);                                         // POSICIONAMENTO DE COLUNAS E LINHAS
        printf("RECEITAS REGISTRADADAS COM SUCESSO!!!");        // MENSAGEM FIXA
        getchar();
        mudacor(BRANCO,PRETO);
        menuFinanceiro();

    }


    while (fgets(R_Financeiro,1000,Financeiro_arquivo)!= NULL)
    {

        mudacor(BRANCO,VERDE);
        printf("RECEITAS MENSAIS: %f");
        mudacor(BRANCO,PRETO);
        gotoxy (6,8);
        printf("SERVICOS.....................:""%.2f",servicos);
        gotoxy (6,9);
        printf("OUTRAS RECEITAS..............: ""%.2f",outros);
        gotoxy (6,11);
        printf("TOTAL DE RECEITAS.............:""%f",(servicos+outros));

    }

    fclose(Financeiro_arquivo);
    gotoxy (4,20);
    getchar();
    menuGerente();

}

void relatorio_Financeiro()
{

    system("cls"); // limpeza de tela
    mudacor(BRANCO,PRETO);
    bordas();
    gotoxy (31,3);
    mudacor(BRANCO, AZUL);
    printf (" RELATORIO FINANCEIRO ");
    gotoxy (31,5);
    mudacor(BRANCO, PRETO);

    float total_receita;
    float total_despesas;


    mudacor(BRANCO,VERDE);
    gotoxy(10,8);
    printf("TOTAL DE RECEITAS MENSAL R$: ");
    mudacor(BRANCO,PRETO);
    gotoxy(40,8);
    scanf("%f",&total_receita);
    mudacor(BRANCO,PRETO);

    mudacor(BRANCO,VERMELHO);
    gotoxy (10,12);
    printf("TOTAL DE DESPESAS MENSAL R$: ");
    gotoxy (40,12);
    mudacor(BRANCO,PRETO);
    scanf("%f",&total_despesas);

    mudacor(PRETO,AMARELO);
    gotoxy(31,17);
    printf("LUCRO DA EMPRESA");
    mudacor(BRANCO,PRETO);
    gotoxy(34,18);
    printf("R$ %.2f",(total_receita-total_despesas));
    mudacor(BRANCO,PRETO);

    gotoxy(15,20);
    mudacor(PRETO,PRETO);
    system("pause");
    mudacor(BRANCO,PRETO);

    getchar();
    menuFinanceiro();

}

void Cadastrar_OS()
{
    struct Cadastrar_OS;

    char C_OS[1000];
    int codigoOS;
    char Marca_OS[10];
    char Modelo_OS [100];
    char Numero_de_serie_OS [100];
    char Defeito_Relatado_OS [100];
    char CPF_CNPJ_OS[100];
    char Nome_Completo_OS[100];
    char Data_OS [100];
    char Telefone_OS[100];
    char Estado_OS[100];
    char Cidade_OS[100];
    char hora_OS[100];
    char Servicos_Executado_OS[100];
    char Tecnico_Responsavel_OS[100];
    float valor_OS;

    system("cls"); // limpeza de tela
    mudacor(BRANCO,PRETO);
    bordas();
    mudacor(BRANCO,AZUL);
    gotoxy (31,3);
    printf (" CADASTRAR ORDEM DE SERVICO ");
    mudacor(BRANCO,PRETO);


    FILE *OS_arquivo;
    OS_arquivo = fopen("C_OS.txt","ab+");

    if (OS_arquivo ==NULL)
    {
        gotoxy(10,10);
        mudacor(BRANCO,VERMELHO);
        printf("NAO FOI POSSIVEL ABRIR O ARQUIVO");
        mudacor(BRANCO,PRETO);
        getchar();
        menuGeral();

    }
    else
    {

        gotoxy(6,6);
        printf("CODIGO..............: ");
        gotoxy(28,6);
        scanf("%d",&codigoOS);
        fflush(stdin);
        fprintf(OS_arquivo,"\nCODIGO........................: ""%d",codigoOS);

        gotoxy(6,8);
        printf("DATA DA OS..........:");
        gotoxy(28,8);
        scanf("%s",&Data_OS);
        fflush(stdin);
        fprintf(OS_arquivo,"\nDATA DA OS....................: ""%s",&Data_OS);

        gotoxy(6,9);
        printf("NOME DO CLIENTE.....:");
        gotoxy(28,9);
        fgets(Nome_Completo_OS,100,stdin);
        Nome_Completo_OS[strlen(Nome_Completo_OS)-1] = '\0';
        fprintf(OS_arquivo,"\nNOME DO CLIENTE...............: " "%s",&Nome_Completo_OS);

        gotoxy(6,10);
        printf("CPF/CNPJ............:");
        gotoxy(28,10);
        scanf("%s",&CPF_CNPJ_OS);
        fflush(stdin);
        fprintf(OS_arquivo,"\nCPF/CNPJ......................: " "%s",&CPF_CNPJ_OS);

        gotoxy(6,11);
        printf("TELEFONE............:");
        gotoxy(28,11);
        scanf("%s",&Telefone_OS);
        fflush(stdin);
        fprintf(OS_arquivo,"\nTELEFONE......................: " "%s",&Telefone_OS);

        gotoxy(6,12);
        printf("MARCA...............:");
        gotoxy(28,12);
        scanf("%s",&Marca_OS);
        fflush(stdin);
        fprintf(OS_arquivo,"\nMARCA.........................: " "%s",&Marca_OS);

        gotoxy(6,13);
        printf("MODELO..............:");
        gotoxy(28,13);
        scanf("%s",&Modelo_OS);
        fflush(stdin);
        fprintf(OS_arquivo,"\nMODELO........................: " "%s",&Modelo_OS);

        gotoxy(6,14);
        printf("SERIE...............:");
        gotoxy(28,14);
        scanf("%s",&Numero_de_serie_OS);
        fflush(stdin);
        fprintf(OS_arquivo,"\nSERIE.........................: " "%s",&Numero_de_serie_OS);

        gotoxy(6,15);
        printf("PROBLEMA RELATADO...:");
        gotoxy(28,15);
        fgets(Defeito_Relatado_OS,100,stdin);
        Defeito_Relatado_OS[strlen(Defeito_Relatado_OS)-1] = '\0';
        fprintf(OS_arquivo,"\nPROBLEMA RELATADO.............: " "%s",&Defeito_Relatado_OS);

        gotoxy(6,16);
        printf("SERVICOS EXECUTADOS.:");
        gotoxy(28,16);
        fgets(Servicos_Executado_OS,100,stdin);
        Servicos_Executado_OS[strlen(Servicos_Executado_OS)-1] = '\0';
        fprintf(OS_arquivo,"\nSERVICOS EXECUTADOS...........: " "%s",&Servicos_Executado_OS);

        gotoxy(6,17);
        printf("TECNICO RESPONSAVEL.:");
        gotoxy(28,17);
        fgets(Tecnico_Responsavel_OS,100,stdin);
        Tecnico_Responsavel_OS[strlen(Tecnico_Responsavel_OS)-1] = '\0';
        fprintf(OS_arquivo,"\nTECNICO RESPONSAVEL...........: ""%s",&Tecnico_Responsavel_OS);

        gotoxy(6,19);
        printf("VALOR DO SERVICO REALIZADOS R$:");
        gotoxy(39,19);
        scanf("%f",&valor_OS);
        fflush(stdin);
        fprintf(OS_arquivo,"\nVALOR DO SERVICO REALIZADOS R$: " "%.2f",valor_OS);

        fclose(OS_arquivo);
        gotoxy (15,22);
        mudacor(BRANCO,VERDE);
        printf("ORDEM DE SERVICO REGISTRADOS COM SUCESSO!!!");
        sleep (1);
        mudacor(BRANCO,PRETO);
        menuGeral();
    }
}

void consultaOS()
{
    system("cls"); // limpeza de tela
    mudacor(BRANCO,PRETO);
    bordas();
    gotoxy (31,3);
    mudacor(BRANCO, AZUL);
    printf (" CONSULTA ORDEM DE SERVICOS ");
    gotoxy (31,5);
    mudacor(BRANCO, PRETO);

    struct Cadastrar_OS;
    char C_OS[1000];

    FILE *OS_arquivo;
    OS_arquivo = fopen("C_OS.txt","r");

    if (OS_arquivo==NULL)
    {

        gotoxy(23,15);
        mudacor(BRANCO,VERMELHO);
        printf("NAO FOI POSSIVEL LOCALIZAR O ARQUIVO.");// caso nao consiga acessar o arquivo
        mudacor(BRANCO,PRETO);
        getchar();
    }


    while (fgets(C_OS,1000,OS_arquivo)!= NULL)
    {

        printf("\t %s",&C_OS);


    }

    fclose(OS_arquivo);
    getchar();
    mudacor(BRANCO,PRETO);
    menuGeral();
}

void incluir_Orcamento()
{
    struct incluir_Orcamento;

    char C_Orcamento[1000];
    int codigoOrcamento;
    char Data_Orcamento [20];
    char Marca_Orcamento[50];
    char Modelo_Orcamento [50];
    char Numero_de_serie_Orcamento [20];
    char Defeito_Relatado_Orcamento [200];
    char Possui_arranhoes_Orcamento [10];
    char Possui_Bateria_Orcamento [10];
    char Possui_fonte_Orcamento [10];
    char nome_do_cliente_Orcamento[100];
    char telefone_Orcamento[20];
    char CPF_CNPJ_Orcamento[50];


    system("cls");                                      // LIMPAR TELA
    mudacor(BRANCO,PRETO);
    bordas();                                          //APLICAR A BORDA
    gotoxy (31,3);                                      //POSICIONAMENTO DE LINHAS E COLUNAS
    mudacor(BRANCO,AZUL);                               // ALTERAR A COR DA LETRA
    printf ("  CADASTRO DE ORCAMENTO ");                // MENSAGEM FIXA
    mudacor(BRANCO,PRETO);

    FILE *Orcamento_arquivo;                            // CRIAR O PONTEIRO
    Orcamento_arquivo = fopen("Orcamento.txt","ab+");   // CRIAR O ARQUIVO
    if(Orcamento_arquivo ==NULL)                        // FAZENDO A LEITURA DO ARQUIVO
    {
        gotoxy(23,15);
        mudacor(BRANCO,VERMELHO);
        printf("NAO FOI LOCALIZAR O ARQUIVO");     // MENSAGEM FIXA
        mudacor(BRANCO,PRETO);
        getchar();
    }
    else                                            // CASO ESTEJA TUDO CERTO, SEGUIR
    {

        gotoxy(6,6);                                //POSICIONAMENTO DE LINHAS E COLUNAS
        printf("CODIGO..............:");            // MENSAGEM FIXA
        gotoxy(28,6);                               //POSICIONAMENTO DE LINHAS E COLUNAS
        scanf("%d",&codigoOrcamento);               // DIGITAR O CAMPO
        fflush(stdin);                              // LIMPAR BUFFER DO TECLADO
        fprintf(Orcamento_arquivo, "\nCODIGO..............:" "%d",codigoOrcamento); // SALVAR NO ARQUIVO

        gotoxy(6,8);                                //POSICIONAMENTO DE LINHAS E COLUNAS
        printf("DATA DO ORCAMENTO...:");            // MENSAGEM FIXA
        gotoxy(28,8);                               //POSICIONAMENTO DE LINHAS E COLUNAS
        scanf("%s",&Data_Orcamento);                // DIGITAR O CAMPO
        fflush(stdin);                              // LIMPAR BUFFER DO TECLADO
        fprintf(Orcamento_arquivo, "\nDATA DO ORCAMENTO...:" "%s", &Data_Orcamento); // SALVAR NO ARQUIVO

        gotoxy(6,9);                                //POSICIONAMENTO DE LINHAS E COLUNAS
        printf("NOME DO CLIENTE.....:");            // MENSAGEM FIXA
        gotoxy(28,9);                               //POSICIONAMENTO DE LINHAS E COLUNAS
        fgets(&nome_do_cliente_Orcamento,100,stdin);// DIGITAR O CAMPO
        nome_do_cliente_Orcamento[strlen(nome_do_cliente_Orcamento)-1] = '\0';  // LIMPAR QUEBRA DE LINHA
        fflush(stdin);
        fprintf(Orcamento_arquivo,"\nNOME DO CLIENTE.....:" "%s", &nome_do_cliente_Orcamento); // SALVAR NO ARQUIVO

        gotoxy(6,10);                               //POSICIONAMENTO DE LINHAS E COLUNAS
        printf("CPF/CNPJ............:");            // MENSAGEM FIXA
        gotoxy(28,10);                              //POSICIONAMENTO DE LINHAS E COLUNAS
        scanf("%s",&CPF_CNPJ_Orcamento);            // DIGITAR O CAMPO
        fflush(stdin);                              // LIMPAR BUFFER DO TECLADO
        fprintf(Orcamento_arquivo, "\nCPF/CNPJ............:" "%s", &CPF_CNPJ_Orcamento); // SALVAR NO ARQUIVO

        gotoxy(6,11);                               //POSICIONAMENTO DE LINHAS E COLUNAS
        printf("TELEFONE............:");            // MENSAGEM FIXA
        gotoxy(28,11);                              //POSICIONAMENTO DE LINHAS E COLUNAS
        scanf("%s",&telefone_Orcamento);            // DIGITAR O CAMPO
        fflush(stdin);                              // LIMPAR BUFFER DO TECLADO
        fprintf(Orcamento_arquivo, "\nTELEFONE............:" "%s", &telefone_Orcamento); // SALVAR NO ARQUIVO

        gotoxy(6,12);                                  //POSICIONAMENTO DE LINHAS E COLUNAS
        printf("MARCA...............:");                // MENSAGEM FIXA
        gotoxy(28,12);                                  //POSICIONAMENTO DE LINHAS E COLUNAS
        fgets(&Marca_Orcamento,100,stdin);              // DIGITAR O CAMPO
        Marca_Orcamento[strlen(Marca_Orcamento)-1] = '\0'; // LIMPAR QUEBRA DE LINHA
        fflush(stdin);
        fprintf(Orcamento_arquivo, "\nMARCA...............:" "%s", &Marca_Orcamento); // SALVAR NO ARQUIVO

        gotoxy(6,13);                                   //POSICIONAMENTO DE LINHAS E COLUNAS
        printf("MODELO..............:");                // MENSAGEM FIXA
        gotoxy(28,13);                                  //POSICIONAMENTO DE LINHAS E COLUNAS
        fgets(&Modelo_Orcamento,100,stdin);             // DIGITAR O CAMPO
        Modelo_Orcamento[strlen(Modelo_Orcamento)-1] = '\0'; // LIMPAR QUEBRA DE LINHA
        fflush(stdin);
        fprintf(Orcamento_arquivo, "\nMODELO..............:" "%s", &Modelo_Orcamento); // SALVAR NO ARQUIVO

        gotoxy(6,14);                                   //POSICIONAMENTO DE LINHAS E COLUNAS
        printf("SERIE...............:");                // MENSAGEM FIXA
        gotoxy(28,14);                                  //POSICIONAMENTO DE LINHAS E COLUNAS
        scanf("%s",&Numero_de_serie_Orcamento);         // DIGITAR O CAMPO
        fflush(stdin);                                  // LIMPAR BUFFER DO TECLADO
        fprintf(Orcamento_arquivo, "\nSERIE...............:" "%s", &Numero_de_serie_Orcamento); // SALVAR NO ARQUIVO

        gotoxy(6,16);                                   //POSICIONAMENTO DE LINHAS E COLUNAS
        printf("POSSUI BATERIA......");                 // MENSAGEM FIXA
        gotoxy(28,16);                                  //POSICIONAMENTO DE LINHAS E COLUNAS
        scanf("%s",&Possui_Bateria_Orcamento);          // DIGITAR O CAMPO
        fflush(stdin);                                  // LIMPAR BUFFER DO TECLADO
        fprintf(Orcamento_arquivo, "\nPOSSUI BATERIA......:" "%s", &Possui_Bateria_Orcamento); // SALVAR NO ARQUIVO

        gotoxy(6,18);                                   //POSICIONAMENTO DE LINHAS E COLUNAS
        printf("DEFEITO RELATADO....:");                // MENSAGEM FIXA
        gotoxy(28,18);                                  //POSICIONAMENTO DE LINHAS E COLUNAS
        fgets(&Defeito_Relatado_Orcamento,200,stdin);   // DIGITAR O CAMPO
        Defeito_Relatado_Orcamento[strlen(Defeito_Relatado_Orcamento)-1] = '\0'; // LIMPAR QUEBRA DE LINHA
        fflush(stdin);
        fprintf(Orcamento_arquivo, "\nDEFEITO RELATADO....:" "%s", &Defeito_Relatado_Orcamento); // SALVAR NO ARQUIVO

        fclose(Orcamento_arquivo);
        gotoxy (20,22);                                 //POSICIONAMENTO DE LINHAS E COLUNAS
        mudacor(BRANCO,VERDE);                          // MUDAR COR DA LETRA
        printf("ORCAMENTO REGISTRADO COM SUCESSO!!!");  // MENSAGEM FIXA
        mudacor(BRANCO,PRETO);
        sleep (1);                                      // TEMPO PARA PULAR A TELA
        menuGeral();                                    // DIRECIONAMENTO APOS CADASTRO
    }
}

void consultaOrcamento()
{
    system("cls"); // limpeza de tela
    mudacor(BRANCO,PRETO);
    bordas();
    gotoxy (31,3);
    mudacor(BRANCO,AZUL);
    printf (" CONSULTA ORCAMENTO ");
    gotoxy (31,5);
    mudacor(BRANCO, PRETO);

    struct incluir_Orcamento;
    char C_Orcamento[1000];

    FILE *Orcamento_arquivo;
    Orcamento_arquivo = fopen ("Orcamento.txt","r");

    if (Orcamento_arquivo==NULL)
    {
        gotoxy(23,15);
        mudacor(BRANCO,VERMELHO);
        printf("NAO FOI POSSIVEL ACESSAR O ARQUIVO.");
        mudacor(BRANCO,PRETO);
        getchar();
    }

    while (fgets(C_Orcamento,1000,Orcamento_arquivo)!= NULL)
    {

        printf("\t %s",C_Orcamento);
    }

    fclose(Orcamento_arquivo);
    gotoxy (4,24);
    getchar();
    menuGeral();
}

void incluirCliente()
{
    struct incluir_Cliente;


    char C_Cliente[10];
    char nome_Cliente [100];
    char endereco_Cliente [200];
    char telefone_Cliente [50];
    char estado_Cliente [50];
    char cpf_Cliente [14];
    char cep_Cliente [14];
    int codigo_Cliente;
    char data_nasc_Cliente [20];
    char cidade_Cliente [20];


    system("cls"); // limpeza de tela
    mudacor(BRANCO,PRETO);
    bordas();
    gotoxy (31,3);
    mudacor(BRANCO, AZUL);
    printf (" CADASTRO DE CLIENTE ");
    mudacor(BRANCO,PRETO);
    gotoxy (10,10);

    FILE *Cliente_arquivo;
    Cliente_arquivo = fopen("Cliente.txt","ab+");
    if (Cliente_arquivo ==NULL)
    {
        mudacor(BRANCO,VERMELHO);
        printf("NAO FOI POSSIVEL ABRIR OU CRIAR O ARQUIVO");
        mudacor(BRANCO, PRETO);
        return(0);
        system("cls");
    }
    else
    {


        gotoxy(6,7);
        printf("CODIGO...........:");
        gotoxy(24,7);
        scanf("%d",&codigo_Cliente);
        fflush(stdin);
        fprintf(Cliente_arquivo, "\nCODIGO...........:" "%d",codigo_Cliente);

        gotoxy(6,9);
        printf("NOME COMPLETO....:");
        fgets(&nome_Cliente,100,stdin);
        nome_Cliente[strlen(nome_Cliente)-1] = '\0';
        fflush(stdin);
        gotoxy(24,9);
        fprintf(Cliente_arquivo, "\nNOME COMPLETO....:" "%s",&nome_Cliente);


        gotoxy(6,10);
        printf("DATA DE NASC.....:");
        gotoxy(24,10);
        scanf("%s",&data_nasc_Cliente);
        fflush(stdin);
        fprintf(Cliente_arquivo, "\nDATA DE NASC.....:" "%s",&data_nasc_Cliente);


        gotoxy(6,11);
        printf("CPF/CNPJ.........:");
        gotoxy(24,11);
        scanf("%s",&cpf_Cliente);
        fflush(stdin);
        fprintf(Cliente_arquivo, "\nCPF/CNPJ.........:" "%s", &cpf_Cliente);


        gotoxy(6,12);
        printf("TELEFONE.........:");
        gotoxy(24,12);
        scanf("%s",&telefone_Cliente);
        fflush(stdin);
        fprintf(Cliente_arquivo, "\nTELEFONE.........:" "%s", &telefone_Cliente);


        gotoxy(6,13);
        printf("ENDERECO.........:");
        gotoxy(24,13);
        fgets(&endereco_Cliente,200,stdin);
        endereco_Cliente[strlen(endereco_Cliente)-1] = '\0';
        fflush(stdin);
        fprintf(Cliente_arquivo, "\nENDERECO.........:" "%s", &endereco_Cliente);


        gotoxy(6,14);
        printf("CIDADE...........:");
        gotoxy(24,14);
        fgets(&cidade_Cliente,20,stdin);
        cidade_Cliente[strlen(cidade_Cliente)-1] = '\0';
        fflush(stdin);
        fprintf(Cliente_arquivo, "\nCIDADE...........:" "%s", &cidade_Cliente);


        gotoxy(6,15);
        printf("ESTADO...........:");
        gotoxy(24,15);
        fgets(&estado_Cliente,50,stdin);
        estado_Cliente[strlen(estado_Cliente)-1] = '\0';
        fflush(stdin);
        fprintf(Cliente_arquivo, "\nESTADO...........:" "%s", &estado_Cliente);


        gotoxy(6,16);
        printf("CEP..............:");
        gotoxy(24,16);
        scanf("%s",&cep_Cliente);
        fflush(stdin);
        fprintf(Cliente_arquivo, "\nCEP..............:" "%s", &cep_Cliente);



    }
    gotoxy (20,18);
    mudacor(BRANCO,VERDE);
    printf("CLIENTE CADASTRADO COM SUCESSO!!!");
    fclose(Cliente_arquivo);
    mudacor(BRANCO,PRETO);
    gotoxy (15,25);
    sleep (1);
    menuGeral();
}

void editarCliente()
{

    system("cls"); // limpeza de tela

    mudacor(BRANCO,PRETO);
    bordas();
    gotoxy (33,3);
    mudacor(BRANCO, AZUL);
    printf (" EDITAR CLIENTE ");
    mudacor(BRANCO,PRETO);


    mudacor(PRETO,AMARELO);
    gotoxy (28,10);
    printf("AREA EM DESENVOLVIMENTO!!! ");
    gotoxy (25,12);
    printf("EM BREVE ATUALIZACAO DO SOFTWARE");
    mudacor(BRANCO,PRETO);
    gotoxy(20,24);
    getchar();
    menuGeral();
}

void excluirCliente()
{
    system("cls"); // limpeza de tela

    mudacor(BRANCO,PRETO);
    bordas();
    gotoxy (33,3);
    mudacor(BRANCO, AZUL);
    printf (" EXCLUIR CLIENTE ");
    mudacor(BRANCO,PRETO);


    mudacor(PRETO,AMARELO);
    gotoxy (28,10);
    printf("AREA EM DESENVOLVIMENTO!!! ");
    gotoxy (25,12);
    printf("EM BREVE ATUALIZACAO DO SOFTWARE");
    mudacor(BRANCO,PRETO);
    gotoxy(20,24);
    getchar();
    menuGeral();


}

void consultaCliente()
{
    system("cls"); // limpeza de tela
    mudacor(BRANCO,PRETO);
    bordas();
    gotoxy (31,3);
    mudacor(BRANCO,AZUL);
    printf (" CONSULTA CLIENTE ");
    gotoxy (31,5);
    mudacor(BRANCO, PRETO);

    struct incluir_Cliente;

    char C_Cliente[100000];


    FILE *Cliente_arquivo;
    Cliente_arquivo = fopen("Cliente.txt", "r");
    if (Cliente_arquivo == NULL)
    {
        gotoxy(23,15);
        mudacor(BRANCO,VERMELHO);
        printf("NAO FOI POSSIVEL LOCALIZAR O ARQUIVO!!!");
        mudacor(BRANCO,PRETO);
        getchar();
    }

    while (fgets(C_Cliente,1000,Cliente_arquivo)!= NULL)
    {

        printf("\t %s",C_Cliente);
    }

    fclose(Cliente_arquivo);
    gotoxy(6,30);
    getchar();
    menuCliente();
}

void incluirfuncionarios()
{
    struct incluir_Funcionarios;

    int C_Funcionarios[SIZE];
    char nome_Funcionario[SIZE] [100];
    char endereco_Funcionario[SIZE] [200];
    char telefone_Funcionario[SIZE] [50];
    char rg_Funcionario[SIZE][12];
    char cpf_Funcionario [SIZE][14];
    char funcao_Funcionario[SIZE][50];
    char data_admissao_Funcionario[SIZE][20];
    char data_nasc_Funcionario[SIZE][20];
    char estado_Funcionario[SIZE][50];
    char cidade_Funcionario[SIZE][20];
    char cep_Funcionario[SIZE][10];

    system("cls"); // limpeza de tela
    mudacor(BRANCO,PRETO);
    bordas();                                       // APLICANDO BORDAS
    gotoxy (31,3);
    mudacor(BRANCO,AZUL);
    printf (" CADASTRO DE FUNCIONARIOS ");
    mudacor(BRANCO,PRETO);

    FILE *Funcionario_arquivo;
    Funcionario_arquivo = fopen("Funcionario.txt","ab+");
    if (Funcionario_arquivo ==NULL)
    {

        printf("NAO FOI POSSIVEL ABRIR OU CRIAR O ARQUIVO");
        system("pause");
    }
    else
    {

        gotoxy(6,9);
        printf("NOME COMPLETO......:");
        gotoxy(27,9);
        fgets(nome_Funcionario[SIZE],100,stdin);
        nome_Funcionario[SIZE][strlen(nome_Funcionario[SIZE])-1] = '\0';
        fflush(stdin);
        fprintf(Funcionario_arquivo, "\nNOME COMPLETO......:" "%s",nome_Funcionario[SIZE]);

        gotoxy(6,10);
        printf("DATA DE NASC.......:");
        gotoxy(27,10);
        scanf("%s",&data_nasc_Funcionario[SIZE]);
        fflush(stdin);
        fprintf(Funcionario_arquivo, "\nDATA DE NASC.......:" "%s",data_nasc_Funcionario[SIZE]);

        gotoxy(6,11);
        printf("CPF................:");
        gotoxy(27,11);
        scanf("%s",&cpf_Funcionario[SIZE]);
        fflush(stdin);
        fprintf(Funcionario_arquivo, "\nCPF................:" "%s",cpf_Funcionario[SIZE]);

        gotoxy(6,12);
        printf("TELEFONE...........:");
        gotoxy(27,12);
        scanf("%s",&telefone_Funcionario[SIZE]);
        fflush(stdin);
        fprintf(Funcionario_arquivo, "\nTELEFONE...........:" "%s",telefone_Funcionario[SIZE]);

        gotoxy(6,13);
        printf("ENDERECO...........:");
        gotoxy(27,13);
        fgets(endereco_Funcionario[SIZE],200,stdin);
        endereco_Funcionario[SIZE][strlen(endereco_Funcionario[SIZE])-1] = '\0';
        fflush(stdin);
        fprintf(Funcionario_arquivo, "\nENDERECO...........:" "%s",endereco_Funcionario[SIZE]);

        gotoxy(6,14);
        printf("CIDADE.............:");
        gotoxy(27,14);
        fgets(cidade_Funcionario[SIZE],20,stdin);
        cidade_Funcionario[SIZE][strlen(cidade_Funcionario[SIZE])-1] = '\0';
        fflush(stdin);
        fprintf(Funcionario_arquivo, "\nCIDADE.............:" "%s",cidade_Funcionario[SIZE]);

        gotoxy(6,15);
        printf("ESTADO.............:");
        gotoxy(27,15);
        fgets(estado_Funcionario[SIZE],50,stdin);
        estado_Funcionario[SIZE][strlen(estado_Funcionario[SIZE])-1] = '\0';
        fflush(stdin);
        fprintf(Funcionario_arquivo, "\nESTADO.............:" "%s",estado_Funcionario[SIZE]);

        gotoxy(6,16);
        printf("CEP................:");
        gotoxy(27,16);
        scanf("%s",&cep_Funcionario[SIZE]);
        fflush(stdin);
        fprintf(Funcionario_arquivo, "\nCEP................:" "%s",cep_Funcionario[SIZE]);

        gotoxy(6,17);
        printf("FUNCAO.............:");
        gotoxy(27,17);
        fgets(funcao_Funcionario[SIZE],50,stdin);
        funcao_Funcionario[SIZE][strlen(funcao_Funcionario[SIZE])-1] = '\0';
        fflush(stdin);
        fprintf(Funcionario_arquivo, "\nFUNCAO.............:" "%s",funcao_Funcionario[SIZE]);

        gotoxy (18,19);
        mudacor(BRANCO,VERDE);
        printf("FUNCIONARIO CADASTRADO COM SUCESSO!!!");
        mudacor(BRANCO,PRETO);
        fclose(Funcionario_arquivo);
        sleep (1);
        menuGerente();
    }
}

void consultaFuncionario()
{

    system("cls"); // limpeza de tela
    mudacor(BRANCO,PRETO);
    bordas();
    gotoxy (31,3);
    mudacor(BRANCO,AZUL);
    printf (" CONSULTA FUNCIONARIO ");
    gotoxy (31,5);
    mudacor(BRANCO, PRETO);


    char C_Funcionarios [1000];

    FILE *Funcionario_arquivo;
    Funcionario_arquivo = fopen("Funcionario.txt", "r");

    if (Funcionario_arquivo == NULL)
    {
        gotoxy(23,15);
        mudacor(BRANCO,VERMELHO);
        printf("NAO FOI POSSIVEL CRIAR O ARQUIVO");
        getchar();
    }
    while (fgets(C_Funcionarios,1000,Funcionario_arquivo)!= NULL)
    {

        printf("\t %s", &C_Funcionarios);
    }
    fclose(Funcionario_arquivo);
    getchar();
    menuGerente();
}

void excluirfuncionario()
{
    system("cls"); // limpeza de tela

    mudacor(BRANCO,PRETO);
    bordas();                                       // APLICANDO BORDAS
    gotoxy (33,3);
    mudacor(BRANCO, AZUL);
    printf (" EXCLUIR FUNCIONARIO ");
    mudacor(BRANCO,PRETO);


    mudacor(PRETO,AMARELO);
    gotoxy (28,10);
    printf("AREA EM DESENVOLVIMENTO!!! ");
    gotoxy (25,12);
    printf("EM BREVE ATUALIZACAO DO SOFTWARE");
    mudacor(BRANCO,PRETO);
    gotoxy(20,24);
    getchar();
    menuGerente();


}

void editarfuncionario()
{
    system("cls"); // limpeza de tela

    mudacor(BRANCO,PRETO);
    bordas();                                       // APLICANDO BORDAS
    gotoxy (33,3);
    mudacor(BRANCO, AZUL);
    printf (" EDITAR FUNCIONARIO ");
    mudacor(BRANCO,PRETO);

    mudacor(PRETO,AMARELO);
    gotoxy (28,10);
    printf("AREA EM DESENVOLVIMENTO!!! ");
    gotoxy (25,12);
    printf("EM BREVE ATUALIZACAO DO SOFTWARE");
    mudacor(BRANCO,PRETO);
    gotoxy(20,24);
    getchar();
    menuGerente();

}

void sair()
{
    system ("cls");							// LIMPAR TELA
    mudacor(BRANCO,PRETO);
    bordas();                                       // APLICANDO BORDAS
    mudacor(BRANCO,AZUL);
    gotoxy (25,6);							// POSICIONAR LINHA E COLUNA
    printf ("OBRIGADO POR UTILIZAR O SISTEMA!");
    gotoxy (13,10);							// POSICIONAR LINHA E COLUNA
    mudacor (VERDE,PRETO);
    printf (" O SISTEMA FOI DESENVOLVIDO A FINS DE APRESENTACAO DO PIM");
    gotoxy (32,13);
    mudacor(BRANCO,PRETO);
    printf ("AUTORES DO SISTEMA :");
    gotoxy (25,15);
    printf ("JONATHAN SOUZA MOYANO....RA G081960 ");
    gotoxy (25,17);
    printf ("LUIZ FELIPE LUZ SANTOS...RA N029HA7");
    gotoxy (25,18);
    getchar();
    exit (0);								// FECHAR O SISTEMA
}
