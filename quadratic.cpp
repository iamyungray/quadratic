// quadratic.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
// Yung Ray

#include <iostream>
#include <cmath>

int main() {
	double a, b, c;
	std::cout << "Enter a: ";
	std::cin >> a;

	std::cout << "Enter b: ";
	std::cin >> b;

	std::cout << "Enter c: ";
	std::cin >> c;

	double root1, root2;
	// The positive root
	root1 = (-b + std::sqrt(b * b - 4 * a * c)) / (2 * a);
	// The negative root
	root2 = (-b - std::sqrt(b * b - 4 * a * c)) / (2 * a);

	std::cout << "Root1 is: " << root1 << "\n";
	std::cout << "Root2 is: " << root2 << "\n";

}













// Programm ausführen: STRG+F5 oder Menüeintrag "Debuggen" > "Starten ohne Debuggen starten"
// Programm debuggen: F5 oder "Debuggen" > Menü "Debuggen starten"

// Tipps für den Einstieg: 
//   1. Verwenden Sie das Projektmappen-Explorer-Fenster zum Hinzufügen/Verwalten von Dateien.
//   2. Verwenden Sie das Team Explorer-Fenster zum Herstellen einer Verbindung mit der Quellcodeverwaltung.
//   3. Verwenden Sie das Ausgabefenster, um die Buildausgabe und andere Nachrichten anzuzeigen.
//   4. Verwenden Sie das Fenster "Fehlerliste", um Fehler anzuzeigen.
//   5. Wechseln Sie zu "Projekt" > "Neues Element hinzufügen", um neue Codedateien zu erstellen, bzw. zu "Projekt" > "Vorhandenes Element hinzufügen", um dem Projekt vorhandene Codedateien hinzuzufügen.
//   6. Um dieses Projekt später erneut zu öffnen, wechseln Sie zu "Datei" > "Öffnen" > "Projekt", und wählen Sie die SLN-Datei aus.
