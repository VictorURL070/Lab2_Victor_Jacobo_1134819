#pragma once
using namespace std;

struct Poligono
{
	double l1, l2, l3, l4, l5, l6, l7, l8, l9, l10, H, A;

	//Constructor
	Poligono()
	{
		l1 = 0;
		l2 = 0;
		l3 = 0;
		l4 = 0;
		l5 = 0;
		l6 = 0;
		l7 = 0;
		l8 = 0;
		l9 = 0;
		l10 = 0;
	}

	//Perimetros

	double PerimetroTriangulo()
	{
		return(l1+l2+l3);
	}
	double PerimetroCuadrado()
	{
		return(l1+l2+l3+l4);
	}
	double PerimetroPentagono()
	{
		return(l1 + l2 + l3 + l4+l5);
	}
	double PerimetroHexagono()
	{
		return(l1 + l2 + l3 + l4+l5+l6);
	}
	double PerimetroHeptagono()
	{
		return(l1 + l2 + l3 + l4+l5+l6+l7);
	}
	double PerimetroOctagono()
	{
		return(l1 + l2 + l3 + l4+l5+l6+l7+l8);
	}
	double PerimetroEneagono()
	{
		return(l1 + l2 + l3 + l4+l5+l6+l7+l8+l9);
	}
	double PerimetroDecagono()
	{
		return(l1 + l2 + l3 + l4+l5+l6+l7+l8+l9+l10);
	}

	//Areas

	double AreaTriangulo() 
	{
		return((l1*H)/2);
	}
	double AreaCuadrado()
	{
		return(l1*l2);
	}
	double AreaPentagono()
	{
		return((PerimetroPentagono() * A) / 2);
	}
	double AreaHexagono()
	{
		return((PerimetroHexagono() * A) / 2);
	}
	double AreaHeptagono()
	{
		return((PerimetroHeptagono() * A) / 2);
	}
	double AreaOctagono()
	{
		return((PerimetroOctagono() * A) / 2);
	}
	double AreaEneagono()
	{
		return((PerimetroEneagono() * A) / 2);
	}
	double AreaDecagono()
	{
		return((PerimetroDecagono() * A) / 2);
	}
};