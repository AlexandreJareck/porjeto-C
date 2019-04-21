


void menu_2(){
     int op;
     system("cls");
     textcolor(LIGHT_BLUE);
		printf("\t\t\t|************************************************|\n");
		printf("\t\t\t|*                                              *|\n");
		printf("\t\t\t|*                                              *|\n");
		printf("\t\t\t|*---------------Menu Principal-----------------*|\n");
		printf("\t\t\t|*                                              *|\n");
		printf("\t\t\t|*               1 - Entrar                     *|\n");
		printf("\t\t\t|*               2 - Resenha                    *|\n");
		printf("\t\t\t|*                                              *|\n");
		printf("\t\t\t|*               3 - Sair                       *|\n");
		printf("\t\t\t|*                                              *|\n");
		printf("\t\t\t|*                                              *|\n");
		printf("\t\t\t|*                                              *|\n");
		printf("\t\t\t|************************************************|\n");  		     
		printf("\t\t\t                      ");scanf("\t\t%d",&op);
switch(op){
                case 1: {
                         menu();                //opcao 1, abre o menu principal
                         getch();
                         menu_2();
                         break;
                }
                case 2: {                            //opcao 2, abre as informacoes sobre os academicos
                         resenha();
                         getch();
                         menu_2();
                         break;
                }
                case 3: {                             //opcao de saida do programa
                         sair();
                         getch();
                         break;
                }
                default: { 
				textcolor(LIGHT_RED);          //informa quando o usuario digita uma opcao invalida
                          printf("Opcao Invalida");
                          getch();
                          menu_2();
                         }
                }
}




//func do entrada do menu principal
void menu(){
     int op;
     system("cls");
textcolor(YELLOW);
		printf("\t\t\t|************************************************|\n");
		printf("\t\t\t|*                                              *|\n");
		printf("\t\t\t|*                                              *|\n");
		printf("\t\t\t|*----------------Menu Principal----------------*|\n");
		printf("\t\t\t|*                                              *|\n");
		printf("\t\t\t|*          1 - Vendas                          *|\n");
		printf("\t\t\t|*          2 - Controle de Clientes            *|\n");
		printf("\t\t\t|*          3 - Controle de Flores              *|\n");
		printf("\t\t\t|*          4 - Voltar                          *|\n");
		printf("\t\t\t|*                                              *|\n");
		printf("\t\t\t|*                                              *|\n");
		printf("\t\t\t|************************************************|\n");
	textcolor(LIGHT_RED);	
		printf("\t\t\t                     ");scanf("%d",&op);
		
     switch(op)
	{
        case 1: 
		{                                        //opcao 1, faz entrada no meuno do controle de vendas
            system("cls");
            controle_venda(); // chama a função de controle de vendas
            getch();
            menu();
            break;
        }
        case 2: 
		{                                        //opcao 2, faz entrada do menu de controle de clientes cadastrados
            controle_cliente(); // chama a função de controle de clientes
            getch();
            menu(); // chama a função de menu
            break;
        }
        case 3: 
		{                                        //opcao 3 faz entrada do menu de controle de flores
            controle_flores(); // chama a função de controle de flores
            getch();
            menu(); // chama a função de menu
            break;
        }
        case 4: 
		{                                      //opcao 4, voltar para o menu de entrada
            menu_2();  // menu_2 (entrar - sair - sobre )
            getch();
            menu();
            break;
        }
        default: 
		{
			textcolor(LIGHT_RED);                                     //caso o usuario digite uma opcao nao valida, retornar ao menu, e avisa o usuario
            printf("Opcao Invalida");
            getch();
            menu();
        }
    }
}              




//funcao de saida do programa
void sair(){
   system("cls");
   textcolor(MAGENTA);
   printf("Obrigado por utilizar nosso sistema"); // aqui fazer uma parada massa 
   getch();
   exit (0);
}
