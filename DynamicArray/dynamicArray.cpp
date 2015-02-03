#include "dynamicArray.h"
#include <algorithm>

DynamicArray::DynamicArray(int _capacite)
{
	if (_capacite <= 0)
	{
		throw std::invalid_argument("La capacite doit etre superieure a 0");
	}
	else
	{
		capacite = _capacite;
		tabElements = new int [_capacite]{};
	}
}

DynamicArray::~DynamicArray()
{
	delete[] tabElements;
}

int DynamicArray::getCapacite() const
{
	return capacite;
}

void DynamicArray::setCapacite(int _capacite)
{
	if (_capacite <= 0) throw std::invalid_argument("La capacite doit etre superieure a 0");
	
	int* nouveauTableauElements = new int[_capacite]{};
	
		for (int i = 0; i < std::min(capacite, _capacite); ++i)
		{
			nouveauTableauElements[i] = getElement(i);
		}
	
	capacite = _capacite;
	delete[] tabElements;
	tabElements = nouveauTableauElements;

}

void DynamicArray::setElement(unsigned int _index, int _valeur)
{
	if (_index > capacite){
		setCapacite(_index + 1);
	}

	tabElements[_index] = _valeur;
}

int DynamicArray::getElement(unsigned int _index) const
{
	
	if (_index >= capacite) throw std::out_of_range("L'element selectionne est a l'exterieur du tableau.");
	return tabElements[_index];
}
