#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>    //	 BIBLIOTECAS
#include <conio.h>
#include <time.h>
#include <locale.h>
#include <windows.h>



#define n 100 //Constante
enum DOS_COLORS {
    BLACK, BLUE, GREEN, CYAN, RED, MAGENTA, BROWN,                  // ENUM PARA NOMEAR AS CORES
    LIGHT_GRAY, DARK_GRAY, LIGHT_BLUE, LIGHT_GREEN, LIGHT_CYAN,
    LIGHT_RED, LIGHT_MAGENTA, YELLOW, WHITE };
    
    void textcolor (DOS_COLORS iColor)    // FUÇÃO QUE CHAMA UMA COR NOMEADA
{
    HANDLE hl = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO bufferInfo;
    BOOL b = GetConsoleScreenBufferInfo(hl, &bufferInfo);
    bufferInfo.wAttributes &= 0x00F0;
    SetConsoleTextAttribute (hl, bufferInfo.wAttributes |= iColor);
}


// CABEÇALHOS DAS FUNÇÕES


void menu_2();                     //Func menu de entrada
void resenha();                     //func de apresentação
void controle_cliente();            //Menu controle de cliente
void menu();                      //func que chama o menu principal
void sair();                      //func para saida do programa
void controle_venda();             //func do menu de vendas
void controle_flores();           //menu do control de produtos
void bem_vindo();                  //funcade abertura do programa
int flor_existe(int cod);       //Funçao verifica se o produto esta no banco de dados
int cliente_existe(int cod);        //Funçao verifica se o funcionario esta no banco de dados
int id_existe(int ide);
void sn();
void linha ();


//definindo estruturas para armaznamento de, pessoas, produtos, e registro de vendas
typedef struct clientes{
	int id;
    int cpf;
    char nome[50];
    char sobrenome[50];
    int telefone;
    char email[50];
};

typedef struct flores{
    int codigo;
    float preco_compra;
    float preco_venda;
    char descricao[50];
    int quantidade;
    char data_compra[50];
};
typedef struct vendas{
    int lista;
    double total;
};

    struct clientes client[n];
    struct flores flor[n];
    int QtdFlorCad = 2;
    int quantidade=n;
    int qnt=0;
    int cod=0;
    int ide=0;
    int aux=0;
    int codFlor=0;
    int codCliente=0;
    int ideCliente=0;
    float valor, total=0, saldo=0;







 






















