#include <iostream>
#include <conio.h>
#include <string>
#include <ctime>

using namespace System;
using namespace std;

int logo[12][29]{
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{1,1,1,1,0,0,0,0,1,1,1,0,0,1,0,0,0,1,0,0,1,1,1,0,0,0,1,1,1},
	{1,0,0,0,1,0,0,1,0,0,0,1,0,1,1,0,1,1,0,1,0,0,0,1,0,1,0,0,0},
	{1,0,0,0,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,0},
	{1,0,0,0,0,1,0,1,1,1,1,1,0,1,0,0,0,1,0,1,1,1,1,1,0,1,0,0,0},
	{1,0,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,0,1,1,1},
	{1,0,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,0,0,0,1},
	{1,0,0,0,1,0,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,0,0,0,1},
	{1,1,1,1,0,0,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,1,1,1},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
};

int Ganador[15][40]{
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1},
{0,0,0,0,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1},
{0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1},
{0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1},
{0,2,0,0,0,0,0,0,0,0,2,2,0,2,0,0,0,0,0,2,2,0,0,2,2,0,2,2,2,0,2,2,2,0,1,1,1,1,1,1},
{0,2,0,0,0,2,2,2,0,2,0,0,2,0,2,2,2,0,2,0,0,2,0,2,0,0,0,2,0,0,2,0,0,0,1,1,1,1,1,1},
{0,2,2,0,0,0,0,2,0,2,0,0,2,0,2,0,2,0,2,0,0,2,0,2,2,0,0,2,0,0,2,2,2,0,1,1,1,1,1,1},
{0,0,2,0,0,0,2,0,0,2,2,2,2,0,2,0,2,0,2,2,2,2,0,0,2,0,0,2,0,0,2,0,0,0,1,1,1,1,1,1},
{0,0,0,2,2,2,0,0,0,2,0,0,2,0,2,0,2,0,2,0,0,2,0,2,2,0,0,2,0,0,2,2,2,0,1,1,1,1,1,1},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1},
{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1} };

int Empate[12][34]{
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1},
{0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,1,1,0,0,1,1,1,1,0,0,1,1,0,0,1,0,1},
{0,1,0,0,0,1,1,1,1,1,0,1,0,0,1,0,1,0,0,1,0,0,1,1,0,0,1,0,0,0,0,1,0,1},
{0,1,1,1,0,1,0,1,0,1,0,1,0,0,1,0,1,1,1,1,0,0,1,1,0,0,1,1,1,0,0,1,0,1},
{0,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,1,0,0,1,0,0,1,1,0,0,1,0,0,0,0,1,0,1},
{0,0,1,1,0,1,0,0,0,1,0,1,0,0,0,0,1,0,0,1,0,0,1,1,0,0,0,1,1,0,0,0,0,1},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1} };

int tablero[24][48]{
{1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0},
{1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0},
{1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0},
{0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1},
{0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1},
{0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1},
{1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0},
{1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0},
{1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0},
{0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1},
{0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1},
{0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1},
{1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0},
{1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0},
{1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0},
{0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1},
{0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1},
{0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1},
{1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0},
{1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0},
{1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0},
{0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1},
{0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1},
{0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1} };

int fichaIn[3][6]{
	{0,1,1,1,1,0},
	{0,2,4,5,2,0},
	{0,3,3,3,3,0}
};

struct ficha {
	int posFila, posColumna;
	bool reina;
	bool vivo;
	bool movimiento;
	bool condComer;
};

typedef struct {
	string nombre;
	int cantFichas;
	int valor;
	struct ficha* fichasJugador = new ficha[12];
	int cantMov;
}datosJugador;

void posicionar(int x, int y) { //Alessandro
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			cout << " ";
		}
		cout << endl;
	}
}
void pintarLogo() { //Alessandro
	for (int i = 0; i < 12; i++) {//Filas
		for (int j = 0; j < 29; j++) {//Columnas
			Console::SetCursorPosition(j + 35, i + 2); //(Columnas,Filas)
			if (logo[i][j] == 0) Console::BackgroundColor = ConsoleColor::Black;
			if (logo[i][j] == 1) Console::BackgroundColor = ConsoleColor::White;
			cout << " ";
			Console::BackgroundColor = ConsoleColor::Black;
		}
		cout << endl;
	}
}

void valorJugador(datosJugador* jug, string jug1, string jug2, int cant) {//Jhosaim
	jug[0].nombre = jug1;
	jug[1].nombre = jug2;
	int contColumna, contFila;
	for (int j = 0; j < 2; j++) {
		jug[j].cantFichas = cant;
		jug[j].cantMov = 0;
		jug[j].valor = j;
		if (j == 0) { contColumna = 0; contFila = 5; }
		else { contColumna = 1; contFila = 0; }
		for (int i = 0; i < cant; i++) {
			jug[j].fichasJugador[i].vivo = true;
			jug[j].fichasJugador[i].reina = false;
			jug[j].fichasJugador[i].condComer = false;
			jug[j].fichasJugador[i].posFila = contFila;
			jug[j].fichasJugador[i].posColumna = contColumna;
			contColumna += 2;
			if (contColumna == 9)contColumna = 0;
			if (contColumna == 8)contColumna = 1;
			if ((i + 1) % 4 == 0)contFila++;
		}
	}
}

void modoEspecialJuego(datosJugador* jug, int cant, int opcion) {//Jhosaim
	if (opcion == 2) {
		for (int j = 0; j < 2; j++) {
			for (int i = 0; i < cant; i++) {
				jug[j].fichasJugador[i].reina = true;
			}
		}
	}
}

void posicion(int x, int y) { //Jhosaim
	Console::SetCursorPosition(y, x);
}

void impMsj(int& aux) {//Jhosaim
	posicion(aux, 67); aux++;
}

void generarTablero() {//Mario
	int aux = 8;
	int aux2 = 'A';
	for (int i = 4; i <= 25; i = i + 3) {//Numeros
		posicion(i, 5); cout << aux;
		posicion(i, 62); cout << aux;
		aux--;
	}

	for (int i = 13; i <= 55; i = i + 6) {//Letras
		posicion(1, i); cout << char(aux2);
		posicion(28, i); cout << char(aux2);
		aux2++;
	}

	for (int i = 0; i < 24; i++) { //Tablero
		for (int j = 0; j < 48; j++) {
			posicion(i + 3, j + 10); //Dejar espacio a los numeros del tablero
			if (tablero[i][j] == 0) Console::BackgroundColor = ConsoleColor::DarkRed;
			else Console::BackgroundColor = ConsoleColor::Yellow;
			cout << " ";
			Console::BackgroundColor = ConsoleColor::Black;
		}
	}
}

void borrarFicha(int x, int y) { //Mario
	x *= 3; y *= 6;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 6; j++) {
			posicion(i + x + 3, j + y + 10);
			Console::BackgroundColor = ConsoleColor::DarkRed;
			cout << " ";
		}
	}
	Console::BackgroundColor = ConsoleColor::Black;
}

