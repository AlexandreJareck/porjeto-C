
// CONTROLE DE FLORES

void controle_flores(){
int op;
		system("cls");
		textcolor(LIGHT_MAGENTA);
        printf("\t\t\t|************************************************|\n");
		printf("\t\t\t|*                                              *|\n");
		printf("\t\t\t|*                                              *|\n");
 		printf("\t\t\t|*------------Controle das Flores---------------*|\n");
		printf("\t\t\t|*                                              *|\n");
		printf("\t\t\t|*            1 - Cadastro das Flores           *|\n");
		printf("\t\t\t|*            2 - Consultar Flor                *|\n");
 		printf("\t\t\t|*            3 - Listar Flores                 *|\n");
		printf("\t\t\t|*            4 - Alterar cadastro da Flor      *|\n");		
		printf("\t\t\t|*            5 - Excluir cadastro da Flor      *|\n");
		printf("\t\t\t|*                                              *|\n");
		printf("\t\t\t|*            6 - Voltar                        *|\n");
		printf("\t\t\t|*                                              *|\n");
		printf("\t\t\t|************************************************|\n");
		textcolor(LIGHT_CYAN);
        printf("\t\t\t                     ");scanf("%d",&op);
		switch(op)
		{
            case 1:
			{//Cadastro de produto
                int cond;
                    do{   
					textcolor(LIGHT_CYAN);                                                                   
                        printf("\n Informe o codigo da Flor\n");
                        textcolor(LIGHT_RED);
                        scanf("%d",&cod);
                        if (flor_existe(cod) == 1){ //verifica se a flor esta cadastrado    
						textcolor(YELLOW);                                                                                                                                                 
                            	printf("Flor ja cadastrada !");
                        		getch();
                                controle_flores();
                        }else{
                            while(flor[codFlor].codigo>0){
                            	codFlor=codFlor+1;                          
                            }
                            textcolor(WHITE);
			                flor[codFlor].codigo=cod;                                            
			                printf("\n Informe o nome da Flor \n");
			                fflush(stdin);
			                gets(flor[codFlor].descricao);
			                printf("\n Informe a quantidade em estoque \n");
			                scanf("%d",&flor[codFlor].quantidade);
			                printf("\n Informe o Valor de Compra \n");
			                scanf("%f",&flor[codFlor].preco_compra);
			                printf("\n Informe o Valor de Venda \n");
			                scanf("%f",&flor[codFlor].preco_venda);
			                printf("\n Informe a data de compra da Flor \n");
			                fflush(stdin);
			                gets(flor[codFlor].data_compra);
                                                 
                        }
                        textcolor(LIGHT_CYAN);
	                        printf("\n Deseja cadastrar outra Flor?");
	                        sn();
	                        textcolor(WHITE);
	                        scanf("%i",&cond);
                    } while(cond!=2);
                    	controle_flores();
            break;
            }
                case 2:
				{//Consultar o cadastro da flor                               
                    system("cls");
                    int opcao;
                    textcolor(LIGHT_MAGENTA);
                    printf("\t\t\t|************************************************|\n");
					printf("\t\t\t|*                                              *|\n");
					printf("\t\t\t|*                                              *|\n");
 					printf("\t\t\t|*------------Controle das Flores---------------*|\n");
					printf("\t\t\t|*                                              *|\n");
					printf("\t\t\t|*            1 - Consultar por Código          *|\n");
					printf("\t\t\t|*            2 - Orderna por Código            *|\n");
					printf("\t\t\t|*                                              *|\n");
					printf("\t\t\t|*            3 - Voltar                        *|\n");
					printf("\t\t\t|*                                              *|\n");
					printf("\t\t\t|************************************************|\n");
					textcolor(LIGHT_CYAN);
                    printf("\t\t\t                      ");scanf("%d",&opcao);
                    switch (opcao){
                        case 1:
						{                //procura a flor  por codigo 
						textcolor(LIGHT_CYAN);                                                                                
                            printf("Informe o codigo da Flor \n");
                            textcolor(LIGHT_RED);
                            scanf("%d",&cod);
                            for(int i=0;i<n;i++)
							{                                            
                                if(flor[i].codigo==cod)
								{
									linha();
									textcolor(WHITE);
                                    printf ("\nCodigo: %d\nNome: %s\n",flor[i].codigo, flor[i].descricao);
                                    printf ("Quantidade: %d\nValor de compra: %.2f\nValor de venda: %.2f\nData de compra: %s\n\n", flor[i].quantidade, flor[i].preco_compra, flor[i].preco_venda,flor[i].data_compra);
                                }                                                
                            }
                            linha();
                            getch();
                            controle_flores();                                   
                            break;                                           
                                case 2:
								{ //Metodo que ordena as flores
                                    int i , j , valor,c;
                                    char valor1[20],valor4[50];
                                    float valor2,valor3;
                                    int gap = 1;
                                    	do {
                                    		gap = 3*gap+1;
                                    	} while(gap < n);
                                        do {
                                            gap /= 3;
                                            for(i = gap; i < n; i++) 
											{
                                            	valor =flor[i].codigo;
                                                strcpy(valor1, flor[i].descricao);
                                                strcpy(valor4, flor[i].data_compra);
                                                valor2 =flor[i].preco_compra;
                                                valor3 =flor[i].preco_venda;
                                                j = i - gap;
                                                    while (j >= 0 && valor < flor[j].codigo) 
													{
                                                        flor[j + gap].codigo = flor[j].codigo;
                                                        strcpy(flor[j + gap].descricao,flor[j].descricao);
                                                        strcpy(flor[j + gap].data_compra,flor[j].data_compra);
                                                        flor[j + gap].preco_compra = flor[j].preco_compra;
                                                        flor[j + gap].preco_venda = flor[j].preco_venda;
                                                        j -= gap;
                                                    }
                                                    flor[j + gap].codigo = valor;
                                                    strcpy(flor[j + gap].descricao, valor1);
                                                    strcpy(flor[j + gap].data_compra, valor4);
                                                    flor[j + gap].preco_compra = valor2;
                                                    flor[j + gap].preco_venda = valor3;
                                            }
                                        } while ( gap > 1);
                                            system ("cls");
                                                    
                                            for (c=0;c<n;c++)
											{
                                                if (flor[c].preco_compra > 0)//Exibe as flores ordenadas, somente as cadastradas
                                                    {
                                                    	linha();
                                                    	textcolor(WHITE);
                                                    	printf ("Codigo: %d\nNome: %s\n",flor[c].codigo, flor[c].descricao);
                                                        printf ("Quantidade: %d\nValor de compra: %.2f\nValor de venda: %.2f\n", flor[c].quantidade, flor[c].preco_compra, flor[c].preco_venda);
                                                        printf ("Data de compra: %s\n\n", flor[c].data_compra );
													}
                                            }  
											linha(); 
                                	printf ("\n\n\n");                                                
                                	getch();
                                	controle_flores();                                   
                                	break;
                                }
                                case 3:
								{ //voltar
                                    getch();
                                    controle_flores();                                   
                                    break;
                                }         
                                    
                        }
                                }
                                case 3:
								{//Exibir todos as Flores
                                     system("cls");
                                                 for(int i=0;i<n;i++)
												 {
                                                         if(flor[i].codigo>0)
														 {
														 	linha();
														 	textcolor(WHITE);
                                                            printf ("Codigo: %d\nNome: %s\n",flor[i].codigo, flor[i].descricao);
                                                            printf ("Quantidade: %d\nValor de compra: %.2f\nValor de venda: %.2f\n", flor[i].quantidade, flor[i].preco_compra, flor[i].preco_venda);
                                                         	printf ("Data de compra: %s\n", flor[i].data_compra );
														 }                                                
                                                 }
                                                 linha();
                                }
                                                 getch();
                                                 controle_flores();
                                                  break;
                }
                                                     
                case 4:
				{//Altera um cadastro de Flores
                	int cond;
                    do{
 					textcolor(LIGHT_CYAN);
                        printf("Informe o codigo da flor a ser alterado\n");
                        textcolor(LIGHT_RED);
                        scanf("%d",&cod);
                        if (flor_existe(cod) != 1)
						{ //verifica se o codigo da flor esta cadastrado
						textcolor(YELLOW);
                        	printf("Produto inexistente !");
                            getch();
                            controle_flores();
                                 
                        }
                        else
						{
							textcolor(WHITE);
                        	printf("Nome: %s\n",flor[codFlor].descricao);
                            printf("Quantidade: %d\n",flor[codFlor].quantidade);
                            printf("Valor de Compra: %.2f\n",flor[codFlor].preco_compra);
                            printf("Valor de Venda: %.2f\n",flor[codFlor].preco_venda);
                            printf("Data de compra: %s\n\n",flor[codFlor].data_compra);
                        	printf("\n Informe o novo codigo da flor\n");
                            scanf("%d",&flor[codFlor].codigo);
                            printf("\n Informe o novo nome da flor\n");
                            fflush(stdin);
                            gets(flor[codFlor].descricao);
                            printf("\n Informe a nova quantidade da flor\n");
                            scanf("%i",&flor[codFlor].quantidade);
                            fflush(stdin);
                            printf("\n Informe a nova Data de compra\n"); fflush(stdin);
                            scanf("%s",&flor[codFlor].data_compra);
                            printf("\n Informe o novo Valor de Compra\n");
                            scanf("%f",&flor[codFlor].preco_compra);     
                            printf("\n Informe o novo Valor de Venda\n");
                            scanf("%f",&flor[codFlor].preco_venda);                                           
                            fflush(stdin);                                          
                        }
                        textcolor(LIGHT_CYAN);
                            printf("\n Deseja alterar outra Flor?");
                            sn();
                            textcolor(WHITE);
                            scanf("%i",&cond);
                    }while(cond!=2);
                        controle_flores();
                break;
                }
                case 5:
				{//Excuir o cadastro da flor
                    int cond,resp;                                                                     
                        do{ 
						textcolor(LIGHT_CYAN);                                          
                            printf("Informe o codigo da Flor a ser excluido\n");
                            textcolor(LIGHT_RED);
                            scanf("%d",&cod);
                            if (flor_existe(cod) != 1)
							{ //verifica se a flor esta cadastrada
							textcolor(YELLOW);
                                printf("Flor inexistente !");
                                getch();
                                controle_flores();
                            }
							else
							{
								linha();
								textcolor(WHITE);
                            	printf ("\nCodigo: %d\nNome: %s\n",flor[codFlor].codigo, flor[codFlor].descricao);
                                printf ("Quantidade: %d\nValor de compra: %.2f\nValor de venda %.2f\n Validade: %s\n\n", flor[codFlor].quantidade, flor[codFlor].preco_compra, flor[codFlor].preco_venda,flor[codFlor].data_compra);
                                printf("\n Deseja realmente excluir este produto?\n");
                                sn();
                                scanf("%i",&resp);
                                linha();
                            }  
                            if(resp=1)
							{  
                                flor[codFlor].codigo=0;
                                strcpy (flor[codFlor].descricao,"");
                                flor[codFlor].quantidade=0;
                                flor[codFlor].preco_venda=0;
                                flor[codFlor].preco_compra=0;
                                strcpy (flor[codFlor].data_compra,"");
                            }   
							textcolor(LIGHT_CYAN);                                  
                            	printf("\n Deseja excluir outro produto?");
                            	sn();
                            	textcolor(WHITE);
                                scanf("%i",&cond);
                        }while(cond!=2);
                        controle_flores();
                        break;
                    }
                    case 6: 
					{ //Voltar
                        menu();
                        getch();
                        controle_flores();
                        break;
                    }
                    default: 
					{
						textcolor(LIGHT_RED);
                        printf("Opcao Invalida");
                        getch();
                        controle_flores();
                    }  
        }
}
