// DebutAvecCplusplus.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <string>
	
using namespace std;

int main()
{
	cout << "Hello World! \n";
	cout << "J'apprend le C++" << endl;
	cout << "Et je teste des elements de code." << endl;
	int monAge = 21;
	double Reel = 11.78;
	string monid = "Massi Jimmy";
	string votreid;
	cout << "Salut ! Je suis " << monid << " et j'ai " << monAge << "ans et je possede une moyenne proche de " << Reel << endl;
	cout << "Et vous comment vous vous appelez?" << endl;
	getline(cin,votreid);
	cout << "enchante " << votreid << "! Ravis de faire votre connaissance! le saviez-vous votre nom a une taille de " << votreid.length() << " mots?" << endl;
	cout << "Et si on faisait un calcul tel que une moyenne?" << endl;
	double note;
	double moyenne = 0;
	double nbnote = 0;
	char choix;
	do
	{
		cout << "entrez une note" << endl;
		cin >> note;
		nbnote++;
		moyenne += note;
		cout << "Entrer une autre? o/n" << endl;
		cin >> choix;
	} while (choix == 'o');
	moyenne = moyenne / nbnote;
	cout << "Et voila!" << endl;
	cout << "Pour " << nbnote << " notes,la moyenne est de :" << moyenne <<endl;
	return 0;
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
