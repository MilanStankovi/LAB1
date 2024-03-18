#include "Livada.h"

int main() {
	Livada* l = new Livada();
	l->ucitaj("livada.txt");
	while (SemeRuza::vrati_broj() != 0 || JajascaPuza::vrati_broj() != 0) {
		l->mlaz();
	}
	l->otvorisve();
	l->prikaziLivadu();
	cout << l->brojbodova();
	return 0;
}