#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
  int ix;
  int ind;
  char str_acu23[500], str_acu22[500], str_acu21[500], str_acu20[500], str_acu19[500], str_acu18[500], str_acu17[500], str_acu16[500], str_acu15[500], str_acu14[500], str_acu13[500], str_acu12[500], str_acu11[500], str_acu10[500], str_acu9[500], str_acu8[500], str_acu7[500], str_acu6[500], str_acu5[500], str_acu4[500], str_acu3[500], str_acu2[500], str_acu1[500], str_acu0[500], str_acuA[500];
  char *line = NULL, *pch = NULL;
  size_t len = 0;
  ssize_t read;
  FILE *fp;
	int id, pre23, pre22, pre21, pre20, pre19, pre18, pre17, pre16, pre15, pre14, pre13, pre12, pre11, pre10, pre9, pre8, pre7, pre6, pre5, pre4, pre3, pre2, pre1, pre0; 
   
  int ano, mes, dia;
  int ind23, ind22, ind21, ind20, ind19, ind18, ind17, ind16, ind15, ind14, ind13, ind12, ind11, ind10, ind9, ind8, ind7, ind6, ind5, ind4, ind3, ind2, ind1, ind0;
  memset( str_acu23, '\0', sizeof(char)*500 );
  memset( str_acu22, '\0', sizeof(char)*500 );
  memset( str_acu21, '\0', sizeof(char)*500 );
  memset( str_acu20, '\0', sizeof(char)*500 );
  memset( str_acu19, '\0', sizeof(char)*500 );
  memset( str_acu18, '\0', sizeof(char)*500 );
  memset( str_acu17, '\0', sizeof(char)*500 );
  memset( str_acu16, '\0', sizeof(char)*500 );
  memset( str_acu15, '\0', sizeof(char)*500 );
  memset( str_acu14, '\0', sizeof(char)*500 );
  memset( str_acu13, '\0', sizeof(char)*500 );
  memset( str_acu12, '\0', sizeof(char)*500 );
  memset( str_acu11, '\0', sizeof(char)*500 );
  memset( str_acu10, '\0', sizeof(char)*500 );
  memset( str_acu9, '\0', sizeof(char)*500 );
  memset( str_acu8, '\0', sizeof(char)*500 );
  memset( str_acu7, '\0', sizeof(char)*500 );
  memset( str_acu6, '\0', sizeof(char)*500 );
  memset( str_acu5, '\0', sizeof(char)*500 );
  memset( str_acu4, '\0', sizeof(char)*500 );
  memset( str_acu3, '\0', sizeof(char)*500 );
  memset( str_acu2, '\0', sizeof(char)*500 );
  memset( str_acu1, '\0', sizeof(char)*500 );
  memset( str_acu0, '\0', sizeof(char)*500 );
  memset( str_acuA, '\0', sizeof(char)*500 );


  id = atoi(argv[1]+10);
  
  ano = atoi(argv[1]+17);
  mes = atoi(argv[1]+22);
  dia = atoi(argv[1]+25);




  
  fp = fopen(argv[1], "r");
 // id = atoi(argv[1]+8);
  //printf ("%s\n",argv[1]+9);

  //return 0;

  if(fp == NULL)
  {
    printf("Error: al abrir el archivo [%s]\n", argv[1]);
    return(-1);
  }
  


  for(ix = 0; (read = getline(&line, &len, fp)) != -1; ix++)
  {
    pch = line;

    //for(; (pch = strstr(pch, "2014"))!= NULL;)
    //{	    
			 sscanf(pch, "%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^,]", str_acu23, str_acu22, str_acu21, str_acu20, str_acu19, str_acu18, str_acu17, str_acu16, str_acu15, str_acu14, str_acu13, str_acu12, str_acu11, str_acu10, str_acu9, str_acu8, str_acu7, str_acu6, str_acu5, str_acu4, str_acu3, str_acu2, str_acu1, str_acu0, str_acuA);	                 
				    /*
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

*/

			 if(str_acu23 != str_acu22)
			 {
				pre23= (atof(str_acu23)-atof(str_acu22))*1000;
			 }
			 if(str_acu23 == str_acu22)
			 {
			 	pre23= 0;
			 }
			 if(str_acu22 != str_acu21)
			 {
				pre22= (atof(str_acu22)-atof(str_acu21))*1000;
			 }
			 if(str_acu22 == str_acu21)				                           
			 {	
				pre22= 0;
			 }
			 if(str_acu21 != str_acu20)
			 {
				 pre21= (atof(str_acu21)-atof(str_acu20))*1000;
			 }
			 if(str_acu20 != str_acu19)
			 {
				 pre20= (atof(str_acu20)-atof(str_acu19))*1000;
			 }
			 if(str_acu19 != str_acu18)
			 {
				 pre19= (atof(str_acu19)-atof(str_acu18))*1000;
			 }
			 if(str_acu18 != str_acu17)
			 {
				 pre18= (atof(str_acu18)-atof(str_acu17))*1000;
			 }
			 if(str_acu17 != str_acu16)
			 {
				 pre17= (atof(str_acu17)-atof(str_acu16))*1000;
			 }
			 if(str_acu16 != str_acu15)
			 {
				 pre16= (atof(str_acu16)-atof(str_acu15))*1000;
			 }
			 if(str_acu15 != str_acu14)
			 {
				 pre15= (atof(str_acu15)-atof(str_acu14))*1000;
			 }
			 if(str_acu14 != str_acu13)
			 {
				 pre14= (atof(str_acu14)-atof(str_acu13))*1000;
			 }
				 pre13= atof(str_acu13)*1000;
			 
			 if(str_acu12 != str_acu11)
			 {
				 pre12= (atof(str_acu12)-atof(str_acu11))*1000;
			 }
			 if(str_acu11 != str_acu10)
			 {
				 pre11= (atof(str_acu11)-atof(str_acu10))*1000;
			 }
			 if(str_acu10 != str_acu9)
			 {
				 pre10= (atof(str_acu10)-atof(str_acu9))*1000;
			 }
			 if(str_acu9 != str_acu8)
			 {
				 pre9= (atof(str_acu9)-atof(str_acu8))*1000;
			 }
			 if(str_acu8 != str_acu7)
			 {
				 pre8= (atof(str_acu8)-atof(str_acu7))*1000;
			 }
			 if(str_acu7 != str_acu6)
			 {
				 pre7= (atof(str_acu7)-atof(str_acu6))*1000;
			 }
			 if(str_acu6 != str_acu5)
			 {
				 pre6= (atof(str_acu6)-atof(str_acu5))*1000;
			 }
			 if(str_acu5 != str_acu4)
			 {
				 pre5= (atof(str_acu5)-atof(str_acu4))*1000;
			 }
			 if(str_acu4 != str_acu3)
			 {
				 pre4= (atof(str_acu4)-atof(str_acu3))*1000;
			 }
			 if(str_acu3 != str_acu2)
			 {
				 pre3= (atof(str_acu3)-atof(str_acu2))*1000;
			 }
			 if(str_acu2 != str_acu1)
			 {
				 pre2= (atof(str_acu2)-atof(str_acu1))*1000;
			 }
			 if(str_acu1 != str_acu0)
			 {
				 pre1= (atof(str_acu1)-atof(str_acu0))*1000;
			 }
			 if(str_acu0 != str_acuA)
			 {
				 pre0= (atof(str_acu0)-atof(str_acuA))*1000;
			 }

			
			ind23=(ano*8928)+(mes*744)+(dia*24)+(23-17946047);
		        ind22=(ano*8928)+(mes*744)+(dia*24)+(22-17946047);
       			ind21=(ano*8928)+(mes*744)+(dia*24)+(21-17946047);
 			ind20=(ano*8928)+(mes*744)+(dia*24)+(20-17946047);
                        ind19=(ano*8928)+(mes*744)+(dia*24)+(19-17946047);
                        ind18=(ano*8928)+(mes*744)+(dia*24)+(18-17946047);
                        ind17=(ano*8928)+(mes*744)+(dia*24)+(17-17946047);
                        ind16=(ano*8928)+(mes*744)+(dia*24)+(16-17946047);
                        ind15=(ano*8928)+(mes*744)+(dia*24)+(15-17946047);
                        ind14=(ano*8928)+(mes*744)+(dia*24)+(14-17946047);
                        ind13=(ano*8928)+(mes*744)+(dia*24)+(13-17946047);
                        ind12=(ano*8928)+(mes*744)+(dia*24)+(12-17946047);
                        ind11=(ano*8928)+(mes*744)+(dia*24)+(11-17946047);
                        ind10=(ano*8928)+(mes*744)+(dia*24)+(10-17946047);
                        ind9=(ano*8928)+(mes*744)+(dia*24)+(9-17946047);
                        ind8=(ano*8928)+(mes*744)+(dia*24)+(8-17946047);
                        ind7=(ano*8928)+(mes*744)+(dia*24)+(7-17946047);
                        ind6=(ano*8928)+(mes*744)+(dia*24)+(6-17946047);
                        ind5=(ano*8928)+(mes*744)+(dia*24)+(5-17946047);
                        ind4=(ano*8928)+(mes*744)+(dia*24)+(4-17946047);
                        ind3=(ano*8928)+(mes*744)+(dia*24)+(3-17946047);
                        ind2=(ano*8928)+(mes*744)+(dia*24)+(2-17946047);
                        ind1=(ano*8928)+(mes*744)+(dia*24)+(1-17946047);
                        ind0=(ano*8928)+(mes*744)+(dia*24)+(0-17946047);			

			printf("%i,%i,4,%i,1,%i,now()\n", id, ind23, pre23, id);
			printf("%i,%i,4,%i,1,%i,now()\n", id, ind22, pre22, id);
			printf("%i,%i,4,%i,1,%i,now()\n", id, ind21, pre21, id);
			printf("%i,%i,4,%i,1,%i,now()\n", id, ind20, pre20, id);
			printf("%i,%i,4,%i,1,%i,now()\n", id, ind19, pre19, id);
			printf("%i,%i,4,%i,1,%i,now()\n", id, ind18, pre18, id);
			printf("%i,%i,4,%i,1,%i,now()\n", id, ind17, pre17, id);
			printf("%i,%i,4,%i,1,%i,now()\n", id, ind16, pre16, id);
			printf("%i,%i,4,%i,1,%i,now()\n", id, ind15, pre15, id);
			printf("%i,%i,4,%i,1,%i,now()\n", id, ind14, pre14, id);
			printf("%i,%i,4,%i,1,%i,now()\n", id, ind13, pre13, id);
			printf("%i,%i,4,%i,1,%i,now()\n", id, ind12, pre12, id);
			printf("%i,%i,4,%i,1,%i,now()\n", id, ind11, pre11, id);
			printf("%i,%i,4,%i,1,%i,now()\n", id, ind10, pre10, id);
			printf("%i,%i,4,%i,1,%i,now()\n", id, ind9, pre9, id);
			printf("%i,%i,4,%i,1,%i,now()\n", id, ind8, pre8, id);
			printf("%i,%i,4,%i,1,%i,now()\n", id, ind7, pre7, id);
			printf("%i,%i,4,%i,1,%i,now()\n", id, ind6, pre6, id);
			printf("%i,%i,4,%i,1,%i,now()\n", id, ind5, pre5, id);
			printf("%i,%i,4,%i,1,%i,now()\n", id, ind4, pre4, id);
			printf("%i,%i,4,%i,1,%i,now()\n", id, ind3, pre3, id);
			printf("%i,%i,4,%i,1,%i,now()\n", id, ind2, pre2, id);
			printf("%i,%i,4,%i,1,%i,now()\n", id, ind1, pre1, id);
			printf("%i,%i,4,%i,1,%i,now()\n", id, ind0, pre0, id);
		
			
						
	
		     
			     
				      
	memset( str_acu23, '\0', sizeof(char)*500 );				      
	memset( str_acu22, '\0', sizeof(char)*500 );
        memset( str_acu21, '\0', sizeof(char)*500 );
	memset( str_acu20, '\0', sizeof(char)*500 );
	memset( str_acu19, '\0', sizeof(char)*500 );
	memset( str_acu18, '\0', sizeof(char)*500 );
	memset( str_acu17, '\0', sizeof(char)*500 );
	memset( str_acu16, '\0', sizeof(char)*500 );
	memset( str_acu15, '\0', sizeof(char)*500 );
	memset( str_acu14, '\0', sizeof(char)*500 );
	memset( str_acu13, '\0', sizeof(char)*500 );
	memset( str_acu12, '\0', sizeof(char)*500 );
	memset( str_acu11, '\0', sizeof(char)*500 );
	memset( str_acu10, '\0', sizeof(char)*500 );
	memset( str_acu9, '\0', sizeof(char)*500 );
	memset( str_acu8, '\0', sizeof(char)*500 );
	memset( str_acu7, '\0', sizeof(char)*500 );
	memset( str_acu6, '\0', sizeof(char)*500 );
	memset( str_acu5, '\0', sizeof(char)*500 );
	memset( str_acu4, '\0', sizeof(char)*500 );
	memset( str_acu3, '\0', sizeof(char)*500 );
	memset( str_acu2, '\0', sizeof(char)*500 );
	memset( str_acu1, '\0', sizeof(char)*500 );
	memset( str_acu0, '\0', sizeof(char)*500 );
	memset( str_acuA, '\0', sizeof(char)*500 );
		

    

  }
  
  
  fclose(fp);
	
  return 0;
}
