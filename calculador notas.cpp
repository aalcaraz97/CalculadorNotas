#include <iostream>
#include <string>
#include "stdlib.h"
using namespace std;

int main() {
	
	cout << "## Bienvenido al calculador de notas: Por favor, escribe la asignatura de la que quieres saber tu nota: ##" << endl << endl;
	cout << "       1) AC " << endl;
	cout << "       2) XC " << endl;
	cout << "       3) IDI " << endl;
	cout << "       4) IES " << endl;
	cout << "       5) EDA " << endl;
	cout << "       6) BD " << endl;
	
	int n;
	int s;
	while (cin >> n) {
	if(n == 1) {								/* AC */
		cout << "Has elegido AC. Por favor, introduce tus notas y en el caso de querer saber que nota necesitas para aprobar, escribe SI en la pregunta de la casilla del Control 3 " << endl << endl;
		double c1,c2,c3,lab,mlab,diez;
		bool nop = false;
		double nota;
		cout << "Control 1: ";
		cin >> c1;
		cout << "Control 2: ";
		cin >> c2;
		cout << "Quieres saber cuanto necesitas en el C3 para aprobar? Introduce 1 si quieres saberlo, 0 si no: ";
		cin >> s;
		if(s == 0) {
			nop = true;
			cout << "Control 3: ";
			cin >> c3;
		}
		else nop = false;
		cout << "Examen Lab: ";
		cin >> lab;
		cout << "Media Practicas: ";
		cin >> mlab;
		cout << "Introduce tu % de problemas (entre 0 y 1): ";
		cin >> diez;
		if(nop) {
			nota = (0.15*c1 + 0.25*c2 + 0.4*c3 + 0.1*lab + 0.1*mlab);
			nota += diez*0.1*nota;
		}
		else {
			nota = (0.15*c1 + 0.25*c2 + 0.4*0 + 0.1*lab + 0.1*mlab);
			nota += diez*0.1*nota;
			cout << endl;
			if(nota >= 5) cout << "NECESITAS UN 0 EN EL CONTROL 3 PARA APROBAR. FELICIDADES!! " << endl << endl;
			else cout << "NECESITAS UN " << (5.0-nota)/0.4 << " EN EL CONTROL 3 PARA APROBAR " << endl << endl;
		}
		cout << endl;
		cout << "TU NOTA FINAL DE AC ES:  " << nota << endl << endl;
		
		cout << "-----------------------------------------------------------------------------------------------------------"<< endl;
		
		cout << "## Bienvenido al calculador de notas: Por favor, escribe la asignatura de la que quieres saber tu nota: ##" << endl << endl;
		cout << "       1) AC " << endl;
		cout << "       2) XC " << endl;
		cout << "       3) IDI " << endl;
		cout << "       4) IES " << endl;
		cout << "       5) EDA " << endl;
		cout << "       6) BD " << endl;
		}
	
		
	else if(n == 2) {                           /* XC */
		cout << "Has elegido XC. Por favor, introduce tus notas y en el caso de querer saber que nota necesitas para aprobar,escribe SI en la pregunta de la casilla del Control 3 " << endl << endl;
		double c1,c2,c3,lab,mlab;
		bool nop = false;
		double nota;
		cout << "Control 1: ";
		cin >> c1;
		cout << "Control 2: ";
		cin >> c2;
		cout << "Quieres saber cuanto necesitas en el C3 para aprobar? Introduce 1 si quieres saberlo, 0 si no: ";
		cin >> s;
		if(s == 0) {
			nop = true;
			cout << "Control 3: ";
			cin >> c3;
		}
		else nop = false;
		cout << "Examen Lab: ";
		cin >> lab;
		cout << "Media Labs: ";
		cin >> mlab;
		if(nop) nota = (0.3*c1 + 0.3*c2 + 0.15*c3 + 0.1875*lab + 0.0625*mlab);
		else {
			nota = (0.3*c1 + 0.3*c2 + 0.15*0 + 0.1875*lab + 0.0625*mlab);
			cout << endl;
			if(nota >= 5) cout << "NECESITAS UN 0 EN EL CONTROL 3 PARA APROBAR. FELICIDADES!! " << endl << endl;
			else cout << "NECESITAS UN " << (5.0-nota)/0.15 << " EN EL CONTROL 3 PARA APROBAR " << endl << endl;
		}
		cout << endl;
		cout << "TU NOTA FINAL DE XC ES:  " << nota << endl << endl;
		cout << "-----------------------------------------------------------------------------------------------------------"<< endl;
		
		cout << "## Bienvenido al calculador de notas: Por favor, escribe la asignatura de la que quieres saber tu nota: ##" << endl << endl;
		cout << "       1) AC " << endl;
		cout << "       2) XC " << endl;
		cout << "       3) IDI " << endl;
		cout << "       4) IES " << endl;
		cout << "       5) EDA " << endl;
	cout << "       6) BD " << endl;
		
	}
		
		
	else if(n == 3) {                           /* IDI */
		cout << "Has elegido IDI. Por favor, introduce tus notas y en el caso de querer saber que nota necesitas para aprobar, escribe SI en la pregunta de la casilla del FINAL " << endl << endl;
		double par,lab,final;
		bool nop = false;
		double nota;
		cout << "Parcial: ";
		cin >> par;
		cout << "Lab: ";
		cin >> lab;
		cout << "Quieres saber cuanto necesitas en el FINAL para aprobar? Introduce 1 si quieres saberlo, 0 si no: ";
		cin >> s;
		if(s == 0) {
			nop = true;
			cout << "Final: ";
			cin >> final;
		}
		else nop = false;
	
		if(nop) nota = (0.25*par + 0.25*lab + 0.5*final);
		else {
			nota = (0.25*par + 0.25*lab + 0.5*0);
			cout << endl;
			if(nota >= 5) cout << "NECESITAS UN 0 EN EL FINAL PARA APROBAR. FELICIDADES!! " << endl << endl;
			else cout << "NECESITAS UN " << (5.0-nota)/0.5 << " EN EL FINAL PARA APROBAR " << endl << endl;
		}
		cout << endl;
		cout << "TU NOTA FINAL DE IDI ES:  " << nota << endl << endl;
		cout << "-----------------------------------------------------------------------------------------------------------"<< endl;
		
		cout << "## Bienvenido al calculador de notas: Por favor, escribe la asignatura de la que quieres saber tu nota: ##" << endl << endl;
		cout << "       1) AC " << endl;
		cout << "       2) XC " << endl;
		cout << "       3) IDI " << endl;
		cout << "       4) IES " << endl;
		cout << "       5) EDA " << endl;
	cout << "       6) BD " << endl;
		
	}
	
	
	else if(n == 4) {                           /* IES */
		cout << "Has elegido IES. Por favor, introduce tus notas y en el caso de querer saber que nota necesitas para aprobar, escribe SI en la pregunta de la casilla de la FHC3 " << endl << endl;
		double c1,c2,fhc1,fhc2,fhc3,part;
		bool nop = false;
		double nota;
		cout << "Control 1: ";
		cin >> c1;
		cout << "FHC 1: ";
		cin >> fhc1;
		cout << "FHC 2: ";
		cin >> fhc2;
		cout << "Control 2: ";
		cin >> c2;
		cout << "Quieres saber cuanto necesitas en la FHC3 para aprobar? Introduce 1 si quieres saberlo, 0 si no: ";
		cin >> s;
		if(s == 0) {
			nop = true;
			cout << "FHC 3: ";
			cin >> fhc3;
		}
		else nop = false;
		cout << "Introduce tu % de participacion (entre 0 y 1): ";
		cin >> part;
		if(nop) nota = (0.10*c1 + 0.25*fhc1 + 0.15*fhc2 + 0.15*c2 + 0.25*fhc3 + part);
		else {
			nota = (0.10*c1 + 0.25*fhc1 + 0.15*fhc2 + 0.15*c2 + 0.25*0 + part);
			cout << endl;
			if(nota >= 5) cout << "NECESITAS UN 0 EN LA FHC PARA APROBAR. FELICIDADES!! " << endl << endl;
			else cout << "NECESITAS UN " << (5.0-nota)/0.25 << " EN LA FHC3 PARA APROBAR " << endl << endl;
		}
		cout << endl;
		cout << "TU NOTA FINAL DE IES ES:  " << nota << endl << endl;
		cout << "-----------------------------------------------------------------------------------------------------------"<< endl;
		
		cout << "## Bienvenido al calculador de notas: Por favor, escribe la asignatura de la que quieres saber tu nota: ##" << endl << endl;
		cout << "       1) AC " << endl;
		cout << "       2) XC " << endl;
		cout << "       3) IDI " << endl;
		cout << "       4) IES " << endl;
		cout << "       5) EDA " << endl;
	cout << "       6) BD " << endl;
	}
	
	
	else if(n == 5) {                           /* EDA */
		cout << "Has elegido EDA. Por favor, introduce tus notas y en el caso de querer saber que nota necesitas para aprobar, escribe SI en la pregunta de la casilla del FINAL " << endl << endl;
		double par,exlab,final,joc;
		bool nop = false;
		double nota, nota2,n3,n4;
		cout << "Parcial: ";
		cin >> par;
		cout << "Examen PC: ";
		cin >> exlab;
		cout << "Juego EDA (nota sobre 2): ";
		cin >> joc;
		cout << "Quieres saber cuanto necesitas en el FINAL para aprobar? Introduce 1 si quieres saberlo, 0 si no: ";
		cin >> s;
		if(s == 0) {
			nop = true;
			cout << "Final: ";
			cin >> final;
		}
		else nop = false;
	
		if(nop) {
			  n3 = (0.3*par + 0.3*exlab + 0.3*final + joc);
			  n4 = (0*par + 0.3*exlab + 0.6*final + joc);
			  if(n3 >= n4) nota = n3;
			  else nota = n4;
		}
		else {
			nota = (0.3*par + 0.3*exlab + 0*final + joc);
			nota2 = (0*par + 0.3*exlab + 0*final + joc);
			cout << endl;
			if(nota >= 5 or nota2 >= 5) cout << "NECESITAS UN 0 EN EL FINAL PARA APROBAR. FELICIDADES!! " << endl << endl;
			else {
				n3 = (5.0-nota)/0.3;
				n4 = (5.0-nota2)/0.6;
				if(n4 >= n3) cout << "NECESITAS UN " << n3 << " EN EL FINAL PARA APROBAR " << endl << endl;
				else cout << "NECESITAS UN " << n4 << " EN EL FINAL PARA APROBAR " << endl << endl;
			}
		}
		cout << endl;
		cout << "TU NOTA FINAL DE EDA ES:  " << nota << endl << endl;
		cout << "-----------------------------------------------------------------------------------------------------------"<< endl;
		
		cout << "## Bienvenido al calculador de notas: Por favor, escribe la asignatura de la que quieres saber tu nota: ##" << endl << endl;
		cout << "       1) AC " << endl;
		cout << "       2) XC " << endl;
		cout << "       3) IDI " << endl;
		cout << "       4) IES " << endl;
		cout << "       5) EDA " << endl;
		cout << "       6) BD " << endl;
		
	}
	
	
	
	else if(n == 6) {                           /* BD */
		cout << "Has elegido BD. Por favor, introduce tus notas y en el caso de querer saber que nota necesitas para aprobar,escribe SI en la pregunta del FINAL" << endl << endl;
		double l1,l2,l3,final,prob;
		bool nop = false;
		double nota,nota2,n2,n3;
		cout << "Lab 1: ";
		cin >> l1;
		cout << "Lab 2: ";
		cin >> l2;
		cout << "Lab 3: ";
		cin >> l3;
		cout << "Media Problemas: ";
		cin >> prob;
		cout << "Quieres saber cuanto necesitas en el FINAL para aprobar? Introduce 1 si quieres saberlo, 0 si no: ";
		cin >> s;
		if(s == 0) {
			nop = true;
			cout << "FINAL: ";
			cin >> final;
		}
		else nop = false;
		
		if(nop) {
			n2 = (0.1*l1 + 0.075*l2 + 0.075*l3 + 0.15*prob + 0.60*final);
			n3 = (0.1*l1 + 0.075*l2 + 0.075*l3 + 0*prob + 0.75*final);
			if(n3 >= n2) nota = n3;
			else nota = n2;
		}
		else {
			nota = (0.1*l1 + 0.075*l2 + 0.075*l3 + 0.15*prob + 0.60*0);
			nota2 = (0.1*l1 + 0.075*l2 + 0.075*l3 + 0*prob + 0.75*0);
			cout << endl;
			if(nota >= 5 or nota2 >= 5) cout << "NECESITAS UN 0 EN EL FINAL PARA APROBAR. FELICIDADES!! " << endl << endl;
			else {
				n2 = (5.0-nota)/0.6;
				n3 = (5.0-nota2)/0.75;
				if(n2 >= n3) cout << "NECESITAS UN " << n3 << " EN EL FINAL PARA APROBAR " << endl << endl;
				else cout << "NECESITAS UN " << n2 << " EN EL FINAL PARA APROBAR " << endl << endl;
		}
	}
		cout << endl;
		cout << "TU NOTA FINAL DE BD ES:  " << nota << endl << endl;
		cout << "-----------------------------------------------------------------------------------------------------------"<< endl;
		
		cout << "## Bienvenido al calculador de notas: Por favor, escribe la asignatura de la que quieres saber tu nota: ##" << endl << endl;
		cout << "       1) AC " << endl;
		cout << "       2) XC " << endl;
		cout << "       3) IDI " << endl;
		cout << "       4) IES " << endl;
		cout << "       5) EDA " << endl;
	cout << "       6) BD " << endl;
		
	}
	
	}
}
