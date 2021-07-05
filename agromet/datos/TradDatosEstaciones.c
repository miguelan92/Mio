#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
  int ix;
  char str_fecha[500], str_tempprom[500], str_presi[500], str_hum[500], str_pre[500], str_radsol[500], str_velvi[500], str_temmin[500], str_temmax[500], str_dirvien[500];
  char *line = NULL, *pch = NULL;
  size_t len = 0;
  ssize_t read;
  FILE *fp,*fichero;

   //char id [] = str_id;
   //char lo [] = str_long;
   //char la [] = str_lat;
   //char no [] = str_nombre;
  memset( str_fecha, '\0', sizeof(char)*500 );
  memset( str_tempprom, '\0', sizeof(char)*500 );
  memset( str_presi, '\0', sizeof(char)*500 );
  memset( str_hum, '\0', sizeof(char)*500 );
  memset( str_pre, '\0', sizeof(char)*500 );
  memset( str_radsol, '\0', sizeof(char)*500 );
  memset( str_velvi, '\0', sizeof(char)*500 );
  memset( str_temmin, '\0', sizeof(char)*500 );
  memset( str_temmax, '\0', sizeof(char)*500 );
  memset( str_dirvien, '\0', sizeof(char)*500 );
  fp = fopen(argv[1], "r");
  int id = argv[2];

  if(fp == NULL)
  {
    printf("Error: al abrir el archivo [%s]\n", argv[1]);
    return(-1);
  }
  fichero = fopen("DatosEstaciones.txt","wt");


  for(ix = 0; (read = getline(&line, &len, fp)) != -1; ix++)
  {
    pch = line;

    for(; (pch = strstr(pch, "fecha")) != NULL;)
    {	    
			 sscanf(pch, "fecha|%[^|]|1|%[^|]|2|%[^|]|3|%[^|]|4|%[^|]|5|%[^|]|6|%[^|]|7|%[^|]|8|%[^|]|9|%[^|]", str_fecha, str_tempprom, str_presi, str_hum, str_pre, str_radsol, str_velvi, str_temmin, str_temmax, str_dirvien);
			 if(strlen(str_tempprom)!=0 || strlen(str_presi)!=0 || strlen(str_hum)!=0 || strlen(str_pre)!=0 || strlen(str_radsol)!=0 || strlen(str_velvi)!=0 ||strlen(str_temmin)!=0 || strlen(str_temmax)!=0 || strlen(str_dirvien)!=0)
				                 {
			    
      							printf("%s,%s,%s,%s,%s,%s,%s,%s,%s,%s\n", str_fecha, str_tempprom, str_presi, str_hum, str_pre, str_radsol, str_velvi, str_temmin, str_temmax, str_dirvien);
						 
						 }	
	//fprintf(fichero,"%s,%s,%s,%s,%s,%s,%s,%s,%s,%s\n", str_fecha, str_tempprom, str_presi, str_hum, str_pre, str_radsol, str_velvi, str_temmin, str_temmax, dirvien);
	

      //printf(id,lo,la,no);	     
		printf("%i", id);			     
				      
	memset( str_fecha, '\0', sizeof(char)*500 );				      
	memset( str_tempprom, '\0', sizeof(char)*500 );
        memset( str_presi, '\0', sizeof(char)*500 );
	memset( str_hum, '\0', sizeof(char)*500 );
	memset( str_pre, '\0', sizeof(char)*500 );
	memset( str_radsol, '\0', sizeof(char)*500 );
	memset( str_velvi, '\0', sizeof(char)*500 );
	memset( str_temmin, '\0', sizeof(char)*500 );
	memset( str_temmax, '\0', sizeof(char)*500 );
	memset( str_dirvien, '\0', sizeof(char)*500 );	

      pch += 6;
	    }

  }
  fclose(fichero);
  fclose(fp);
	 // fclose(fichero2);
  return 0;
}
