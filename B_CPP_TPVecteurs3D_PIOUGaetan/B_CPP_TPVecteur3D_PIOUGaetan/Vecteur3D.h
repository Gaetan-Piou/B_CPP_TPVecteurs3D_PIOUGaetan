#pragma once
#include <iostream>

using namespace std;

template <class T> class Vecteur3D
{
protected:
	T m_tX;
	T m_tY;
	T m_tZ;

public:
	// Constructeur
	Vecteur3D(T x = 0.f, T y = 0.f, T z = 0.f);

	// Constructeur par copie
	Vecteur3D(const Vecteur3D&);

	// Destructeur
	~Vecteur3D();


	// Fonctions membres
	Vecteur3D addition(const Vecteur3D);

	Vecteur3D soustraction(const Vecteur3D);

	Vecteur3D multiplicationScalaire(const T scalaire);

	T produitScalaire(const Vecteur3D);

	Vecteur3D produitVectoriel(const Vecteur3D);

	void affiche();


	// Surcharge operator
	Vecteur3D<T> operator=(const Vecteur3D);

	bool operator==(const Vecteur3D);

	Vecteur3D operator+(const Vecteur3D);

	Vecteur3D operator-(const Vecteur3D);

	Vecteur3D operator*(const T scalaire);

	T operator*(const Vecteur3D);

	Vecteur3D operator^(const Vecteur3D);


	// Fonctions amies
	friend bool coincide(const Vecteur3D V, const Vecteur3D W)
	{
		return V.m_tX == W.m_tX && V.m_tY == W.m_tY && V.m_tZ == W.m_tZ;
	}

	friend ostream& operator<<(ostream& os, const Vecteur3D& vect)
	{
		os << "X : " << vect.m_tX << ", Y : " << vect.m_tY << ", Z : " << vect.m_tZ;
		return os;
	}
};


// Constructeur
template <class T> inline Vecteur3D<T>::Vecteur3D(T tX, T tY, T tZ)
{
	this->m_tX = tX;
	this->m_tY = tY;
	this->m_tZ = tZ;
}

// Constructeur par copie
template <class T> inline Vecteur3D<T>::Vecteur3D(const Vecteur3D& vect)
{
	this->m_tX = vect.m_tX;
	this->m_tY = vect.m_tY;
	this->m_tZ = vect.m_tZ;
}

// Destructeur
template <class T> inline Vecteur3D<T>::~Vecteur3D()
{
	// Objet détruit
}


// Fonctions membres
template <class T> inline Vecteur3D<T> Vecteur3D<T>::addition(const Vecteur3D vect)
{
	Vecteur3D<T> V;

	V.m_tX = this->m_tX + vect.m_tX;
	V.m_tY = this->m_tY + vect.m_tY;
	V.m_tZ = this->m_tZ + vect.m_tZ;

	return V;
}

template <class T> inline Vecteur3D<T> Vecteur3D<T>::soustraction(const Vecteur3D vect)
{
	Vecteur3D<T> V;

	V.m_tX = this->m_tX - vect.m_tX;
	V.m_tY = this->m_tY - vect.m_tY;
	V.m_tZ = this->m_tZ - vect.m_tZ;

	return V;
}

template <class T> inline Vecteur3D<T> Vecteur3D<T>::multiplicationScalaire(const T t_Sca)
{
	Vecteur3D<T> V;

	V.m_tX = this->m_tX * t_Sca;
	V.m_tY = this->m_tY * t_Sca;
	V.m_tZ = this->m_tZ * t_Sca;

	return V;
}

template <class T> inline T Vecteur3D<T>::produitScalaire(const Vecteur3D vect)
{
	return this->m_tX * vect.m_tX + this->m_tY * vect.m_tY + this->m_tZ * vect.m_tZ;
}

template <class T> inline Vecteur3D<T> Vecteur3D<T>::produitVectoriel(const Vecteur3D vect)
{
	Vecteur3D<T> V;

	V.m_tX = this->m_tY * vect.m_tZ - this->m_tZ * vect.m_tY;
	V.m_tY = this->m_tZ * vect.m_tX - this->m_tX * vect.m_tZ;
	V.m_tZ = this->m_tX * vect.m_tY - this->m_tY * vect.m_tX;

	return V;
}

template <class T> inline void Vecteur3D<T>::affiche()
{
	cout << "X : " << this->m_tX << ", Y : " << this->m_tY << ", Z : " << this->m_tZ;
}


// Surcharge operator
template <class T> inline Vecteur3D<T> Vecteur3D<T>::operator=(const Vecteur3D vect)
{
	this->m_tX = vect.m_tX;
	this->m_tY = vect.m_tY;
	this->m_tZ = vect.m_tZ;

	return *this;
}

template <class T> inline bool Vecteur3D<T>::operator==(const Vecteur3D vect)
{
	return this->m_tX == vect.m_tX && this->m_tY == vect.m_tY && this->m_tZ == vect.m_tZ;
}

template <class T> inline Vecteur3D<T> Vecteur3D<T>::operator+(const Vecteur3D vect)
{
	Vecteur3D<T> V;

	V.m_tX = this->m_tX + vect.m_tX;
	V.m_tY = this->m_tY + vect.m_tY;
	V.m_tZ = this->m_tZ + vect.m_tZ;

	return V;
}

template <class T> inline Vecteur3D<T> Vecteur3D<T>::operator-(const Vecteur3D vect)
{
	Vecteur3D<T> V;

	V.m_tX = this->m_tX - vect.m_tX;
	V.m_tY = this->m_tY - vect.m_tY;
	V.m_tZ = this->m_tZ - vect.m_tZ;

	return V;
}

template <class T> inline Vecteur3D<T> Vecteur3D<T>::operator*(const T t_Sca)
{
	Vecteur3D<T> V;

	V.m_tX = this->m_tX * t_Sca;
	V.m_tY = this->m_tY * t_Sca;
	V.m_tZ = this->m_tZ * t_Sca;

	return V;
}

template <class T> inline T Vecteur3D<T>::operator*(const Vecteur3D vect)
{
	return this->m_tX * vect.m_tX + this->m_tY * vect.m_tY + this->m_tZ * vect.m_tZ;
}

template<class T> inline Vecteur3D<T> Vecteur3D<T>::operator^(const Vecteur3D vect)
{
	Vecteur3D<T> V;

	V.m_tX = this->m_tY * vect.m_tZ - this->m_tZ * vect.m_tY;
	V.m_tY = this->m_tZ * vect.m_tX - this->m_tX * vect.m_tZ;
	V.m_tZ = this->m_tX * vect.m_tY - this->m_tY * vect.m_tX;

	return V;
}