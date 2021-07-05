
#!/bin/bash
for ((c=1; c<=430; c++)d
do
	id=$(cut -d ',' -f 1 ../Estaciones.txt | head -$c | tail -1)
	for((a=2010; a<=2021; a++))
	do
		mkdir -p ./Datos/$id/$a

		for m in $(seq -f "%02g" 1 12)
		do
			 mkdir -p ./Datos/$id/$a/$m
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


		 wget -O -> ./Datos/$id/$a/$m/1-$a-$m-$df.txt --no-check-certificate https://www.agromet.cl/ext/aux/getGraphData.php?ema_ia_id=$id\&dateFrom=$a-$m-01%2000:00:00\&dateTo=$a-$m-$df%2000:00:00\&portada=false

	  	sleep 1s
		done
	done
#done
