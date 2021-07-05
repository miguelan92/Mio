#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
  int ix;
  int ind;
  char str_fecha[500], str_tempprom[500], str_presi[500], str_hum[500], str_pre[500], str_radsol[500], str_velvi[500], str_temmin[500], str_temmax[500], str_dirvien[500], str_ano[500], str_mes[500], str_dia[500], str_hora[500];
  char *line = NULL, *pch = NULL;
  size_t len = 0;
  ssize_t read;
  FILE *fp,*fichero;
	int id; 
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
  memset( str_ano, '\0', sizeof(char)*500 );
  memset( str_mes, '\0', sizeof(char)*500 );
  memset( str_dia, '\0', sizeof(char)*500 );
  memset( str_hora, '\0', sizeof(char)*500 );
  fp = fopen(argv[1], "r");
  id = atoi(argv[1]+8);
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
			 sscanf(pch, "%[^-]-%[^-]-%[^ ] %[^:]:00:00,%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^,\n]", str_ano, str_mes, str_dia, str_hora, str_tempprom, str_presi, str_hum, str_pre, str_radsol, str_velvi, str_temmin, str_temmax, str_dirvien);	                 
				    
			int ind= atoi(str_ano)*8928+atoi(str_mes)*744+atoi(str_dia)*24+atoi(str_hora)-17946047;
			int miltempprom= atof(str_tempprom)*1000;			
			int miltemmax= atof(str_temmax)*1000;
			int miltemmin= atof(str_temmin)*1000;
			int milpre= atof(str_pre)*1000;
			int milhum= atof(str_hum)*1000;
			int milpresi= atof(str_presi)*1000;
			int milradsol= atof(str_radsol)*1000;
			int milvelvi= atof(str_velvi)*1000;
			int mildirvien= atof(str_dirvien)*1000;



			printf("%i,%i,1,%i,1,%i,now()\n", id, ind, miltempprom, id);
			printf("%i,%i,2,%i,1,%i,now()\n", id, ind, miltemmax, id);
			printf("%i,%i,3,%i,1,%i,now()\n", id, ind, miltemmin, id);
			printf("%i,%i,4,%i,1,%i,now()\n", id, ind, milpre, id);
			printf("%i,%i,5,%i,1,%i,now()\n", id, ind, milhum, id);
			printf("%i,%i,6,%i,1,%i,now()\n", id, ind, milpresi, id);
			printf("%i,%i,7,%i,1,%i,now()\n", id, ind, milradsol, id);
			printf("%i,%i,8,%i,1,%i,now()\n", id, ind, milvelvi, id);
			printf("%i,%i,9,%i,1,%i,now()\n", id, ind, mildirvien,id);
      			      
			// printf("%i,%s,%s,%s,%s,%s,%s,%s,%s,%s\n",ind, str_tempprom, str_presi, str_hum, str_pre, str_radsol, str_velvi, str_temmin, str_temmax, str_dirvien);
						
	//fprintf(fichero,"%s,%s,%s,%s,%s,%s,%s,%s,%s,%s\n", str_fecha, str_tempprom, str_presi, str_hum, str_pre, str_radsol, str_velvi, str_temmin, str_temmax, dirvien);
	

      //printf(id,lo,la,no);	     
			     
				      
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
	memset( str_ano, '\0', sizeof(char)*500 );
	memset( str_mes, '\0', sizeof(char)*500 );
	memset( str_dia, '\0', sizeof(char)*500 );
	memset( str_hora, '\0', sizeof(char)*500 );
		

      //pch += 5;
	//    }

  }
  
  //fclose(fichero);
  fclose(fp);
	 // fclose(fichero2);
  return 0;
}
