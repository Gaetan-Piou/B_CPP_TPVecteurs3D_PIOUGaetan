#pragma once
#include "Vecteur2D.h"

template <class V, int n> class ConteneurVecteur
{
private:
	V m_tab[n];

public:
	// Constructeur
	ConteneurVecteur();

	// Destructeur
	~ConteneurVecteur();


	// Fonctions membres
	// V operator[](const int i) const;

	V& operator[](const int i);


	// Fonctions amies
	friend ostream& operator<<(ostream& os, ConteneurVecteur& tab)
	{
		for (int i = 0; i < n; i++)
		{
			os << tab[i] << endl;
		}
		return os;
	}
};


// Constructeur
template <class V, int n> inline ConteneurVecteur<V, n>::ConteneurVecteur()
{
	// Constructeur vide
}

// Destructeur
template <class V, int n> inline ConteneurVecteur<V, n>::~ConteneurVecteur()
{
	// Destructeur vide
}


// Fonctions membres

template <class V, int n> inline V& ConteneurVecteur<V, n>::operator[](const int i)
{
	if ((i >= 0) && (i < n))
	{
		return this->m_tab[i];
	}
	else {
		cout << "Vous êtes sorti du tableau" << endl;
		return this->m_tab[0];
	}
}