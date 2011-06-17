#include "TERZO.h"

/*
	Prima di editare questo modulo verificate che siano presenti i campi nel file data.h necessari alla rappresentazione del modulo
	* aggiungere un campo, tipicamente con lo stesso nome del modulo, alla struttura data_type_e
	* aggiungere un campo, se non presente, corrispondente all'unità di misura del dato letto da questo modulo, alla struttura data_unit_e
	* aggiungere un campo, se non presente, corrispondente al tipo del singolo dato acquisito (Ex. INT, FLOAT)  , alla struttura data_value_type_e
*/

void TERZO_init() {
	PRINTA("TERZO_INIT");
	int i;
	/*
	Il range sotto fa riferimento alla misura del sensore
	_MIN_ double che rappresenta il valore minimo
	_MAX_ double che rappresenta il valore massimo
	*/
	range=INIT_RANGE(_MIN_,_MAX_);
	/*
	Specifiche relative alla misura del sensore 
	DATA_TYPE_E è un enum definito in data.h va aggiunto un campo tipicamente corrispondente al nome del modulo
	DATA_UNIT_E è un enum definito in data.h va aggiunta se non presente l'unità di misura con cui il dato viene rappresentato 
	EXP_TIME_MS un long int che rappresenta i ms dopo cui il dato va considerato non più valido
	ACCURACY un long int che rappresenta l'accuratezza del dato
	*/
	TERZO_data_spec=INIT_DATA_SPEC(DATA_TYPE_E,DATA_UNIT_E,range,EXP_TIME_MS,ACCURACY);
	/*
	Il range sotto fa riferimento al dato grezzo acquisito dal sensore
	_MIN_ double che rappresenta il valore minimo
	_MAX_ double che rappresenta il valore massimo
	*/
	range=INIT_RANGE(_MIN_,_MIN_);
	
	/*
	Specifiche relative al dato grezzo letto dal sensore
	DATA_VALUE_TYPE_E è un enum definito in data.h va aggiunto un campo se non presente che indica di che tipo è il singolo dato EX. INT,FLOAT ecc ecc
	data_dimensions le dimensioni effettive del dato raccolto Ex. 0=scalare 1=vettore 2=matrice 3=matrice tridimensionale n=matrice n-dimensionale
	*/
	int data_dimensions=0; 
	TERZO_data_value_spec=INIT_VALUE_SPEC(DATA_VALUE_TYPE_E,range,data_dimensions);
	if (data_dimensions>0) {
		/*
		Definire il numero di elementi massimi per ogni dimensione 
		TERZO_data_value_spec.max_elements[0]=_MAX_ELEMENTS_
		TERZO_data_value_spec.max_elements[1]=_MAX_ELEMENTS_
		..
		..
		TERZO_data_value_spec.max_elements[data_dimensions-1]=_MAX_ELEMENTS_
		*/
	}
	/*
	Il dato
	DATA_TYPE_E è un enum definito in data.h va aggiunto un campo tipicamente corrispondente al nome del modulo
	*/
	TERZO_data=INIT_DATA(DATA_TYPE_E,BASEMODULE_data_value_spec);
    SUB(TERZO_data_spec.type);
	SET_S(TERZO_data_spec);
}
 
void TERZO_run() {
  PRINTA("TERZO_RUN");
  /*
	IL valore del dato
	DATA_VALUE_U è una union definita in data.h, va aggiunto il tipo di dato EX float o int[5] e il realtivo nome
  */
  TERZO_data.value.DATA_VALUE_U
  SETDATATIMESTAMP(&TERZO_data);
  SET_D(TERZO_data);
}

void TERZO_close() {
  PRINTA("TERZO_CLOSE");
  UNSUB(TERZO_data_spec.type);
}
