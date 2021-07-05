#!/bin/bash

rm salida.txt

for (( c=1; c<=15; c++ ))
do
		  #echo "iterador: $c"
	 wget -O ->> ./salida.txt --no-check-certificate https://www.agromet.cl/ext/aux/getRegionWMS.php?reg_ia_id=$c&protocol=google
	./main

	sleep 1s
done
./DatosListos salida.txt
