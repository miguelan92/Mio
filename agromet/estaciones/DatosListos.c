#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
  int ix;
  char str_id[500], str_lat[500], str_long[500], str_nombre[500];
  char *line = NULL, *pch = NULL;
  size_t len = 0;
  ssize_t read;
  FILE *fp,*fichero,*fichero2;

   memset( str_id, '\0', sizeof(char)*500 );
   memset( str_lat, '\0', sizeof(char)*500 );
   memset( str_long, '\0', sizeof(char)*500 );
   memset( str_nombre, '\0', sizeof(char)*500 );

  fp = fopen(argv[1], "r");

  if(fp == NULL)
  {
    printf("Error: al abrir el archivo [%s]\n", argv[1]);
    return(-1);
  }
fichero = fopen("Estaciones.txt","wt");
	//	fichero2 = fopen("DatosdeEstacion/SoloId.txt","wt");

  for(ix = 0; (read = getline(&line, &len, fp)) != -1; ix++)
  {
    pch = line;

    for(; (pch = strstr(pch, "estacion")) != NULL;)
    {	    
      sscanf(pch, "estacion id=\"%[^\"]\" x=\"%[^\"]\" y=\"%[^\"]\" tooltip=\"%[^\"]\"", str_id, str_long, str_lat, str_nombre);
			    
      //printf("[%s][%s][%s][%s]\n", str_id, str_long, str_lat, str_nombre);
	
	fprintf(fichero,"%s,%s,%s,%s,,,,,,,,,,,,\n", str_id, str_nombre, str_lat, str_long);
	//fprintf(fichero2,"%s\n", str_id);

      //printf(id,lo,la,no);	     
					     
				      
					      
				     

      pch += 8;
      memset( str_id, '\0', sizeof(char)*500 );
      memset( str_lat, '\0', sizeof(char)*500 );
      memset( str_long, '\0', sizeof(char)*500 );
      memset( str_nombre, '\0', sizeof(char)*500 );
	    }
				//FILE *x = fopen("InfoEstaciones","w");
  }
  fclose(fichero);
  fclose(fp);
	 // fclose(fichero2);
  return 0;
}
