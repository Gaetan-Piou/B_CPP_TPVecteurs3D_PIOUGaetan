#include "Vecteur3D.h"
#include "Vecteur2D.h"
#include "ConteneurVecteur.h"

int main()
{
	// Exercice 1 version 1
	cout << "Exercice 1" << endl << "Version 1 :" << endl << endl;


	Vecteur3D<float> V1(1.46f, 4.2f, 8.f), V2(0.66f, 2.77f, 5.4f);

	V1.affiche();
	cout << endl << endl;

	V2.affiche();
	cout << endl << endl;

	
	cout << "Les vecteurs V1 et V2 sont ils identiques ?" << endl;
	bool b = coincide(V1, V2);
	if (b) {
		cout << "Oui" << endl << endl;
	} else {
		cout << "Non" << endl << endl;
	}

	
	Vecteur3D<float> V3;

	V3 = V1.addition(V2);

	cout << "Addition des vecteurs V1 et V2 :" << endl;
	V3.affiche();
	
	cout << endl << endl;

	
	V3 = V1.soustraction(V2);

	cout << "Soustraction des vecteurs V1 et V2 :" << endl;
	V3.affiche();
	
	cout << endl << endl;


	V3 = V1.multiplicationScalaire(3.f);

	cout << "Multiplication du vecteur V1 par un scalaire :" << endl;
	V3.affiche();
	
	cout << endl << endl;

	
	cout << "Produit scalaire des vecteurs V1 et V2 :" << endl;
	cout << V1.produitScalaire(V2) << endl << endl;

	
	V3 = V1.produitVectoriel(V2);

	cout << "Produit vectoriel des vecteurs V1 et V2 :" << endl;
	V3.affiche();

	cout << endl << endl << endl << endl;




	// Exercice 1 version 2
	cout << "Version 2 :" << endl << endl;


	cout << V1 << endl << endl;
	cout << V2 << endl << endl;

	cout << "Les vecteurs V1 et V2 sont-ils identiques ?" << endl;
	if (V1 == V2)
	{
		cout << "Oui" << endl << endl;
	}
	else {
		cout << "Non" << endl << endl;
	}


	Vecteur3D<float> V4;
	V4 = V1 + V2;

	cout << "Addition des vecteurs V1 et V2 :" << endl;
	cout << V4 << endl << endl;


	V4 = V1 - V2;

	cout << "Soustraction des vecteurs V1 et V2 :" << endl;
	cout << V4 << endl << endl;


	V4 = V1 * 8.f;

	cout << "Multiplication du vecteur V1 par un scalaire :" << endl;
	cout << V4 << endl << endl;


	cout << "Produit scalaire des vecteurs V1 et V2 :" << endl;
	cout << V1 * V2 << endl << endl;


	V4 = V1 ^ V2;
	
	cout << "Produit vectoriel des vecteurs V1 et V2 :" << endl;
	cout << V4 << endl << endl << endl << endl;



	// Exercice 2
	cout << "Exercice 2 :" << endl << endl;


	Vecteur2D<int> V10(40, 12), V11(40, 12);

	V10.affiche();
	cout << endl << endl;
	cout << V11 << endl << endl;


	cout << "Les vecteurs V10 et V11 sont ils identiques ?" << endl;
	if (V10 == V11) {
		cout << "Oui" << endl << endl;
	} else {
		cout << "Non" << endl << endl;
	}


	cout << "=Les vecteurs V10 et V11 sont ils identiques ?" << endl;
	if (coincide(V10, V11)) {
		cout << "Oui" << endl << endl;
	} else {
		cout << "Non" << endl << endl;
	}


	Vecteur2D<int> V5;


	V5 = V10 + V11;

	cout << "Addition des vecteurs V10 et V11 :" << endl;
	cout << V5 << endl << endl;


	V5 = V10 - V11;

	cout << "Soustraction des vecteurs V10 et V11:" << endl;
	cout << V5 << endl << endl;


	V5 = V10 * 12;

	cout << "Multiplication du vecteur V10 par un scalaire :" << endl;
	cout << V5 << endl << endl;


	cout << "Produit scalaire des vecteurs V10 et V11 :" << endl;
	cout << V10 * V11 << endl << endl;


	V5 = V10 ^ V11;

	cout << "Produit vectoriel des vecteurs V10 et V11 :" << endl;
	cout << V5 << endl << endl;




	// Exercice 3
	cout << "Exercice 3 :" << endl << endl;


	Vecteur3D<double> V301(1.26, 4.21, 3.0), V302(6.66, 4.21, 6.9), V303(4.39, 1.05, 8.2);

	Vecteur2D<float> V201(1.26f, 4.21f), V202(0.66f, 8.1f), V203(15.f, 7.3f);


	ConteneurVecteur<Vecteur3D<double>, 3> tab3D;

	tab3D[0] = V301;
	tab3D[1] = V302;
	tab3D[2] = V303;

	cout << tab3D << endl << endl;


	ConteneurVecteur<Vecteur2D<float>, 3> tab2D;

	tab2D[0] = V201;
	tab2D[1] = V202;
	tab2D[2] = V203;

	cout << tab2D << endl << endl;
}