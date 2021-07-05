
#!/bin/bash
for ((c=2; c<=119; c++))
do
	id=$(cut -d ';' -f 1 ./year/2018.csv | head -$c | tail -1)
#	id=170007
#	mkdir ./Datos300/$id
	chmod 777 ./Datos91/$id
	chmod 777 ./uv/$id
	for((a=2019; a<=2020; a++))
	do
#	mkdir ./Datos300/$id/$a
	chmod 777 ./Datos91/$id/$a
	chmod 777 ./uv/$id/$a
		for m in $(seq -f "%02g" 1 12)
		do
#			mkdir ./Datos300/$id/$a/$m
			chmod 777 ./Datos91/$id/$a/$m
			chmod 777 ./uv/$id/$a/$m
			if [[ "01" == "$m" ]] || [[ "03" == "$m" ]] || [[ "05" == "$m" ]] || [[ "07" == "$m" ]] || [[ "08" == "$m" ]] || [[ "10" == "$m" ]] || [[ "12" == "$m" ]]
			then
				
				for d in $(seq -f "%02g" 1 31)
				do
#					mkdir  ./Datos300/$id/$a/$m/$d/
					chmod 777 ./Datos91/$id/$a/$m/$d
					chmod 777 ./Datos91/$id/$a/$m/$d/$id-$a-$m-$d.txt
					chmod 777 ./uv/$id/$a/$m/$d
					chmod 777 ./uv/$id/$a/$m/$d/$id-$a-$m-$d.txt
					./Datgen ./Datos91/$id/$a/$m/$d/$id-$a-$m-$d.txt >./Datos91/$id/$a/$m/$d/$id-$a-$m-$d-trad.txt
					./datgenbdd ./Datos91/$id/$a/$m/$d/$id-$a-$m-$d-trad.txt >>./datjai/datgen.txt
					./datpreci ./Datos91/$id/$a/$m/$d/$id-$a-$m-$d.txt >./Datos91/$id/$a/$m/$d/$id-$a-$m-$d-preci.txt
					./Precibdd ./Datos91/$id/$a/$m/$d/$id-$a-$m-$d-preci.txt >>./datjai/datpreci.txt
					./datuv ./uv/$id/$a/$m/$d/$id-$a-$m-$d.txt >./uv/$id/$a/$m/$d/$id-$a-$m-$d-trad.txt
					./uvbdd ./uv/$id/$a/$m/$d/$id-$a-$m-$d-trad.txt >>./datjai/datuv.txt	
#					wget -O -> ./Datos300/$id/$a/$m/$d/$id-$a-$m-$d.txt --no-check-certificate https://climatologia.meteochile.gob.cl/application/diario/datosEmaRecienteHorario/$id/$a/$m/$d
#					sleep 1s
				done
			elif [[ "04" == "$m" ]] || [[ "06" == "$m" ]] || [[ "09" == "$m" ]] || [[ "11" == "$m" ]]
			then
				for d in $(seq -f "%02g" 1 30)
				do
#					mkdir ./Datos300/$id/$a/$m/$d/
					chmod 777 ./Datos91/$id/$a/$m/$d
					chmod 777 ./Datos91/$id/$a/$m/$d/$id-$a-$m-$d.txt
					chmod 777 ./uv/$id/$a/$m/$d
					chmod 777 ./uv/$id/$a/$m/$d/$id-$a-$m-$d.txt
					./Datgen ./Datos91/$id/$a/$m/$d/$id-$a-$m-$d.txt >./Datos91/$id/$a/$m/$d/$id-$a-$m-$d-trad.txt
					./datgenbdd ./Datos91/$id/$a/$m/$d/$id-$a-$m-$d-trad.txt >>./datjai/datgen.txt
					./datpreci ./Datos91/$id/$a/$m/$d/$id-$a-$m-$d.txt >./Datos91/$id/$a/$m/$d/$id-$a-$m-$d-preci.txt
					./Precibdd ./Datos91/$id/$a/$m/$d/$id-$a-$m-$d-preci.txt >>./datjai/datpreci.txt
					./datuv ./uv/$id/$a/$m/$d/$id-$a-$m-$d.txt >./uv/$id/$a/$m/$d/$id-$a-$m-$d-trad.txt
					./uvbdd ./uv/$id/$a/$m/$d/$id-$a-$m-$d-trad.txt >>./datjai/datuv.txt