void dibujarFicha(int x, int y, int color, bool reina) {//Mario
	x *= 3; y *= 6;
	Console::BackgroundColor = ConsoleColor::DarkRed;
	(color == 0) ? Console::ForegroundColor = ConsoleColor::White : Console::ForegroundColor = ConsoleColor::Black;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 6; j++) {
			posicion(i + x + 3, j + y + 10);
			switch (fichaIn[i][j]) {
			case 1:cout << char(220); break;
			case 2:cout << char(219); break;
			case 3:cout << char(223); break;
			case 4: {
				if (reina == true) cout << char(16);
				else cout << char(186);
			} break;
			case 5: {
				if (reina == true) cout << char(17);
				else cout << char(186);
			}break;
			}
		}
	}
	Console::BackgroundColor = ConsoleColor::Black;
	Console::ForegroundColor = ConsoleColor::White;
}

void generarFichas(datosJugador* jug, int cant) {//Jhosaim
	for (int j = 0; j < 2; j++) {
		for (int i = 0; i < cant; i++) {
			if (jug[j].fichasJugador[i].vivo == true)
				dibujarFicha(jug[j].fichasJugador[i].posFila, jug[j].fichasJugador[i].posColumna, jug[j].valor, jug[j].fichasJugador[i].reina);
		}
	}
}

void escogerFicha(int& aux, int& x, int& y) {//Jhosaim
	char columna, auxFila;
	impMsj(aux); cout << "Ingrese la fila y la columna:";
	cin >> auxFila >> columna;
	x = auxFila - '0'; x = 8 - x;
	columna = toupper(columna); y = columna - 'A';
}

int encontrarFicha(datosJugador* jug, int cant, int x, int y, int n) {//Jhosaim
	for (int i = 0; i < cant; i++) {
		if (jug[n].fichasJugador[i].posFila == x && jug[n].fichasJugador[i].posColumna == y) return i;
	}
	return -1;
}

bool comprobarReina(datosJugador* jug, int jugador, int ficha) {//Jhosaim
	if (jug[jugador].fichasJugador[ficha].reina == true)return true;
	return false;
}

void convertirReina(datosJugador* jug, int jugador, int ficha) {//Jhosaim
	int aux;
	(jugador == 0) ? aux = 0 : aux = 7;
	if (jug[jugador].fichasJugador[ficha].posFila == aux) {
		jug[jugador].fichasJugador[ficha].reina = true;
	}
}

void movimientoComerFicha(int x, int& dx, int y, int& dy) {//Jhosaim
	(x - dx > 0) ? dx-- : dx++;
	(y - dy > 0) ? dy-- : dy++;
}

bool validarComerFicha(datosJugador* jug, int cant, int dx, int dy, int jugador, int auxJug) {//Jhosaim
	int auxMov, auxMovv;
	if (dx < 0 || dx>7 || dy < 0 || dy>7) return false;
	auxMovv = encontrarFicha(jug, cant, dx, dy, jug[jugador].valor);
	auxMov = encontrarFicha(jug, cant, dx, dy, jug[auxJug].valor);
	if (auxMov == -1 && auxMovv == -1)return true;
	return false;
}

void comerFicha(datosJugador* jug, int jugador, int ficha) {//Jhosaim
	jug[jugador].fichasJugador[ficha].vivo = false;
	jug[jugador].fichasJugador[ficha].posFila = 0;
	jug[jugador].fichasJugador[ficha].posColumna = 0;
	jug[jugador].cantFichas--;
}

bool validarMovimientoReina(datosJugador* jug, int cant, int x, int y, int& dx, int& dy, int jugador, bool& comer) {//Jhosaim
	int auxJug, auxMov;
	(jugador == 0) ? auxJug = 1 : auxJug = 0;
	comer = false;
	if (x == dx || ((y - dy) != (x - dx) && -(y - dy) != (x - dx))) return false;
	if ((dx + dy) % 2 == 0) return false;
	if (encontrarFicha(jug, cant, dx, dy, jug[jugador].valor) != -1) return false;
	int n = dy - y, n1 = dx - x, auxMovX, auxMovY;

	if (n1 > 0) {
		if (n > 0) { auxMovX = 1; auxMovY = 1; }
		else { auxMovX = 1; auxMovY = -1; }
	}
	else {
		if (n > 0) { auxMovX = -1; auxMovY = 1; }
		else { auxMovX = -1; auxMovY = -1; }
		n1 = -n1;
	}

	for (int i = n1 - 1; i > 0; i--) {
		int auxX = i * auxMovX, auxY = i * auxMovY, auxMovv;
		auxMov = encontrarFicha(jug, cant, x + auxX, y + auxY, jug[jugador].valor);
		auxMovv = encontrarFicha(jug, cant, x + auxX, y + auxY, jug[auxJug].valor);
		if (auxMov != -1 || auxMovv != -1)return false;
	}

	auxMov = encontrarFicha(jug, cant, dx, dy, jug[auxJug].valor);

	if (auxMov != -1) {
		movimientoComerFicha(x, dx, y, dy);
		if (validarComerFicha(jug, cant, dx, dy, jugador, auxJug) == false)return false;
		comerFicha(jug, auxJug, auxMov);
		comer = true;
	}
	return true;
}

bool validarMoviento(datosJugador* jug, int cant, int x, int y, int& dx, int& dy, int jugador, bool& comer) {//Jhosaim
	comer = false;
	int auxJug, auxMov;
	(jugador == 0) ? auxJug = 1 : auxJug = 0;
	if (dx < 0 || dx>7 || dy < 0 || dy>7) return false;
	if ((x - dx != pow(-1, jugador)) || (y - dy != 1 && y - dy != -1)) return false;
	if ((dx + dy) % 2 == 0) return false;
	if (encontrarFicha(jug, cant, dx, dy, jug[jugador].valor) != -1) return false;
	auxMov = encontrarFicha(jug, cant, dx, dy, jug[auxJug].valor);
	if (auxMov != -1) {
		movimientoComerFicha(x, dx, y, dy);
		if (validarComerFicha(jug, cant, dx, dy, jugador, auxJug) == false) return false;
		comerFicha(jug, auxJug, auxMov);
		comer = true;
	}
	return true;
}

void posiblesMovimientos(int x, int y, int n, int& arrIzq, int& arrDer, int& abIzq, int& abDer) {//Jhosaim
	int arr = 0, ab = 0, izq = 0, der = 0;
	for (int i = 0; i < n; i++) {
		if (x - i > 0)arr++;
		if (x + i < n) ab++;
		if (y - i > 0)izq++;
		if (y + i < n) der++;
	}

	if (arr == izq) arrIzq = arr;
	else {
		if (arr < izq)arrIzq = arr;
		if (arr > izq)arrIzq = izq;
	}
	if (arr == der) arrDer = arr;
	else {
		if (arr < der)arrDer = arr;
		if (arr > der)arrDer = der;
	}
	if (ab == izq) abIzq = ab;
	else {
		if (ab < izq)abIzq = ab;
		if (ab > izq)abIzq = izq;
	}
	if (ab == der) abDer = ab;
	else {
		if (ab < der)abDer = ab;
		if (ab > der)abDer = der;
	}
}

