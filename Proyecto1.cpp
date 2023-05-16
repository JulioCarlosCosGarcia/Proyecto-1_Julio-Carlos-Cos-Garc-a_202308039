 /*
Proyecto: Juego NIM
Programador: Julio Carlos Cos Garcìa
Carnet: 202308039
*/
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
string jugador1, jugador2;
int fila_j1, fila_j2, cantidad1, cantidad2, turno;
int longf1,longf2, longf3 ;
int puntosj1=0, puntosj2=0;
bool jugadores = false;

void tablero(int fila){
	
	if (fila ==1){
		cout<<"  ";
		cout<<"OOO    <-- Fila 1"<<endl;
	}
	
	
	if (fila ==2){
		cout<<" ";
		cout<<"lllll   <-- Fila 2"<<endl;
	}
	
	
	if (fila == 3){
		cout<<"@@@@@@@  <-- Fila 3"<<endl;
	}
	
}
	
// para elimnar los simbolos de cada fila
	
void quitarf1(int num_elementos){
if (longf1>0){	
	if (num_elementos == 1){
		cout<<"   ";
		//cout<<"OO"<<endl;
		longf1=longf1 - num_elementos;
		
		
	}else if (num_elementos == 2){
		cout<<"    ";
		//cout<<"O"<<endl;
		longf1=longf1 - num_elementos;
		
		
	}else if (num_elementos == 3){
		cout<<"     "<<endl;
		longf1=longf1 - num_elementos;
		
	}
}else{
	cout<<"Fila 1 ya no exite"<<endl;
}
}	

void quitarf2(int num_elementos){
if (longf2>0){
	if (num_elementos == 1){
		cout<<"   ";
		//cout<<"iiii"<<endl;
		longf2=longf2 - num_elementos;
		
		
	}else if (num_elementos == 2){
		cout<<"  ";
		//cout<<"iii"<<endl;
		longf2=longf2 - num_elementos;
		
		
	}else if (num_elementos == 3){
		cout<<"	";
		//cout<<"ii"<<endl;
		longf2=longf2 - num_elementos;
		
		
	}else if (num_elementos == 4){
		//cout<<"i"<<endl;
		longf2=longf2 - num_elementos;
		
		
	}else if (num_elementos == 5){
		cout<<"     "<<endl;
		longf2=longf2 - num_elementos;
		
		
	}
}else{
	cout<<"Fila 2 ya no existe"<<endl;
}
}

	
void quitarf3(int num_elementos){
if (longf3>0){
	if (num_elementos == 1){
		cout<<"     ";
		//cout<<"@@@@@@"<<endl;
		longf3=longf3 - num_elementos;
		
	}else if (num_elementos == 2){
		cout<<"    ";
		//cout<<"@@@@@"<<endl;
		longf3=longf3 - num_elementos;
		
	}else if (num_elementos == 3){
		cout<<"   ";
		//cout<<"@@@@"<<endl;
		longf3=longf3 - num_elementos;
		
	}else if (num_elementos == 4){
		cout<<"  ";
		//cout<<"@@@"<<endl;
		longf3=longf3 - num_elementos;
		
	}else if (num_elementos == 5){
		cout<<" ";
		//cout<<"@@"<<endl;
		longf3=longf3 - num_elementos;
		
	}else if (num_elementos == 6){
		//cout<<"@"<<endl;
		longf3=longf3 - num_elementos;
		
	}else if (num_elementos == 7){
		cout<<"     "<<endl;
		longf3=longf3 - num_elementos;
		
	}
}else{
	cout<<"Fila 3 ya no existe"<<endl;
}
}	

void mostrar(int fil1, int fil2, int fil3){
	cout<<"\n";
	cout<<"  ";
	
	for(int i=0; i<fil1; i++){
		cout<<"O";
	}
	
	cout<<" "<<endl;
	for(int c=0; c<fil2; c++){
		cout<<"l";
	}
	cout<<"\n";
	for(int d=0; d<fil3; d++){
		cout<<"@";
	}
	cout<<"\n";
	
}


int main(int argc, char *argv[]) {
		turno = 1;
		longf1=3,longf2=5, longf3=7;
		
		cout<<"    Bienvenido al juego Nim"<<endl;
		cout<<"Objetos del tablero"<<endl;
		tablero(1);
		tablero(2);
		tablero(3);
		
		
		cout<<""<<endl;
		cout<<""<<endl;
		
		cout<<"Ingrese el nombre del primer jugador: "<<endl;
		cin>>jugador1;
		
		cout<<"Ingrese el nombre del segundo jugador: "<<endl;	
		cin>>jugador2;
		
		if ((jugador1 != " ")&&(jugador2 != " ")){
			jugadores = true;
			cout<<"Listo empecemos a jugar"<< endl;
		}
		
		cout<<"========================================"<<endl;
	while((longf1 > 0) || (longf2 > 0) || (longf3 > 0)){
	
		
		//-----------------jugador 1--------------------------------	
		cout<<jugador1<<" ingrese la fila a eliminar: "<<endl;
		cin>>fila_j1;
		
		cout<<"y cuantos elementos va eliminar?: "<<endl;
		cin>>cantidad1;
		puntosj1 = puntosj1 + cantidad1;
		
		
		// correremos el procedimiento que va a eliminar
		if ((cantidad1 >= 1) && (cantidad1<=3)&&(fila_j1==1)){
			quitarf1(cantidad1);
		}
		
		if ((cantidad1 >= 1) && (cantidad1<=5)&&(fila_j1==2)){
			quitarf2(cantidad1);
		}
		
		if ((cantidad1 >= 1) && (cantidad1<=7)&&(fila_j1==3)){
			quitarf3(cantidad1);
		}
		
		//-----------jugador 2----------------------
		
		
		
		cout<<jugador2<<" ingrese la fila a eliminar: "<<endl;
		cin>>fila_j2;
		
		cout<<"y cuantos elementos va eliminar?:"<<endl;
		cin>>cantidad2;
		puntosj2 = puntosj2 + cantidad2;
		
		
		if ((cantidad2 >= 1) && (cantidad2<=3)&&(fila_j2==1)){
			quitarf1(cantidad2);
		}
		
		if ((cantidad2 >= 1) && (cantidad2<=5)&&(fila_j2==2)){
			quitarf2(cantidad2);
		}
		
		if ((cantidad2 >= 1) && (cantidad2<=7)&&(fila_j2==3)){
			quitarf3(cantidad2);
		}
		mostrar(longf1, longf2, longf3);
	}	

		cout<<jugador1<<" su puntaje es: "<<puntosj1<<endl;
		cout<<jugador2<<" su puntaje es: "<<puntosj2<<endl;
		
		if (puntosj1>puntosj2){
			cout<<"El campeon es: "<<jugador1<<endl;
			
			
		}else if (puntosj1 == puntosj2){
			cout<<"Es un empate "<<endl;
			
		}else{
			cout<<"El campeon es: "<<jugador2<<endl;
		}
		
		turno++;
		
		//cout<<longf1<<endl;
		//cout<<longf2<<endl;
		//cout<<longf3<<endl;
		
		return 0;
}
