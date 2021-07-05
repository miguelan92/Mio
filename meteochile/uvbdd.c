#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
  int ix;
  int ind;
  char id[500], str_rad[500], str_ano[500], str_mes[500], str_dia[500], str_hora[500];
  char *line = NULL, *pch = NULL;
  size_t len = 0;
  ssize_t read;
  FILE *fp;
 
   //char id [] = str_id;
   //char lo [] = str_long;
   //char la [] = str_lat;
   //char no [] = str_nombre;
  
  memset( str_rad, '\0', sizeof(char)*500 );
  memset( str_ano, '\0', sizeof(char)*500 );
  memset( str_mes, '\0', sizeof(char)*500 );
  memset( str_dia, '\0', sizeof(char)*500 );
  memset( str_hora, '\0', sizeof(char)*500 );
  fp = fopen(argv[1], "r");
  //id = atoi(argv[1]+8);
  //printf ("%s\n",argv[1]+9);

  //return 0;

  if(fp == NULL)
  {
    printf("Error: al abrir el archivo [%s]\n", argv[1]);
    return(-1);
  }
  //fichero = fopen("DatosEstaciones.txt","wt");


  for(ix = 0; (read = getline(&line, &len, fp)) != -1; ix++)
  {
    pch = line;

    //for(; (pch = strstr(pch, "2014"))!= NULL;)
    //{	    
			 sscanf(pch, "%[^|]|%[^|]|%[^|]|%[^|]|%[^|]|%[^\n]", id, str_ano, str_mes, str_dia, str_hora, str_rad);	                 
				    
			int ind= atoi(str_ano)*8928+atoi(str_mes)*744+atoi(str_dia)*24+atoi(str_hora)-17946047;
			int milrad= atof(str_rad)*1000;



			printf("%s,%i,7,%i,1,%s,now()\n", id, ind, milrad, id);
      			      
			// printf("%i,%s,%s,%s,%s,%s,%s,%s,%s,%s\n",ind, str_tempprom, str_presi, str_hum, str_pre, str_radsol, str_velvi, str_temmin, str_temmax, str_dirvien);
						
	//fprintf(fichero,"%s,%s,%s,%s,%s,%s,%s,%s,%s,%s\n", str_fecha, str_tempprom, str_presi, str_hum, str_pre, str_radsol, str_velvi, str_temmin, str_temmax, dirvien);
	

      //printf(id,lo,la,no);	     
			     
				      
				      
	memset( str_rad, '\0', sizeof(char)*500 );
	memset( str_ano, '\0', sizeof(char)*500 );
	memset( str_mes, '\0', sizeof(char)*500 );
	memset( str_dia, '\0', sizeof(char)*500 );
	memset( str_hora, '\0', sizeof(char)*500 );
	memset( id, '\0', sizeof(char)*500);	

      


  }
  
  //fclose(fichero);
  fclose(fp);
	 // fclose(fichero2);
  return 0;
}
