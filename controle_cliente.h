
//funcao do menu de controle de clientes
void controle_cliente(){
     int op;
     system("cls");
     textcolor(LIGHT_BLUE);
  		printf("\t\t\t|************************************************|\n");
		printf("\t\t\t|*                                              *|\n");
		printf("\t\t\t|*                                              *|\n");
		printf("\t\t\t|*------------Controle de Clientes--------------*|\n");
		printf("\t\t\t|*                                              *|\n");
		printf("\t\t\t|*          1 - Cadastro de Clientes            *|\n");
		printf("\t\t\t|*          2 - Consulta de Clientes            *|\n");
		printf("\t\t\t|*          3 - Alterar cadastro de Clientes    *|\n");
		printf("\t\t\t|*          4 - Excluir cadastro de Clientes    *|\n");
		printf("\t\t\t|*                                              *|\n");		
		printf("\t\t\t|*          5 - Voltar                          *|\n");
		printf("\t\t\t|*                                              *|\n");
		printf("\t\t\t|*                                              *|\n");
		printf("\t\t\t|*                                              *|\n");
		printf("\t\t\t|************************************************|\n");     
        printf("\t\t\t                        ");scanf("%d",&op);
        switch(op)
		{
            case 1:
			{                              //opcao 1, para o usuario poder fazer cadastro de clientes
                int esc;
                    do{
					textcolor(WHITE);
                    	printf("\n Informe o ID do cliente: ");
                    textcolor(LIGHT_RED);
					    scanf("%i",&ide);
						if (id_existe(ide) == 1)
						{ //verifica se o cliente esta cadastrado
							textcolor(YELLOW);
                            printf("Cliente ja cadastrado !");
                            getch();
                            controle_cliente();                                                                                            
                        }
						else
						{
                            while(client[ideCliente].id > 0)
							{
                                ideCliente = ideCliente + 1;                          
                            }
						//client[codCliente].id = ide;
						textcolor(WHITE);                                                                      
                    		printf("\n Informe o CPF do Cliente: ");
                    	textcolor(LIGHT_RED);
                        	scanf("%d",&cod);
                        	if (cliente_existe(cod) == 1)
							{ //verifica se o cliente esta cadastrado
							textcolor(YELLOW);
                            	printf("Cliente ja cadastrado !");
                            	getch();
                            	controle_cliente();                                                                                            
                        	}
							else
							{
                            	while(client[codCliente].cpf > 0)
								{
                                	codCliente = codCliente + 1;                          
                            	}
								textcolor(WHITE);
								client[codCliente].id = ide;                                                                                                             
	                        	client[codCliente].cpf = cod;
	                            printf("\n Informe o nome: ");
	                            fflush(stdin);
	                            gets(client[codCliente].nome);
	                            printf("\n Informe o sobrenome: ");
	                            fflush(stdin);
	                            gets(client[codCliente].sobrenome);
	                            printf("\n Informe o Telefone: ");
	                            scanf("%i",&client[codCliente].telefone);
	                            printf("\n Infome o Email: ");
	                            fflush(stdin);
	                            gets(client[codCliente].email);          
                        	}
                    	}
                        textcolor(LIGHT_CYAN);
                            printf("\n Deseja cadastrar outro Cliente:");
                            sn();
                        textcolor(WHITE);
                            scanf("%i",&esc);
                            if(esc == 1)
                            {
                            	system("cls");
							}
                	}while(esc != 2);
                    	controle_cliente();
                break;
                }
                case 2:
				{                                 //menu de consulta de clientes
                	system("cls");
                    int opcao;
                textcolor(LIGHT_BLUE);
                    printf("\t\t\t|************************************************|\n");
					printf("\t\t\t|*                                              *|\n");
					printf("\t\t\t|*                                              *|\n");
					printf("\t\t\t|*------------Controle de Clientes--------------*|\n");
					printf("\t\t\t|*                                              *|\n");
					printf("\t\t\t|*            1 - Consultar por CPF             *|\n");
					printf("\t\t\t|*            2 - Listar Clientes               *|\n");
					printf("\t\t\t|*            3 - Organizar Lista de Clientes   *|\n");
					printf("\t\t\t|*                                              *|\n");		
					printf("\t\t\t|*            4 - Voltar                        *|\n");
					printf("\t\t\t|*                                              *|\n");
					printf("\t\t\t|************************************************|\n");
					textcolor(WHITE); 
                    printf("\t\t\t                     ");scanf("%d",&opcao);
                    switch(opcao)
					{
                        case 1:
						{                                                                                                 
                            int cod;
                            textcolor(LIGHT_CYAN);
                            printf("Informe o CPF da pessoa: ");
                            textcolor(LIGHT_RED);
                            scanf("%d",&cod);
                        	for(int i=0;i<n;i++)
							{                        		
                                if(client[i].cpf==cod)
								{
									linha();
									textcolor(WHITE);
									printf("ID: %i\n",client[i].id);				
                                    printf ("CPF: %i\nNome: %s\n",client[i].cpf, client[i].nome);
                                    printf ("Sobrenome: %s\nTelefone: %i\n", client[i].sobrenome, client[i].telefone); 
									printf("Email: %s\n",client[i].email);         
                                }                                                
                            }
                            linha();
                            getch();
                        	controle_cliente();                                  
                            break;
                        }
                        case 2:
						{                                     //exibe todos os clientes na ordem da posisao dele
                            system("cls");
                            for(int i=0;i<n;i++)
							{
                                if(client[i].cpf>0)
								{	linha();
									textcolor(WHITE);
									printf("ID: %i\n",client[i].id);									
                                    printf ("CPF: %i\nNome: %s\n",client[i].cpf, client[i].nome);
                                    printf ("Sobrenome: %s\nTelefone: %i\n", client[i].sobrenome, client[i].telefone); 
									printf("Email: %s\n",client[i].email);									       
                                }								                                               
                            }
                            linha(); 
                        }
                        	getch();
                        	controle_cliente();
                    	break;
						case 3:
						{                                       //opcao 3, imprime os clientes na ordem crecente do cpf // shell sort
                            int i , j , valor,c;
                            char valor1[50],valor2[50], valor4[50];
                            int valor3,valor5;
                            int gap = 1;
                            do{
                                gap = 3*gap+1; // calcula o gap inicial
                            } while(gap < n);
                            do {
                                gap = gap/3; // atualiza o valor de gap
                                for(i = gap; i < n; i++) 
								{
									valor5 = client[i].id;
                                    valor = client[i].cpf;
                                    strcpy(valor1, client[i].nome);
                                    strcpy(valor2, client[i].sobrenome);
                                    valor3 =client[i].telefone;
                                    strcpy(valor4, client[i].email);                                                        
                                    j = i - gap;
                                    while (j >= 0 && valor5 < client[j].id) // efetua comparações entre os elemntos com distancia gap
									{
										client[j + gap].id = client[j].id;
                                        client[j + gap].cpf = client[j].cpf;
                                        strcpy(client[j + gap].nome,client[j].nome);
                                        strcpy(client[j + gap].sobrenome,client[j].sobrenome);
                                        client[j + gap].telefone = client[j].telefone;
                                        strcpy(client[j + gap].email,client[j].email);
                                        j = j - gap;
                                    }
                                    client[j + gap].id = valor5;
                                	client[j + gap].cpf = valor;
                                    strcpy(client[j + gap].nome, valor1);
                                    strcpy(client[j + gap].sobrenome, valor2);
                                    client[j + gap].telefone = valor3;
                                	strcpy(client[j + gap].email, valor4);
                                }
                            } while ( gap > 1);
                            system ("cls");                                                    
                            for (c=0;c<n;c++)
							{
                            	if (client[c].telefone > 0)
                                    {
                                    	linha();
                                    	textcolor(WHITE);
										printf("ID: %i\n",client[c].id);                                    	
                                        printf ("CPF: %d\nNome: %s\n",client[c].cpf, client[c].nome);
                                        printf ("Sobrenome: %s\nTelefone: %i\n", client[c].sobrenome, client[c].telefone); 
										printf("Email: %s\n",client[c].email);										   
									}
                            }
                            linha();
                            printf ("\n\n\n");                                                
                            getch();
                        	controle_cliente();                                   
                    	break;
                        }
                        case 4:
						{                        //opcao 4, volta para o menu do controle de flores
                            getch();
                        	controle_cliente();                                   
                        break;
                        }         
                                    
                	}
                }
                case 3:
				{                             //opcao 3, funcao para alterar os dados dos clientes
                	int cond;
                    do{
 						textcolor(LIGHT_CYAN);
                    	printf("Informe o CPF do cliente a ser alterado: ");
                    	textcolor(LIGHT_RED);
                        scanf("%d",&aux);
                        if(cliente_existe(aux) != 1)
						{
							textcolor(LIGHT_RED);
                            printf("Cliente inexistente !\n");
                            getch();
                            controle_cliente();                                 
                        }
                        else
						{   
						textcolor(WHITE);
							printf("ID: %i\n",client[codCliente].id);                                       
		                	printf("Nome: %s\n",client[codCliente].nome);
		                    printf("Sobrenome: %s\n",client[codCliente].sobrenome);
		                    printf("Telefone: %i\n",client[codCliente].telefone);
		                    printf("Email: %s\n",client[codCliente].email);		                    
		                    textcolor(WHITE);
                    	printf("\n Informe o novo ID do cliente: ");
                    textcolor(LIGHT_RED);
					    scanf("%i",&ide);
						if (id_existe(ide) == 1)
						{ //verifica se o cliente esta cadastrado
							textcolor(YELLOW);
                            printf("Cliente ja cadastrado !");
                            getch();
                            controle_cliente();                                                                                            
                        }
						else
						{                   						
						textcolor(WHITE);                                                                      
                    		printf("\n Informe o novo CPF do Cliente: ");
                    	textcolor(LIGHT_RED);
                        	scanf("%d",&cod);
                        	if (cliente_existe(cod) == 1)
							{ //verifica se o cliente esta cadastrado
							textcolor(YELLOW);
                            	printf("Cliente ja cadastrado !");
                            	getch();
                            	controle_cliente();                                                                                            
                        	}
							else
							{
								textcolor(WHITE);
								client[codCliente].id = ide;                                                                                                             
	                        	client[codCliente].cpf = cod;
	                            printf("\n Informe o novo nome: ");
	                            fflush(stdin);
	                            gets(client[codCliente].nome);
	                            printf("\n Informe o novo sobrenome: ");
	                            fflush(stdin);
	                            gets(client[codCliente].sobrenome);
	                            printf("\n Informe o novo Telefone: ");
	                            scanf("%i",&client[codCliente].telefone);
	                            printf("\n Informe o novo Email: ");
	                            fflush(stdin);
	                            gets(client[codCliente].email);          
                        	}
                    	}
		                    printf("\n Deseja alterar outro Cliente?\n");
		                    sn();
		                    scanf("%i",&cond);
	                    }
                    }while(cond!=2);
                        controle_cliente();
                break;
                }
                case 4:
				{                   //opcao 4, o usuario informa o codigo do cliente, e confirma a exclusao do mesmo  
				int cond,resp;                                                                  
                    do{  
					textcolor(LIGHT_CYAN);                                         
	                    printf("Informe o cpf do Cliente a ser excluido: ");
	                    textcolor(LIGHT_RED);
	                    scanf("%d",&cod);
	                    if (cliente_existe(cod) != 1)
						{ //verifica se o cliente esta cadastrado
						textcolor(YELLOW);
	                        printf("Cliente inexistente !");
	                        getch();
	                        controle_cliente();
	                    }
						else
						{
							linha();
							textcolor(WHITE);
							printf("ID: %i\n",client[codCliente].id);
	                        printf("Nome: %s\n",client[codCliente].nome);
	                        printf("Sobrenome: %s\n",client[codCliente].sobrenome);
	                        printf("Telefone: %i\n",client[codCliente].telefone);
	                    	printf("Email: %s\n",client[codCliente].email);
	                        printf("\n Deseja realmente excluir este cadastro?\n");
	                        sn();
	                        scanf("%i",&resp); 
							
                        }
                        if(resp=1)
						{
							client[codCliente].id = 0;  
                        	client[codCliente].cpf=0;            
                            strcpy (client[codCliente].nome,"");
                            strcpy (client[codCliente].sobrenome,"");
                            client[codCliente].telefone=0;;
                            strcpy (client[codCliente].email,"");
                                              
                        }   
						textcolor(LIGHT_CYAN);                                  
                            printf("\n Deseja excluir outro Cliente?\n");
                            sn();
                            textcolor(WHITE);
                            scanf("%i",&cond);
                    }while(cond!=2);
                        controle_cliente();
                    break;
                }
                case 5: 
				{                      //opcao 5, volta para o menu principal
                	menu();
                	break;
            	}
                default: 
				{
					textcolor(LIGHT_RED);
                    printf("Opcao Invalida");
                    getch();
                    controle_cliente();
                }  
        }
}
