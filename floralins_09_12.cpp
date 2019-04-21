#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <conio.h>
#include <time.h>
#include <locale.h>
#include <windows.h>
#include "funcao.h"
#include "flor.h"
#include "ajudas.h"
#include "controle_cliente.h"
#include "controle_flor.h"
#include "resenha.h"
#include "menus.h"
#include "controle_venda.h"


    
//BLOCO PRINCIPAL, entrada dos clientes e produtos padroes
int main()
{
//funcionarios padrao

setlocale(LC_ALL, "Portuguese");

// clientes
// cadastro 01
	client[0].id = 9;
    client[0].cpf=999;
    strcpy (client[0].nome,"Paulo");
    strcpy (client[0].sobrenome,"Hainoz");
    client[0].telefone=99999;
    strcpy (client[0].email,"paulo@email.com");
    
    // cadastro 02
    client[1].id = 2;
    client[1].cpf=222;
    strcpy (client[1].nome,"Lucas");
    strcpy (client[1].sobrenome,"Bittencourt");
    client[1].telefone=88888;
    strcpy (client[1].email,"Lucas@email.com");
    
    // cadastro 03
   	client[2].id = 8;
    client[2].cpf=888;    
    strcpy (client[2].nome,"Leonardo");
    strcpy (client[2].sobrenome,"Santiago");
    client[2].telefone=77777;
    strcpy (client[2].email,"leonardo@email.com");
    
   // cadastro 04 
   	client[3].id = 1;
    client[3].cpf=111;
    strcpy (client[3].nome,"Alexandre");
    strcpy (client[3].sobrenome,"Jareck");
    client[3].telefone=77777;
    strcpy (client[3].email,"alexandre@email.com");
    
    
//flores   
// cadastro 01
    flor[0].codigo=15;
    strcpy (flor[0].descricao,"Rosa(s) Vermelha(s)");
    flor[0].quantidade=68;
    flor[0].preco_venda=5;
    flor[0].preco_compra=2.5;
    strcpy (flor[0].data_compra,"01/12/2018");
    
    // cadastro 02
    flor[1].codigo=5;
    strcpy (flor[1].descricao,"Girassol");
    flor[1].quantidade=50;
    flor[1].preco_venda=6;
    flor[1].preco_compra=3.5;
    strcpy (flor[1].data_compra,"01/12/2018");
    
    // cadastro 03
    flor[2].codigo=1;
    strcpy (flor[2].descricao,"Rosa(s) Amarelas(s)");
    flor[2].quantidade=13;
    flor[2].preco_venda=8;
    flor[2].preco_compra=4.5;
    strcpy (flor[2].data_compra,"01/12/2018"); 
    bem_vindo();
}











