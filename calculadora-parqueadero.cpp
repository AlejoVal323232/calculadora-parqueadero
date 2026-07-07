#include<iostream>

using namespace std;

int main () {
	
int horas, descuento;	
float tarifa, tarifa2, tarifa3, tarifa4;

cout<<"Cuantas horas estuvo en el parqueadero: ";
cin>>horas;

if(horas>1 && horas<5){ //validacion que las horas sean mayores a 0

tarifa=horas-1;
tarifa2=(tarifa*1500)+2000;	

}else if(horas==1){ //si estuvo 1 hora se le cobra solo 2000

tarifa2=2000;	

}else if(horas>=5 && horas<10){ //aplicar el descuento del 10 porciento si estuvo entre 5 horas y 9 horas

tarifa=horas-1;
tarifa2=(tarifa*1500)+2000;
tarifa3=tarifa2*0.10;
tarifa4=tarifa2-tarifa3;	
descuento=10;
}else if(horas>=10){ //aplicar el descuento del 20 porciento si estuvo 10 horas o mas

tarifa=horas-1;
tarifa2=(tarifa*1500)+2000;
tarifa3=tarifa2*0.20;
tarifa4=tarifa2-tarifa3;
descuento=20;

}else{ //Mensaje de error si el valor no es valido
	cout<<"Valor incorrecto";
}

cout<<"Numero horas que estuvo: "<<horas<<endl;

if(horas>=5){//mostrar descuento y precio con descuento si cumple los requisitos

cout<<"Costo sin descuento: "<<tarifa2<<endl;
cout<<"Descuento del %"<<descuento<<" es igual a: "<<tarifa3<<endl;
cout<<"Costo total: "<<tarifa4;
}else{
	cout<<"Costo total: "<<tarifa2; //Mostrar el costo si solo estuvo una hora
}
}
