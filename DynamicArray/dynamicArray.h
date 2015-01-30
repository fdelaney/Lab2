#ifndef DYNAMICARRAY_H_
#define DYNAMICARRAY_H_


class DynamicArray
{

public:
	DynamicArray(int _capacite = 100);
	int getCapacite();
	void setCapacite(int _capacite);
	void setElement(unsigned int _index, int _valeur);
	int getElement(unsigned int _index);

private:
	int capacite;
	int* tabElements;
};


#endif //DYNAMICARRAY_H_