#include "dynamicArray.h"

DynamicArray::DynamicArray(int _capacite)
{
	this->capacite = _capacite;
	this->tabElements = new int [_capacite]{};
}

int DynamicArray::getCapacite()
{
	return capacite;
}

void DynamicArray::setCapacite(int _capacite)
{
	capacite = _capacite;
}

void DynamicArray::setElement(unsigned int _index, int _valeur)
{
	tabElements[_index] = _valeur;
}

int DynamicArray::getElement(unsigned int _index)
{
	return tabElements[_index];
}