#					wget -O -> ./Datos300/$id/$a/$m/$d/$id-$a-$m-$d.txt --no-check-certificate https://climatologia.meteochile.gob.cl/application/diario/datosEmaRecienteHorario/$id/$a/$m/$d
#					sleep 1s
				done
			elif [[ "02" == "$m" ]] && [[ "$a%4" -eq "0" ]]
			then
				for d in $(seq -f "%02g" 1 29)
				do
#					mkdir ./Datos300/$id/$a/$m/$d/
					chmod 777 ./Datos91/$id/$a/$m/$d
					chmod 777 ./Datos91/$id/$a/$m/$d/$id-$a-$m-$d.txt
					chmod 777 ./uv/$id/$a/$m/$d
					chmod 777 ./uv/$id/$a/$m/$d/$id-$a-$m-$d.txt
					./Datgen ./Datos91/$id/$a/$m/$d/$id-$a-$m-$d.txt >./Datos91/$id/$a/$m/$d/$id-$a-$m-$d-trad.txt
					./datgenbdd ./Datos91/$id/$a/$m/$d/$id-$a-$m-$d-trad.txt >>./datjai/datgen.txt
					./datpreci ./Datos91/$id/$a/$m/$d/$id-$a-$m-$d.txt >./Datos91/$id/$a/$m/$d/$id-$a-$m-$d-preci.txt
					./Precibdd ./Datos91/$id/$a/$m/$d/$id-$a-$m-$d-preci.txt >>./datjai/datpreci.txt
					./datuv ./uv/$id/$a/$m/$d/$id-$a-$m-$d.txt >./uv/$id/$a/$m/$d/$id-$a-$m-$d-trad.txt
					./uvbdd ./uv/$id/$a/$m/$d/$id-$a-$m-$d-trad.txt >>./datjai/datuv.txt
#					wget -O -> ./Datos300/$id/$a/$m/$d/$id-$a-$m-$d.txt --no-check-certificate https://climatologia.meteochile.gob.cl/application/diario/datosEmaRecienteHorario/$id/$a/$m/$d
				
#					sleep 1s
				done
				
			elif [[ "02" == "$m" ]] && [[ "$a%4" -ne "0" ]]
	                then
				df=28
				for d in $(seq -f "%02g" 1 28)
				do
#					mkdir ./Datos300/$id/$a/$m/$d/
					chmod 777 ./Datos91/$id/$a/$m/$d
					chmod 777 ./Datos91/$id/$a/$m/$d/$id-$a-$m-$d.txt
					chmod 777 ./uv/$id/$a/$m/$d
					chmod 777 ./uv/$id/$a/$m/$d/$id-$a-$m-$d.txt
					./Datgen ./Datos91/$id/$a/$m/$d/$id-$a-$m-$d.txt >./Datos91/$id/$a/$m/$d/$id-$a-$m-$d-trad.txt
					./datgenbdd ./Datos91/$id/$a/$m/$d/$id-$a-$m-$d-trad.txt >>./datjai/datgen.txt
					./datpreci ./Datos91/$id/$a/$m/$d/$id-$a-$m-$d.txt >./Datos91/$id/$a/$m/$d/$id-$a-$m-$d-preci.txt
					./Precibdd ./Datos91/$id/$a/$m/$d/$id-$a-$m-$d-preci.txt >>./datjai/datpreci.txt
					./datuv ./uv/$id/$a/$m/$d/$id-$a-$m-$d.txt >./uv/$id/$a/$m/$d/$id-$a-$m-$d-trad.txt
					./uvbdd ./uv/$id/$a/$m/$d/$id-$a-$m-$d-trad.txt >>./datjai/datuv.txt
#					wget -O -> ./Datos300/$id/$a/$m/$d/$id-$a-$m-$d.txt --no-check-certificate https://climatologia.meteochile.gob.cl/application/diario/datosEmaRecienteHorario/$id/$a/$m/$d
				
#					sleep 1s
				done
			fi
			
		

		 
		done
	done
done
