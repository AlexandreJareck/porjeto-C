

void sn () { // funcao de sim ou nao para padronizar
	    textcolor(LIGHT_GREEN);
		    printf("\n      |1-.Sim|");
		textcolor(LIGHT_RED);
            printf("\n      |2-.Não|");
        textcolor(LIGHT_BLUE);
            printf("\n      ->"); 

}

void linha () {
	textcolor(BROWN);
	printf("+------------------------------------------+\n");
}


int id_existe(int ide){ //verifica se o cliente existe
 int i;
 int Retorno = 0;
 for (i = 0; i < n; i++){
  if (client[i].id == ide){
  ideCliente=i;
   Retorno = 1;
}
 }
 return Retorno;
}

int flor_existe(int cod)
{//Verifica se a flor esta cadastrada
 int i;
 int Retorno = 0;
 for (i = 0; i < n; i++)
  {
  	if (flor[i].codigo == cod)
  	{
  		codFlor=i;
   		Retorno = 1;
		} 
  }
 	return Retorno;
}




int cliente_existe(int cod){ //verifica se o cliente existe
 int i;
 int Retorno = 0;
 for (i = 0; i < n; i++){
  if (client[i].cpf == cod){
  codCliente=i;
   Retorno = 1;
}
 }
 return Retorno;
}