bool comprobarMovimientosReina(datosJugador* jug, int cant, int x, int y, int jugador, int auxJug, bool& comer) {//Jhosaim
	int arrIzq = 0, arrDer = 0, abDer = 0, abIzq = 0;
	bool arI = true, arD = true, abD = true, abI = true;
	int aux1, aux2, n = 7;//n:Casillero Maximo (Tablero8x8-->7=Max)

	posiblesMovimientos(x, y, n, arrIzq, arrDer, abIzq, abDer);

	if (arrIzq > 0) {//Arriba Izquierda
		for (int i = 1; i <= arrIzq; i++) {
			int auxX, auxY;
			auxX = x - i; auxY = y - i;
			aux1 = encontrarFicha(jug, cant, auxX, auxY, jugador);
			aux2 = encontrarFicha(jug, cant, auxX, auxY, auxJug);
			if (i == 1) {
				if (aux1 != -1) { arI = false; break; }
				if (aux2 != -1) {
					aux1 = encontrarFicha(jug, cant, auxX - 1, auxY - 1, jugador);
					aux2 = encontrarFicha(jug, cant, auxX - 1, auxY - 1, auxJug);
					if (aux1 != -1 || aux2 != -1 || auxY - 1 < 0 || auxX - 1 < 0) { arI = false; break; }
					else comer = true;
				}
				if (comer == true) break;
			}
			aux1 = encontrarFicha(jug, cant, auxX, auxY, jugador);
			if (aux1 != -1)break;
			aux2 = encontrarFicha(jug, cant, auxX, auxY, auxJug);
			if (aux2 != -1) {
				aux1 = encontrarFicha(jug, cant, auxX - 1, auxY - 1, jugador);
				aux2 = encontrarFicha(jug, cant, auxX - 1, auxY - 1, auxJug);
				if (aux1 == -1 && aux2 == -1 && auxY - 1 >= 0 && auxX - 1 >= 0)comer = true;
				break;
			}
		}
	}
	else arI = false;

	if (arrDer > 0) {//Arriba Derecha
		for (int i = 1; i <= arrDer; i++) {
			int auxX, auxY;
			auxX = x - i; auxY = y + i;
			aux1 = encontrarFicha(jug, cant, auxX, auxY, jugador);
			aux2 = encontrarFicha(jug, cant, auxX, auxY, auxJug);
			if (i == 1) {
				if (aux1 != -1) { arD = false; break; }
				if (aux2 != -1) {
					aux1 = encontrarFicha(jug, cant, auxX - 1, auxY + 1, jugador);
					aux2 = encontrarFicha(jug, cant, auxX - 1, auxY + 1, auxJug);
					if (aux1 != -1 || aux2 != -1 || auxY + 1 > 7 || auxX - 1 < 0) { arD = false; break; }
					else comer = true;
				}
				if (comer == true) break;
			}
			aux1 = encontrarFicha(jug, cant, auxX, auxY, jugador);
			if (aux1 != -1)break;
			aux2 = encontrarFicha(jug, cant, auxX, auxY, auxJug);
			if (aux2 != -1) {
				aux1 = encontrarFicha(jug, cant, auxX - 1, auxY + 1, jugador);
				aux2 = encontrarFicha(jug, cant, auxX - 1, auxY + 1, auxJug);
				if (aux1 == -1 && aux2 == -1 && auxY + 1 <= 7 && auxX - 1 >= 0) comer = true;
				break;
			}
		}
	}
	else arD = false;

	if (abIzq > 0) {//Abajo Izquierda
		for (int i = 1; i <= abIzq; i++) {
			int auxX, auxY;
			auxX = x + i; auxY = y - i;
			aux1 = encontrarFicha(jug, cant, auxX, auxY, jugador);
			aux2 = encontrarFicha(jug, cant, auxX, auxY, auxJug);
			if (i == 1) {
				if (aux1 != -1) { abI = false; break; }
				if (aux2 != -1) {
					aux1 = encontrarFicha(jug, cant, auxX + 1, auxY - 1, jugador);
					aux2 = encontrarFicha(jug, cant, auxX + 1, auxY - 1, auxJug);
					if (aux1 != -1 || aux2 != -1 || auxY - 1 < 0 || auxX + 1 > 7) { abI = false; break; }
					else comer = true;
				}
				if (comer == true) break;
			}
			aux1 = encontrarFicha(jug, cant, auxX, auxY, jugador);
			if (aux1 != -1)break;
			aux2 = encontrarFicha(jug, cant, auxX, auxY, auxJug);
			if (aux2 != -1) {

				aux1 = encontrarFicha(jug, cant, auxX + 1, auxY - 1, jugador);
				aux2 = encontrarFicha(jug, cant, auxX + 1, auxY - 1, auxJug);
				if (aux1 == -1 && aux2 == -1 && auxY - 1 >= 0 && auxX + 1 <= 7)comer = true;
				break;
			}
		}
	}
	else abI = false;

	if (abDer > 0) {//Abajo Derecha
		for (int i = 1; i <= abDer; i++) {
			int auxX, auxY;
			auxX = x + i; auxY = y + i;
			aux1 = encontrarFicha(jug, cant, auxX, auxY, jugador);
			aux2 = encontrarFicha(jug, cant, auxX, auxY, auxJug);
			if (i == 1) {
				if (aux1 != -1) { abD = false; break; }
				if (aux2 != -1) {
					aux1 = encontrarFicha(jug, cant, auxX + 1, auxY + 1, jugador);
					aux2 = encontrarFicha(jug, cant, auxX + 1, auxY + 1, auxJug);
					if (aux1 != -1 || aux2 != -1 || auxY + 1 > 7 || auxX + 1 > 7) { abD = false; break; }
					else comer = true;
				}
				if (comer == true) break;
			}
			aux1 = encontrarFicha(jug, cant, auxX, auxY, jugador);
			if (aux1 != -1)break;
			aux2 = encontrarFicha(jug, cant, auxX, auxY, auxJug);
			if (aux2 != -1) {
				aux1 = encontrarFicha(jug, cant, auxX + 1, auxY + 1, jugador);
				aux2 = encontrarFicha(jug, cant, auxX + 1, auxY + 1, auxJug);

				if (aux1 == -1 && aux2 == -1 && auxY + 1 <= 7 && auxX + 1 <= 7)comer = true;
				break;
			}
		}
	}
	else abD = false;

	if (arI == false && abI == false && arD == false && abD == false) return false;
	else return true;
}

