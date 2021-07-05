#!/bin/bash

for ((c=1; c<=430; c++))
do
	id=$(cut -d ',' -f 1 ../Estaciones.txt | head -$c | tail -1)
	for((a=2010; a<=2021; a++))
	do
		for m in $(seq -f "%02g" 1 12)
		do
			if [[ "01" == "$m" ]] || [[ "03" == "$m" ]] || [[ "05" == "$m" ]] || [[ "07" == "$m" ]] || [[ "08" == "$m" ]] || [[ "10" == "$m" ]] || [[ "12" == "$m" ]]
			then
				df=31
			elif [[ "04" == "$m" ]] || [[ "06" == "$m" ]] || [[ "09" == "$m" ]] || [[ "11" == "$m" ]]
			then
				df=30
			elif [[ "02" == "$m" ]] && [[ "$a%4" -eq "0" ]]
			then
				df=29
			elif [[ "02" == "$m" ]] && [[ "$a%4" -ne "0" ]]
			then
				df=28
			fi
				./TradDatosEstaciones ./Datos/$id/$a/$m/$id-$a-$m-$df.txt > ./Datos/$id/$a/$m/$id-$a-$m-$df-trad.txt
				
		done
	done
done
