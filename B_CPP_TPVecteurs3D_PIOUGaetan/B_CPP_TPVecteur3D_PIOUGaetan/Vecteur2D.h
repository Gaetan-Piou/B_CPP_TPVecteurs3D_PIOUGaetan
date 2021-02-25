#pragma once
#include "Vecteur3D.h"

template <class T> class Vecteur2D : public Vecteur3D<T>
{
public:
	// Constructeur
	Vecteur2D(T x = 0.f, T z = 0.f);

	// Constructeur par copie
	Vecteur2D(const Vecteur2D&);

	// Destructeur
	~Vecteur2D();


	// Fonctions membres
	void affiche();


	// Surcharge operator
	Vecteur2D operator=(const Vecteur2D);

	bool operator==(const Vecteur2D);

	Vecteur2D operator+(const Vecteur2D);

	Vecteur2D operator-(const Vecteur2D);

	Vecteur2D operator*(const T scalaire);

	T operator*(const Vecteur2D);

	Vecteur2D operator^(const Vecteur2D);


	// Fonctions amies
	friend bool coincide(const Vecteur2D V, const Vecteur2D W)
	{
		return V.m_tX == W.m_tX && V.m_tZ == W.m_tZ;
	}

	friend ostream& operator<<(ostream& os, const Vecteur2D& vect)
	{
		os << "X : " << vect.m_tX << ", Y : " << vect.m_tY << ", Z : " << vect.m_tZ;
		return os;
	}
};


// Constructeur
template <class T> inline Vecteur2D<T>::Vecteur2D(T tX, T tZ) : Vecteur3D<T>(tX, static_cast <T>(1.f), tZ)
{
	// Construction du vecteur 2D
}

// Constructeur par copie
template <class T> inline Vecteur2D<T>::Vecteur2D(const Vecteur2D& vect)
{
	this->m_tX = vect.m_tX;
	this->m_tZ = vect.m_tZ;
}

// Destructeur
template <class T> inline Vecteur2D<T>::~Vecteur2D()
{

}


// Fonctions membres
template <class T> inline void Vecteur2D<T>::affiche()
{
	Vecteur3D<T>::affiche();
}


// Surcharge operator
template <class T> inline Vecteur2D<T> Vecteur2D<T>::operator=(const Vecteur2D vect)
{
	this->m_tX = vect.m_tX;
	this->m_tZ = vect.m_tZ;
	return *this;
}


template <class T> inline bool Vecteur2D<T>::operator==(const Vecteur2D vect)
{
	return this->m_tX == vect.m_tX && this->m_tZ == vect.m_tZ;
}

template <class T> inline Vecteur2D<T> Vecteur2D<T>::operator+(const Vecteur2D vect)
{
	Vecteur2D<T> V;

	V.m_tX = this->m_tX + vect.m_tX;
	V.m_tZ = this->m_tZ + vect.m_tZ;

	return V;
}

template <class T> inline Vecteur2D<T> Vecteur2D<T>::operator-(const Vecteur2D vect)
{
	Vecteur2D<T> V;

	V.m_tX = this->m_tX - vect.m_tX;
	V.m_tZ = this->m_tZ - vect.m_tZ;

	return V;
}

template <class T> inline Vecteur2D<T> Vecteur2D<T>::operator*(const T t_Sca)
{
	Vecteur2D<T> V;

	V.m_tX = this->m_tX * t_Sca;
	V.m_tZ = this->m_tZ * t_Sca;

	return V;
}

template <class T> inline T Vecteur2D<T>::operator*(const Vecteur2D vect)
{
	return this->m_tX * vect.m_tX + this->m_tZ * vect.m_tZ;
}

template <class T> inline Vecteur2D<T> Vecteur2D<T>::operator^(const Vecteur2D vect)
{
	Vecteur2D<T> V;

	V.m_tX = this->m_tY * vect.m_tZ - this->m_tZ * vect.m_tY;
	V.m_tZ = this->m_tX * vect.m_tY - this->m_tY * vect.m_tX;

	return V;
}