bool comprobarMovimientosFicha(datosJugador* jug, int cant, int x, int y, int jugador, bool& comer) {//Jhosaim
	comer = false;
	int ficha = encontrarFicha(jug, cant, x, y, jugador);

	if (jug[jugador].fichasJugador[ficha].vivo == false) return false;

	int auxJug, auxMovIzq, auxMovDer, auxMovIzq1, auxMovDer1;
	int dx, dyIzq = -1, dyDer = 1;
	bool movVer = true, movIzq = true, movDer = true, comerIzq = false, comerDer = false;
	if (jugador == 0) { dx = -1; auxJug = 1; }
	else { dx = 1; auxJug = 0; }

	if (jug[jugador].fichasJugador[ficha].reina == true) {
		if (comprobarMovimientosReina(jug, cant, x, y, jugador, auxJug, comer) == false)return false;
		return true;
	}
	else { x += dx; dyIzq += y; dyDer += y; }

	if (dyIzq < 0) movIzq = false;
	if (dyDer > 7) movDer = false;
	if (x < 0 || x>7 || (movIzq == false && movDer == false))return false;

	auxMovIzq1 = encontrarFicha(jug, cant, x, dyIzq, jug[jugador].valor);
	auxMovDer1 = encontrarFicha(jug, cant, x, dyDer, jug[jugador].valor);

	if (auxMovIzq1 != -1 || dyIzq < 0) movIzq = false;
	if (auxMovDer1 != -1 || dyDer > 7) movDer = false;
	if (movIzq == false && movDer == false) return false;

	auxMovIzq = encontrarFicha(jug, cant, x, dyIzq, jug[auxJug].valor);
	auxMovDer = encontrarFicha(jug, cant, x, dyDer, jug[auxJug].valor);

	x += dx; dyIzq--; dyDer++;

	if (movIzq == true && auxMovIzq != -1) {
		auxMovIzq = encontrarFicha(jug, cant, x, dyIzq, jug[auxJug].valor);
		auxMovIzq1 = encontrarFicha(jug, cant, x, dyIzq, jug[jugador].valor);
		if (dyIzq < 0 || auxMovIzq != -1 || auxMovIzq1 != -1 || x < 0 || x>7) { movIzq = false; comerIzq = false; }
		else { movIzq = true; comerIzq = true; }
	}
	if (movDer == true && auxMovDer != -1) {
		auxMovDer = encontrarFicha(jug, cant, x, dyDer, jug[auxJug].valor);
		auxMovDer1 = encontrarFicha(jug, cant, x, dyDer, jug[jugador].valor);
		if (dyDer > 7 || auxMovDer != -1 || auxMovDer1 != -1 || x < 0 || x>7) { movDer = false; comerDer = false; }
		else { movDer = true; comerDer = true; }
	}
	else { comerDer = false; }
	if (comerIzq == true || comerDer == true) comer = true;
	else comer = false;
	if (movDer == false && movIzq == false) return false;
	return true;
}

void comprobarMovimientosJugador(datosJugador* jug, int cant, int jugador) {//Jhosaim
	int x, y;
	bool comer;
	for (int i = 0; i < cant; i++) {
		x = jug[jugador].fichasJugador[i].posFila;
		y = jug[jugador].fichasJugador[i].posColumna;
		jug[jugador].fichasJugador[i].movimiento = comprobarMovimientosFicha(jug, cant, x, y, jugador, comer);
		jug[jugador].fichasJugador[i].condComer = comer;
	}
}

void moverFichaCoordenadas(datosJugador* jug, int cant, int turnos, int& aux, int& cont, int& xIn, int& xF, int& yIn, int& yF) {//Jhosaim
	int jugador;
	int x, y, dx, dy, ficha, contCaptura;
	bool auxMov = true, movFicha = true, comerFicha = false, puedeComer, capturaObligatoria = false;
	(turnos % 2 == 1) ? jugador = 0 : jugador = 1;

	for (int i = 0; i < cant; i++) {//Captura Obligatoria
		if (jug[jugador].fichasJugador[i].condComer == true) capturaObligatoria = true;
	}

	do {
		aux++;
		impMsj(aux); cout << "Seleccione la ficha (Int. " << cont << "):";
		escogerFicha(aux, x, y);
		ficha = encontrarFicha(jug, cant, x, y, jug[jugador].valor);
		if (ficha == -1) { impMsj(aux); cout << "Ficha Incorrecta"; cont++; }
		else movFicha = comprobarMovimientosFicha(jug, cant, x, y, jugador, puedeComer);
		if (movFicha == false) { impMsj(aux); cout << "La ficha no tiene mov disponibles"; cont++; }
		else {
			if (capturaObligatoria == true) {
				if (puedeComer == false) { impMsj(aux); cout << "Existe otra ficha que puede capturar"; cont++; }
			}
		}
		if (cont > 5)break;
	} while (ficha == -1 || movFicha == false || (capturaObligatoria == true && puedeComer == false));
	xIn = x; yIn = y;
	do {
		if (cont > 5)break;
		aux++;
		impMsj(aux); cout << "Nueva posici" << char(162) << "n de la ficha (Int. " << cont << "):";
		escogerFicha(aux, dx, dy);
		if (comprobarReina(jug, jugador, ficha) == true) auxMov = validarMovimientoReina(jug, cant, x, y, dx, dy, jugador, comerFicha);
		else auxMov = validarMoviento(jug, cant, x, y, dx, dy, jugador, comerFicha);
		if (auxMov == false) { impMsj(aux); cout << "Movimiento Incorrecto"; cont++; }
		else {
			if (capturaObligatoria == true && comerFicha == false) { impMsj(aux); cout << "Debe capturar la ficha"; cont++; }
		}
		if (cont > 5)break;
		if (auxMov == true) {
			jug[jugador].fichasJugador[ficha].posFila = dx;
			jug[jugador].fichasJugador[ficha].posColumna = dy;
			convertirReina(jug, jugador, ficha);
		}
	} while (auxMov == false || (capturaObligatoria == true && comerFicha == false));

	while (comerFicha == true) {//Captura m ltiple
		x = jug[jugador].fichasJugador[ficha].posFila;
		y = jug[jugador].fichasJugador[ficha].posColumna;
		auxMov = comprobarMovimientosFicha(jug, cant, x, y, jugador, puedeComer);
		if (auxMov == false || puedeComer == false)break;
		borrarFicha(xIn, yIn);
		int auxX = x, auxY = y;
		(x - xIn > 0) ? auxX -= 1 : auxX += 1;
		(y - yIn > 0) ? auxY -= 1 : auxY += 1;
		borrarFicha(auxX, auxY);
		dibujarFicha(x, y, jugador, jug[jugador].fichasJugador[ficha].reina); aux++;
		impMsj(aux); cout << "Tiene un movimiento adicional:";
		do {	//Captura obligatoria despues de comer
			impMsj(aux); cout << "Nueva posici" << char(162) << "n de la ficha (Int. " << cont << "):";
			escogerFicha(aux, dx, dy);
			if (comprobarReina(jug, jugador, ficha) == true) auxMov = validarMovimientoReina(jug, cant, x, y, dx, dy, jugador, puedeComer);
			else auxMov = validarMoviento(jug, cant, x, y, dx, dy, jugador, puedeComer);
			if (auxMov == false) { impMsj(aux); cout << "Movimiento Incorrecto"; cont++; }
			else {
				if (puedeComer == false) { impMsj(aux); cout << "Debe capturar la ficha"; cont++; }
			}
			if (cont > 5)break;
		} while (puedeComer == false);
		if (cont > 5)break;
		if (auxMov == true) {
			jug[jugador].fichasJugador[ficha].posFila = dx;
			jug[jugador].fichasJugador[ficha].posColumna = dy;
			convertirReina(jug, jugador, ficha);
		}
	}
	if (cont > 5) {
		dx = xIn; dy = yIn;
	}
	jug[jugador].cantMov++;
	xF = dx; yF = dy;
}

