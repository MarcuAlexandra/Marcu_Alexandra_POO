#pragma once

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

#define MAX 1000

enum VALORI {
	INMULTIRE = 0,
	SUMA,
	REZERVAT1,
	DIFERENTA,
	REZERVAT2,
	IMPARTIRE
};

typedef int (*func)(int, int); //pointer la functie 

struct Content {
	int p1;
	int p2;
};

int Sum(int a, int b); //in header toate prototipurile fct fara main 
int Dif(int a, int b);
int Mul(int a, int b);
int Div(int a, int b);
