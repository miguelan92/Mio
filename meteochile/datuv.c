#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
  int ix;
  char str_hora[500], str_aux[500];
  char *line = NULL, *pch = NULL;
  size_t len = 0;
  ssize_t read;
  FILE *fp;
  char Variable;
  int c;
  int id; 
  int ano;
  int mes;
  int dia;
  int encontramos_hora = 0; 


   memset( str_hora, '\0', sizeof(char)*500 );
   memset( str_aux, '\0', sizeof(char)*500 );
   
  fp = fopen(argv[1], "r");
  id = atoi (argv[1]+5);
  ano = atoi (argv[1]+12);
  mes = atoi (argv[1]+17);
  dia = atoi (argv [1]+20);  
  //printf ("[%i][%i][%i][%i]",id ,ano ,mes ,dia); 
  //return 0;
  if(fp == NULL)
  {
    printf("Error: al abrir el archivo [%s]\n", argv[1]);
    return(-1);
  }

	

  for(ix = 0; (read = getline(&line, &len, fp)) != -1; ix++)
  {
    pch = line;
	
	if(encontramos_hora > 0)
	{
	//	printf("[%s]\n", line);
	//	++encontramos_hora;
		pch = strstr(line, "<td class=\"text-right text-danger\">"); //<td class="text-right">

		if(pch != NULL)
		{
			//printf("[%s][%s]\n", pch, line);
			sscanf(pch, "<td class=\"text-right text-danger\"> %[^<]", str_aux);
			printf("%s\n", str_aux);
			//if(encontramos_hora == 2)
			//{
			encontramos_hora = 0;
			//}
		}
		continue;
	}

	for(; (pch = strstr(pch, "<td class=\"text-center\">")) != NULL;)
	{	    
		sscanf(pch, "<td class=\"text-center\"> %[^<]", str_hora);
			 
		if (str_hora != NULL)
		{
			encontramos_hora = 1;
		}

		printf("%i|%i|%i|%i|%s|", id, ano, mes, dia, str_hora);

		pch += 8;
		
		memset( str_hora, '\0', sizeof(char)*500 );
		memset( str_aux, '\0', sizeof(char)*500 );
		break;
	}
  }
  fclose(fp);
  
  return 0;
}