void escogerFichaTeclado(int aux, int& x, int& y, int jugador) {//Alessandro
	bool terminar;
	if (jugador == 0) { x = 5; y = 2; }
	else { x = 2; y = 3; }
	Console::CursorVisible = true;
	while (true) {
		if (kbhit()) {
			int dx = 0, dy = 0;
			terminar = false;
			switch (toupper(getch())) {
			case 'Q': {dx -= 1; dy -= 1; } break;
			case 'E': {dx -= 1; dy += 1; } break;
			case 'Z': {dx += 1; dy -= 1; } break;
			case 'C': {dx += 1; dy += 1; } break;
			case 'S':terminar = true; break;
			}
			if (terminar) break;
			if (x + dx < 0 || x + dx>7 || y + dy < 0 || y + dy>7) { dx = 0, dy = 0; }
			x += dx; y += dy;
		}
		posicion(3 * x + 3, 6 * y + 10);
		_sleep(50);
	};
	Console::CursorVisible = false;
}

void movimientoFichaTeclado(int x, int y, int& dx, int& dy, int jugador, bool reina) {//Alessandro
	Console::CursorVisible = true;
	bool terminar = false;
	while (true) {
		if (kbhit()) {
			int dx1 = 0, dy1 = 0;
			terminar = false;

			switch (toupper(getch())) {
			case 'Q': {dx1 -= 1; dy1 -= 1; } break;
			case 'E': {dx1 -= 1; dy1 += 1; } break;
			case 'Z': {dx1 += 1; dy1 -= 1; } break;
			case 'C': {dx1 += 1; dy1 += 1; } break;
			case 'S':terminar = true; break;
			}
			if (terminar) break;
			borrarFicha(x, y);
			if (x + dx1 < 0 || x + dx1>7 || y + dy1 < 0 || y + dy1>7) { dx1 = 0, dy1 = 0; }
			x += dx1; y += dy1;
		}
		dibujarFicha(x, y, jugador, reina);
		_sleep(50);
	};
	dx = x;
	dy = y;
}

void moverFichaTeclado(datosJugador* jug, int cant, int turnos, int& aux, int& cont, int& xIn, int& xF, int& yIn, int& yF) {//Alessandro
	int jugador;
	int x, y, dx, dy, ficha, contCaptura;
	bool auxMov = true, movFicha = true, comerFicha = false, puedeComer, capturaObligatoria = false;
	(turnos % 2 == 1) ? jugador = 0 : jugador = 1;

	for (int i = 0; i < cant; i++) {//Captura Obligatoria
		if (jug[jugador].fichasJugador[i].condComer == true) capturaObligatoria = true;
	}

	do {
		aux++;
		impMsj(aux); cout << "Seleccione una ficha (Int. " << cont << ")";
		escogerFichaTeclado(aux, x, y, jugador);
		ficha = encontrarFicha(jug, cant, x, y, jug[jugador].valor);
		if (ficha == -1) { impMsj(aux); cout << "Ficha Incorrecta: [" << 8 - x << ":" << char(y + 'A') << "]"; cont++; }
		else {
			impMsj(aux); cout << "Ficha Seleccionada: [" << 8 - x << ":" << char(y + 'A') << "]";
			movFicha = comprobarMovimientosFicha(jug, cant, x, y, jugador, puedeComer);
			if (movFicha == false) { impMsj(aux); cout << "La ficha no tiene mov disponibles"; cont++; }
			else {
				if (capturaObligatoria == true && puedeComer == false) { impMsj(aux); cout << "Existe otra ficha que puede capturar"; cont++; }
			}
		}
		if (cont > 5)break;
	} while (ficha == -1 || movFicha == false || (capturaObligatoria == true && puedeComer == false));
	xIn = x; yIn = y;
	do {
		if (cont > 5)break;
		aux++;
		impMsj(aux); cout << "Mueva la ficha seleccionada (Int. " << cont << ")";
		movimientoFichaTeclado(x, y, dx, dy, jugador, jug[jugador].fichasJugador[ficha].reina);
		if (comprobarReina(jug, jugador, ficha) == true) auxMov = validarMovimientoReina(jug, cant, x, y, dx, dy, jugador, comerFicha);
		else auxMov = validarMoviento(jug, cant, x, y, dx, dy, jugador, comerFicha);
		if (auxMov == false) { impMsj(aux); cout << "Movimiento Incorrecto"; cont++; borrarFicha(dx, dy); dx = x; dy = y; }
		else {
			if (capturaObligatoria == true && comerFicha == false) { impMsj(aux); cout << "Debe capturar la ficha"; cont++;  borrarFicha(dx, dy); dx = x; dy = y; }
		}
		if (cont > 5)break;
		if (auxMov == true) {
			jug[jugador].fichasJugador[ficha].posFila = dx;
			jug[jugador].fichasJugador[ficha].posColumna = dy;
			convertirReina(jug, jugador, ficha);
		}
	} while (auxMov == false || (capturaObligatoria == true && comerFicha == false));

	while (comerFicha == true) {//Captura Multiple
		x = jug[jugador].fichasJugador[ficha].posFila;
		y = jug[jugador].fichasJugador[ficha].posColumna;
		auxMov = comprobarMovimientosFicha(jug, cant, x, y, jugador, puedeComer);
		if (auxMov == false || puedeComer == false)break;
		int auxX = x, auxY = y;
		(x - xIn > 0) ? auxX -= 1 : auxX += 1;
		(y - yIn > 0) ? auxY -= 1 : auxY += 1;
		borrarFicha(auxX, auxY);
		dibujarFicha(dx, dy, jugador, jug[jugador].fichasJugador[ficha].reina); aux++;
		impMsj(aux); cout << "Tiene un movimiento adicional:";
		do {//Captura obligatoria
			impMsj(aux); cout << "Mueva la ficha seleccionada (Int. " << cont << ")";
			movimientoFichaTeclado(x, y, dx, dy, jugador, jug[jugador].fichasJugador[ficha].reina);
			if (comprobarReina(jug, jugador, ficha) == true) auxMov = validarMovimientoReina(jug, cant, x, y, dx, dy, jugador, puedeComer);
			else auxMov = validarMoviento(jug, cant, x, y, dx, dy, jugador, puedeComer);
			if (auxMov == false) { impMsj(aux); cout << "Movimiento Incorrecto"; cont++; borrarFicha(dx, dy); }
			else {
				if (puedeComer == false) { impMsj(aux); cout << "Debe capturar la ficha"; cont++; borrarFicha(dx, dy); }
			}
			if (cont > 5)break;
		} while (puedeComer == false);
		if (cont > 5)break;
		if (auxMov == true) {
			jug[jugador].fichasJugador[ficha].posFila = dx;
			jug[jugador].fichasJugador[ficha].posColumna = dy;
			convertirReina(jug, jugador, ficha);
		}
	}
	if (cont > 5) {
		dx = xIn; dy = yIn;
	}
	jug[jugador].cantMov++;
	xF = dx; yF = dy;
}

