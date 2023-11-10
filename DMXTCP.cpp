#include <stdio.h>
#include <string.h>
#include <fstream>
#include <iostream>
#include <sstream>
#include "DMXTCP.h"
#include<windows.h>




DMXTCP::DMXTCP() {
	for (int i = 0; i < 511; i++) {
		trame[i] = 0;
	}
}

void DMXTCP::ModifierCanal(unsigned short canal, unsigned short valeur) {
	trame[canal - 1] = valeur;
}

void DMXTCP::Envoyer(char IP[16], unsigned short port) {
	monClient.SeConnecterAUnServeur(IP, port);
	monClient.Envoyer(trame, 512);
	monClient.SeDeconnecter();
}

void DMXTCP::FullOn() {
	for (int i=0; i < 512; i++) {
		trame[i] = 255;
	}
}

void DMXTCP::FullOff() {
	for (int i=0; i < 512; i++) {
		trame[i] = 0;
	}
}

void DMXTCP::Demonstration() {

	srand(time(0));
	for (int i=0; i < 512; i++) {
		trame[i] = rand() % 255;

	}

}


