#ifndef DYNAMICARRAY_H_
#define DYNAMICARRAY_H_

#include <iostream>

class DynamicArray
{

public:
	DynamicArray(int _capacite = 100);
	~DynamicArray();
	int getCapacite() const;
	void setCapacite(int _capacite);
	void setElement(unsigned int _index, int _valeur);
	int getElement(unsigned int _index) const;

private:
	int capacite;
	int * tabElements;
};


#endif //DYNAMICARRAY_H_