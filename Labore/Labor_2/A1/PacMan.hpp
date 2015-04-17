// Datei PacMan.hpp
#pragma once

#include "Labyrinth.hpp"
#include "Spieler.hpp"

// Anzahl Geister
const int kAnzGeister = 3;

class PacMan {
	Labyrinth * lab;          // Labyrinth für das Spiel
	Spieler * s;              // Spieler, der das Spiel spielt
	Spieler * g[kAnzGeister]; // Geister, die den Spieler jagen
	int schritte;             // Anzahl der Spielschritte
	int muenzen;              // Anzahl der Münzen im Labyrinth
public:
	// Konstruktor
	PacMan(Labyrinth & l, Spieler & sp, Spieler gArr[], 
		   int anzGeister);
	// Einen Schritt im Spiel ausführen
	void schritt();
	// Spiel spielen
	void spielen();
};