void turnosJuego(datosJugador* jug, int cant, int& turnos, char tipo, int& x, int& dx, int& y, int& dy, int& ganador, bool& tablas) {//Jhosaim
	int aux = 6, jugador, cont = 1, auxJug;
	char opcion, confirmacion;
	(turnos % 2 == 1) ? jugador = 0 : jugador = 1;
	(jugador == 0) ? auxJug = 1 : auxJug = 0;

	impMsj(aux); cout << "\t\tTurno de " << jug[jugador].nombre;

	if (tablas == true) {
		Console::CursorVisible = true; aux++;
		impMsj(aux); cout << jug[auxJug].nombre << " ha propuesto tablas.";
		impMsj(aux); cout << char(168) << "Desea terminar el juego en tablas? S:Si N:No";
		impMsj(aux);
		do {
			cin >> confirmacion; confirmacion = toupper(confirmacion);
		} while (confirmacion != 'S' && confirmacion != 'N');
		Console::CursorVisible = false;
		if (confirmacion == 'S') ganador = 2;
		else tablas = false;
	}

	if (ganador != 2) {
		switch (tipo) {
		case 'C': {
			moverFichaCoordenadas(jug, cant, turnos, aux, cont, x, dx, y, dy);
		} break;
		case 'T': {
			moverFichaTeclado(jug, cant, turnos, aux, cont, x, dx, y, dy);
		} break;
		}
		turnos++; aux++;
		if (cont <= 5) {
			Console::CursorVisible = true;
			impMsj(aux); cout << "Movimiento V" << char(160) << "lido.";
			impMsj(aux); cout << "C:Continuar R:Rendirse T:Proponer Tablas";
			impMsj(aux);
			do {
				cin >> opcion; opcion = toupper(opcion);
			} while (opcion != 'C' && opcion != 'R' && opcion != 'T');
			Console::CursorVisible = false;
		}
		switch (opcion) {
		case 'C':break;
		case 'R':ganador = auxJug; break;
		case 'T':tablas = true; break;
		}
	}
}

void imprimirUltimoMovimiento(int x, int dx, int y, int dy, int turnos) {//Jhosaim
	Console::ForegroundColor = ConsoleColor::DarkCyan;
	posicion(18, 119); cout << char(201);
	posicion(18, 143); cout << char(187);
	posicion(22, 119); cout << char(200);
	posicion(22, 143); cout << char(188);
	for (int i = 19; i < 22; i++) {
		posicion(i, 119); cout << char(186);
		posicion(i, 143); cout << char(186);
	}
	for (int i = 120; i < 143; i++) {

		posicion(18, i); cout << char(205);
		posicion(22, i); cout << char(205);
	}
	posicion(19, 123); cout << char(233) << "ltimo movimiento:";
	if (turnos > 1) {
		Console::ForegroundColor = ConsoleColor::White;
		posicion(20, 128); if (turnos % 2 == 0) cout << "[Blancas]"; else cout << "[Negras]";
		posicion(21, 124); cout << char(16) << "[" << 8 - x << ":" << char(y + 'A') << "] --> [" << 8 - dx << ":" << char(dy + 'A') << "]";

	}
	Console::ForegroundColor = ConsoleColor::White;
}

void imprimirMovimientosJugador(datosJugador* jug, int cant, int turnos) {//Jhosaim
	int jugador;
	(turnos % 2 == 1) ? jugador = 0 : jugador = 1;
	Console::ForegroundColor = ConsoleColor::Cyan;
	posicion(0, 119); cout << char(201);
	posicion(0, 143); cout << char(187);
	posicion(16, 119); cout << char(200);
	posicion(16, 143); cout << char(188);
	for (int i = 1; i < cant + 4; i++) {
		posicion(i, 119); cout << char(186);
		posicion(i, 143); cout << char(186);
	}
	for (int i = 120; i < 143; i++) {

		posicion(0, i); cout << char(205);
		posicion(16, i); cout << char(205);
	}
	Console::ForegroundColor = ConsoleColor::White;
	posicion(1, 120); cout << "Coord. de las fichas:";
	posicion(2, 120); cout << jug[0].nombre;
	posicion(3, 120); cout << "[Blancas]";
	for (int i = 0; i < cant; i++) {
		posicion(i + 4, 120);
		Console::ForegroundColor = ConsoleColor::White;
		if (jug[0].fichasJugador[i].condComer == true) Console::ForegroundColor = ConsoleColor::Cyan;
		if (jug[0].fichasJugador[i].movimiento == false) Console::ForegroundColor = ConsoleColor::DarkGray;
		if (jug[0].fichasJugador[i].vivo == false) Console::ForegroundColor = ConsoleColor::DarkRed;
		cout << "[" << 8 - jug[0].fichasJugador[i].posFila << ":"
			<< char(jug[0].fichasJugador[i].posColumna + 'A') << "]";
	}
	Console::ForegroundColor = ConsoleColor::White;
	posicion(2, 132); cout << jug[1].nombre;
	posicion(3, 132); cout << "[Negras]";
	for (int i = 0; i < cant; i++) {
		posicion((cant - i) + 3, 132);
		Console::ForegroundColor = ConsoleColor::White;
		if (jug[1].fichasJugador[i].condComer == true) Console::ForegroundColor = ConsoleColor::Cyan;
		if (jug[1].fichasJugador[i].movimiento == false) Console::ForegroundColor = ConsoleColor::DarkGray;
		if (jug[1].fichasJugador[i].vivo == false) Console::ForegroundColor = ConsoleColor::DarkRed;
		cout << "[" << 8 - jug[1].fichasJugador[i].posFila << ":"
			<< char(jug[1].fichasJugador[i].posColumna + 'A') << "]";
	}
	Console::ForegroundColor = ConsoleColor::White;
}

