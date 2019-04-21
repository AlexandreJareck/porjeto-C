


//func do controle de vendas   // CONTROLE DE VENDAS 
void controle_venda(){
     system("cls");
     int op,quant;
     int esc;
    textcolor(LIGHT_BLUE);
		printf("\t\t\t|************************************************|\n");
		printf("\t\t\t|*                                              *|\n");
		printf("\t\t\t|*                                              *|\n");
		printf("\t\t\t|*--------------Controle de venda---------------*|\n");
		printf("\t\t\t|*                                              *|\n");
		printf("\t\t\t|*          1 - Cadastrar nova venda            *|\n");
		printf("\t\t\t|*          2 - Saldo do dia                    *|\n");
		printf("\t\t\t|*                                              *|\n");
		printf("\t\t\t|*          3 - Voltar                          *|\n");
		printf("\t\t\t|*                                              *|\n");
		printf("\t\t\t|*                                              *|\n");
		printf("\t\t\t|*                                              *|\n");
		printf("\t\t\t|************************************************|\n"); 
		textcolor(LIGHT_RED);    
        printf("\t\t\t                     ");scanf("%d",&op);
     
     switch(op)
	{
         case 1: 
		{                                         //func para efetuar venda
            int i=0;
            do
			{
            	system("cls");
				textcolor(WHITE);  
            	printf("Informe o codigo da Flor: ");
            	textcolor(LIGHT_RED);
            	scanf("%i",&cod);
            	if (flor_existe(cod) != 1)
				{ //verifica se a flor esta cadastrada
            		textcolor(YELLOW);
                	printf("Produto inexistente !");
                	getch();
                	controle_venda();
            	}
				else
				{
					textcolor(WHITE);                 
                	printf("Produto:\t\t%s\nValor Unitario\t\t%.2f\nQuantidade em estoque\t%d\n",flor[codFlor].descricao,flor[codFlor].preco_venda,flor[codFlor].quantidade);                
                	printf("Informe a quantidade de %s a ser vendido: ",flor[codFlor].descricao);
                	textcolor(LIGHT_RED);
                	scanf("%i",&quant);
                	
                	if(quant < 0)
	                {
	                	printf("Quantidade inexistente!!\n");
	                	getch();
	                	controle_venda();
					}
	                if(quant<=flor[codFlor].quantidade)
					{                                                     
	                    valor = quant*flor[codFlor].preco_venda;
	                    total = total + valor;
	                    
	                    flor[codFlor].quantidade = flor[codFlor].quantidade-quant;
	                }					
					else if(quant>flor[codFlor].quantidade)
					{
						textcolor(LIGHT_RED);
	                    printf("Quantidade insuficiente em estoque\n");
	                    getch();
	                    controle_venda();                                                    
	                }
					else
					{
						printf("Produto esgotado!!\n");
						getch();
						controle_venda();
					}


					                                                            
            		textcolor(LIGHT_CYAN);
            		printf("\nSub total:%.2f\n",total);
            		textcolor(YELLOW);
            		printf("Deseja finalizar a venda ?");
					sn();
					textcolor(LIGHT_BLUE);     
            		scanf("%i",&esc);
            		
            	}
            	
            }while(esc != 1);
            	textcolor(LIGHT_RED);
            	printf("Total a pagar: R$%.2f",total);
            	saldo = saldo + total;
            	total=0;
            	getch();
            	controle_venda();   
        break;
        }
            case 2:
			{ 
				textcolor(LIGHT_GREEN);                          //opcao 2, imprime o saldo do dia
                printf("O saldo do dia e: R$%.2f\n",saldo);
                getch();
                controle_venda();   
                break;   
            }
            	case 3:
				{                             //opcao 3, volta para o menu
                	menu();   
                	break;   
            	}   
            		default: 
					{  
						textcolor(LIGHT_RED);                  // se usuario digitiar uma opcao que não seje valida
                		printf("Opcao Invalida");
               		 	getch();
                		controle_venda();
            		}
    }
}
