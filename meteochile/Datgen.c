#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
  int ix;
  char str_ano[500], str_dia[500], str_mes[500], str_hora[500], str_temp3[500], str_ptoroc[500], str_hum[500], str_razmez[500], str_pres[500], str_presmar[500], str_vient[500], str_agua[500], str_aux[500];
  char *line = NULL, *pch = NULL;
  size_t len = 0;
  ssize_t read;
  FILE *fp,*fichero;
  char Variable;
  int c;
  int dia;
  int diadato;
  
  int encontramos_fecha = 0; 

   //memset( str_fecha, '\0', sizeof(char)*500 );
   memset( str_temp3, '\0', sizeof(char)*500 );
   memset( str_ptoroc, '\0', sizeof(char)*500 );
   memset( str_hum, '\0', sizeof(char)*500 );
   memset( str_razmez, '\0', sizeof(char)*500 );
   memset( str_pres, '\0', sizeof(char)*500 );
   memset( str_presmar, '\0', sizeof(char)*500 );
   memset( str_vient, '\0', sizeof(char)*500 );
   memset( str_agua, '\0', sizeof(char)*500 );

   dia = atoi (argv[1]+25);
   //printf("[%i]\n",dia);
   //return 0;

  fp = fopen(argv[1], "r");

  if(fp == NULL)
  {
    printf("Error: al abrir el archivo [%s]\n", argv[1]);
    return(-1);
  }

	

  for(ix = 0; (read = getline(&line, &len, fp)) != -1; ix++)
  {
    pch = line;

	if(encontramos_fecha > 0)
	{
		++encontramos_fecha;
		pch = strstr(pch, "<td class=\"text-right\">");
		sscanf(pch, "<td class=\"text-right\"> %[^<]", str_aux);
		
		
		
		
		if(encontramos_fecha == 2)
		{
			//(c=1)
			printf("%s|", str_aux);
		}
		else if(encontramos_fecha == 3)
		{
			//(c=2)
		}
		else if(encontramos_fecha == 4)
		{
			//(c=3)
		}
		else if(encontramos_fecha == 5)
		{
			printf("%s|", str_aux);
		}
		else if(encontramos_fecha == 6)
		{
			//(c=5)
		}
		else if(encontramos_fecha == 7)
		{
			printf("%s|", str_aux);
		}
		else if(encontramos_fecha == 8)
		{
			//(c=7)
		}
		else if(encontramos_fecha == 9)
		{
			if(strcmp(str_aux,"Calma")==0)
				printf("0/0");
			else if (strcmp(str_aux,"Calma")!=0)
				printf("%s", str_aux);
		}
		else if(encontramos_fecha == 10)
		{
			//(c=9)
			encontramos_fecha = 0;
			printf("\n");
		}		
		
		
		continue;
		
	}

	for(; (pch = strstr(pch, "<td class=\"text-center\">")) != NULL;)
	{	    
		sscanf(pch, "<td class=\"text-center\"> %[^-]-%[^-]-%[^ ] %[^:]", str_dia, str_mes, str_ano, str_hora);
		diadato=atoi(str_dia);	 
		if (str_ano != NULL && diadato==dia)
		{
			
			
			encontramos_fecha = 1;
		
			printf("%i|%s|%s|%s|", diadato, str_mes, str_ano, str_hora);
		}
		pch += 8;
		
		memset( str_temp3, '\0', sizeof(char)*500 );
		memset( str_ptoroc, '\0', sizeof(char)*500 );
		memset( str_hum, '\0', sizeof(char)*500 );
		memset( str_razmez, '\0', sizeof(char)*500 );
		memset( str_pres, '\0', sizeof(char)*500 );
		memset( str_presmar, '\0', sizeof(char)*500 );
		memset( str_vient, '\0', sizeof(char)*500 );
		memset( str_agua, '\0', sizeof(char)*500 );
		break;
	}
		
  }
 
  fclose(fp);
  return 0;
}