void mostrarEstadisticasJuego(datosJugador* jug) {//Jhosaim
	int aux = 1;
	Console::ForegroundColor = ConsoleColor::Yellow;
	impMsj(aux); cout << "Estad" << char(161) << "sticas de los jugadores: ";
	impMsj(aux); cout << "Jugador:\t\tCant. Fichas:\tMovimientos:";
	for (int j = 0; j < 2; j++) {
		impMsj(aux); cout << '[' << jug[j].nombre << "]\t\t" << jug[j].cantFichas << "\t\t" << jug[j].cantMov;
	}
	Console::ForegroundColor = ConsoleColor::White;
}

void terminarJuego(datosJugador* jug, int cant, int turnos, int& ganador) {//Mario
	int cont0 = 12, cont1 = 12;
	for (int i = 0; i < cant; i++) {
		if (jug[0].fichasJugador[i].movimiento == false) cont0--;
		if (jug[1].fichasJugador[i].movimiento == false) cont1--;
	}
	if (jug[0].cantFichas == 0) ganador = 1;
	if (jug[1].cantFichas == 0) ganador = 0;
	if (cont0 == 0 || cont1 == 0) {
		if (cont0 == 0 && cont1 == 0) ganador = 2;
		else if (cont0 == 0) ganador = 1;
		else if (cont1 == 0) ganador = 0;
	}
	if (jug[0].cantMov == 50 || jug[1].cantMov == 50) ganador = 2;
}

void PanelGanador() { //Mario
	Console::Clear();
	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 40; j++) {
			posicion(i + 3, j + 50);
			if (Ganador[i][j] == 0) Console::BackgroundColor = ConsoleColor::White;
			if (Ganador[i][j] == 2 || Ganador[i][j] == 1)Console::BackgroundColor = ConsoleColor::Black;
			cout << " ";
			Console::BackgroundColor = ConsoleColor::Black;
		}
	}
}

void PanelEmpate() {//Mario
	Console::Clear();
	for (int i = 0; i < 12; i++) { //Tablero
		for (int j = 0; j < 34; j++) {
			posicion(i + 3, j + 50);
			if (Empate[i][j] == 0) Console::BackgroundColor = ConsoleColor::White;
			if (Empate[i][j] == 1)Console::BackgroundColor = ConsoleColor::Black;
			cout << " ";
			Console::BackgroundColor = ConsoleColor::Black;
		}
	}
}

void juegoTerminado(datosJugador* jug, int ganador) {//Mario
	system("cls");
	switch (ganador) {
	case 0:case 1: {
		PanelGanador();
		Console::ForegroundColor = ConsoleColor::Cyan;
		cout << "\n\t\t===================================== El juego ha finalizado ================================";
		cout << "\t\t\t" << char(16) << jug[ganador].nombre << " fue el ganador de este encuentro. ";
	} break;
	case 2: {
		PanelEmpate();
		Console::ForegroundColor = ConsoleColor::DarkGray;
		cout << "\n\t\t===================================== El juego ha finalizado ================================";
	}break;
	}
	cout << "\n\t\t\t\t\tMuchas gracias por jugar!!!";
	cout << "\n\t\t=============================================================================================";
	getch();
}

void juego(string jug1, string jug2) { //Jhosaim
	int aux = 2, opcion, cantFichas = 12, turnos = 1, ganador = -1;
	int x, y, dx, dy;
	char tipo;
	bool tablas = false;
	Console::SetWindowSize(145, 30);
	datosJugador* jugador = new datosJugador[2];
	valorJugador(jugador, jug1, jug2, cantFichas);

	do {
		system("cls");
		impMsj(aux); cout << "Seleccione el modo de juego:";
		impMsj(aux); cout << "1. Modo Est" << char(160) << "ndar";
		impMsj(aux); cout << "2. Modo Especial: Las fichas empiezan como damas";
		impMsj(aux); cin >> opcion; aux++;
	} while (opcion != 1 && opcion != 2);

	modoEspecialJuego(jugador, cantFichas, opcion);

	do {
		impMsj(aux); cout << "Seleccione movimiento (C:Coordenadas T:Teclado):";
		impMsj(aux); cin >> tipo; tipo = toupper(tipo); aux++;
	} while (tipo != 'C' && tipo != 'T');

	if (tipo == 'C') {
		impMsj(aux); cout << "Movimiento seleccionado: Movimiento por coordenadas.";
	}
	else {
		impMsj(aux); cout << "Movimiento seleccionado: Movimiento por teclado."; aux++;
		impMsj(aux); cout << "Controles del movimiento por teclado:";
		impMsj(aux); cout << char(16) << " Q: Diagonal Superior Izquierda";
		impMsj(aux); cout << char(16) << " E: Diagonal Superior Derecha";
		impMsj(aux); cout << char(16) << " Z: Diagonal Superior Izquierda";
		impMsj(aux); cout << char(16) << " C: Diagonal Superior Derecha";
		impMsj(aux); cout << char(16) << " S: Seleccionar Ficha/Terminar Movimiento";
	}

	aux++; impMsj(aux); cout << "Presione cualquier tecla para continuar..."; getch();

	Console::CursorVisible = false;

	do {
		system("cls");
		generarTablero();
		generarFichas(jugador, cantFichas);
		mostrarEstadisticasJuego(jugador);
		comprobarMovimientosJugador(jugador, cantFichas, 0);
		comprobarMovimientosJugador(jugador, cantFichas, 1);
		imprimirMovimientosJugador(jugador, cantFichas, turnos);
		imprimirUltimoMovimiento(x, dx, y, dy, turnos);
		turnosJuego(jugador, cantFichas, turnos, tipo, x, dx, y, dy, ganador, tablas);
		terminarJuego(jugador, cantFichas, turnos, ganador);
	} while (ganador == -1);

	if (ganador != -1) {
		juegoTerminado(jugador, ganador);
	}

	delete[]jugador[0].fichasJugador;
	delete[]jugador[1].fichasJugador;
	delete[]jugador;
}

void registrarJugadores(string& jugador1, string& jugador2) {//Alessandro
	system("cls");
	Console::ForegroundColor = ConsoleColor::DarkCyan;
	Console::SetCursorPosition(20, 5); cout << "Ingrese el nombre del jugador 1:";
	Console::SetCursorPosition(20, 6); cin >> jugador1;
	Console::SetCursorPosition(20, 8); cout << "Ingrese el nombre del jugador 2:";
	Console::SetCursorPosition(20, 9); cin >> jugador2;
	Console::CursorVisible = false;
	system("cls");
	Console::SetCursorPosition(20, 5);
	cout << "=======Jugadores=========";
	Console::SetCursorPosition(20, 6);
	cout << jugador1;
	Console::SetCursorPosition(20, 7);
	cout << jugador2;
	_sleep(2000);
}

void lanzarDado(string& jugador1, string& jugador2) {//Alessandro
	Console::ForegroundColor = ConsoleColor::Cyan;
	Console::SetCursorPosition(20, 9);
	cout << "=====Lanzando dado:====";
	int numJugador1, numJugador2, jugadorInicial = 1;
	char turnoElegido1, turnoElegido2;
	string auxS;
	int i = 10;
	do {
		numJugador1 = (rand() % 6) + 1;
		numJugador2 = (rand() % 6) + 1;
		Console::SetCursorPosition(20, i);
		cout << "El n" << char(163) << "mero de " << jugador1 << " es: " << numJugador1 << endl;
		Console::SetCursorPosition(20, i + 1);
		cout << "El n" << char(163) << "mero de " << jugador2 << " es: " << numJugador2 << endl;
		i += 3;
		_sleep(500);
	} while (numJugador1 == numJugador2);

	if (numJugador1 > numJugador2) {
		do {
			Console::SetCursorPosition(20, i); cout << jugador1 << ", escoja el color de sus fichas. (B:Blancas ,N:Negras):\n";
			Console::SetCursorPosition(20, i + 1); cin >> turnoElegido1;
			turnoElegido1 = toupper(turnoElegido1);
		} while (turnoElegido1 != 'B' && turnoElegido1 != 'N');
	}
	else {
		do {
			Console::SetCursorPosition(20, i); cout << jugador2 << ", escoja el color de sus fichas. (B:BLANCAS,N:NEGRAS):\n";
			Console::SetCursorPosition(20, i + 1); cin >> turnoElegido2;
			turnoElegido2 = toupper(turnoElegido2);
		} while (turnoElegido2 != 'B' && turnoElegido2 != 'N');
	}

	Console::ForegroundColor = ConsoleColor::White;

	if (turnoElegido1 == 'N' || turnoElegido2 == 'B') jugadorInicial = 2;

	if (jugadorInicial == 2) {
		auxS = jugador1;
		jugador1 = jugador2;
		jugador2 = auxS;
	}
	i += 3;
	Console::SetCursorPosition(20, i); cout << jugador1 << ", usted tiene el primer turno.\n";
	Console::SetCursorPosition(20, i + 1); cout << jugador2 << ", usted tiene el segundo turno.\n";
	Console::CursorVisible = true;
	Console::SetCursorPosition(20, i + 3); cout << "Presione cualquier tecla para continuar..."; getch();
}

int validarOpcion() {//Alessandro

	int opcion;
	string jugador1, jugador2;
	do {
		system("cls");
		pintarLogo();
		int aux = 17;
		cout << endl << endl;
		Console::ForegroundColor = ConsoleColor::White;
		Console::SetCursorPosition(33, aux); cout << "\t1--> EMPEZAR JUEGO";
		Console::ForegroundColor = ConsoleColor::Green;
		Console::SetCursorPosition(33, aux + 1); cout << "\t2--> INSTRUCCIONES";
		Console::ForegroundColor = ConsoleColor::Cyan;
		Console::SetCursorPosition(33, aux + 2); cout << "\t3--> CR" << char(144) << "DITOS ";
		Console::ForegroundColor = ConsoleColor::DarkRed;
		Console::SetCursorPosition(33, aux + 3); cout << "\t4--> SALIR";
		Console::ForegroundColor = ConsoleColor::White;
		Console::SetCursorPosition(39, aux + 4); cin >> opcion;
		if (opcion != 1 && opcion != 2 && opcion != 3 && opcion != 4) {
			Console::ForegroundColor = ConsoleColor::DarkRed;
			cout << "===============================" << endl;
			cout << "OPCI" << char(224) << "N INV" << char(181) << "LIDA.\n";
			cout << "===============================" << endl; getch();
		}
		if (opcion == 2) {
			Console::ForegroundColor = ConsoleColor::Green;
			cout << "\n\t\t" << char(16) << " Solo se puede admitir a dos jugadores.";
			cout << "\n\t\t" << char(16) << " Cada jugador al inicio dispone de 12 fichas.";
			cout << "\n\t\t" << char(16) << " El objetivo de cada jugador es capturar las fichas del oponente,";
			cout << "\n\t\t o dejar al jugador contrario sin movimientos.";
			cout << "\n\t\t" << char(16) << " Las fichas solo se mueven una posicion hacia adelante en diagonal.";
			cout << "\n\t\t" << char(16) << " Si una ficha se encuentra en una casilla contigua a la del adversario\n";
			cout << "\t\testando la parte posterior vacia y en su turno, puede saltar encima de ella,\n";
			cout << "\t\tretirando la ficha contraria";
			cout << "\n\t\t" << char(16) << " Si despues de realizado un salto llega a las mismas condiciones anteriores,\n";
			cout << "\t\tpuede capturar las veces que le sea posible (Captura M" << char(163) << "ltiple)";
			cout << "\n\t\t" << char(16) << " Si una ficha puede comer, debe hacerlo (Captura Obligatoria)";
			cout << "\n\t\t" << char(16) << " Si una ficha llega a la ultima fila contraria, se convierte en reina.";
			cout << "\n\t\t" << char(16) << " Las reinas pueden moverse hacia cualquier direcci" << char(162) << "n en diagonal.";
			cout << "\n\t\t" << char(16) << " La reina tiene prioridad para comer que otras fichas";
			cout << "\n\t\t" << char(16) << " El juego se acaba cuando:\n";
			cout << "\t\t  -Un jugador se queda sin fichas\n";
			cout << "\t\t  -Un jugador tiene todas sus fichas bloqueadas\n\t\t"; getch();
		}

		if (opcion == 3) {
			int i = 23;
			Console::ForegroundColor = ConsoleColor::White;
			Console::SetCursorPosition(20, i);
			cout << "======================Cr" << char(130) << "ditos======================";
			Console::SetCursorPosition(20, i + 1); cout << " 	Jhosaim";
			Console::SetCursorPosition(20, i + 2); cout << " 	Alessandro";
			Console::SetCursorPosition(20, i + 3); cout << " 	Mario";
			Console::SetCursorPosition(20, i + 4); cout << "====================================================" << endl;
			Console::SetCursorPosition(20, i + 5); getch();

		}
		if (opcion == 1) {
			registrarJugadores(jugador1, jugador2);
			lanzarDado(jugador1, jugador2);
			juego(jugador1, jugador2);
			Console::SetWindowSize(95, 40);
		}
	} while (opcion != 4);
	return opcion;
}

void menu() {//Alessandro
	Console::SetWindowSize(95, 40);
	int opcion = 0;
	do {
		opcion = validarOpcion();
	} while (opcion = !4);

	cout << "El juego termina en " << endl;
	_sleep(1000);
	cout << "3" << endl;
	_sleep(1000);
	cout << "2" << endl;
	_sleep(1000);
	cout << "1" << endl;
	_sleep(1000);
	cout << "GRACIAS POR JUGAR";
	_sleep(1000);
	getch();
}

void main() {
	srand(time(0));
	menu();
	_getch();
}