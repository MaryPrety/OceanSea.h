#include <iostream>
#include <string>
#include "Sea.h"

using namespace std;

class Ocean: private Sea
{
private:
	string name;
<<<<<<< HEAD
	float deep; //â ìåòðàõ
	float size; //â òûñ êì2
=======
	float deep; //? ??????
	float size; //? ??? ??2

	string NamesOcean[12] = {
"Южный",
"Красный",
"Лименский",
"Зоронский",
"Советский",
"Атматический",
"Орлеанский",
"Солнечный",
"Европейский",
"Великий",
"Британский",
"Огромный"
	};

<<<<<<< Updated upstream
=======
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> 288d05c2a169ba96966ab3053f599f9aebe95f9d
=======
>>>>>>> 288d05c2a169ba96966ab3053f599f9aebe95f9d
=======
>>>>>>> 288d05c2a169ba96966ab3053f599f9aebe95f9d
=======
>>>>>>> 288d05c2a169ba96966ab3053f599f9aebe95f9d
=======
>>>>>>> 288d05c2a169ba96966ab3053f599f9aebe95f9d
>>>>>>> Stashed changes
public:
	int seas_count = 0;
	Sea* seas = new Sea[seas_count];

	void addSea();

	Ocean()
	{
<<<<<<< Updated upstream
		name = NamesOcean[rand()%12];
		deep = rand() % 8500 + 3500;
		size = (rand() % 1000000 + 200000) / 10.0;
=======
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
		name = "Безымянный";
		deep = 1;
		size = 1;
=======
		name = NamesOcean[rand()%12];
		deep = rand() % 8500 + 3500;
		size = (rand() % 1000000 + 200000) / 10.0;
>>>>>>> 288d05c2a169ba96966ab3053f599f9aebe95f9d
=======
		name = NamesOcean[rand()%12];
		deep = rand() % 8500 + 3500;
		size = (rand() % 1000000 + 200000) / 10.0;
>>>>>>> 288d05c2a169ba96966ab3053f599f9aebe95f9d
=======
		name = NamesOcean[rand()%12];
		deep = rand() % 8500 + 3500;
		size = (rand() % 1000000 + 200000) / 10.0;
>>>>>>> 288d05c2a169ba96966ab3053f599f9aebe95f9d
=======
		name = NamesOcean[rand()%12];
		deep = rand() % 8500 + 3500;
		size = (rand() % 1000000 + 200000) / 10.0;
>>>>>>> 288d05c2a169ba96966ab3053f599f9aebe95f9d
=======
		name = NamesOcean[rand()%12];
		deep = rand() % 8500 + 3500;
		size = (rand() % 1000000 + 200000) / 10.0;
>>>>>>> 288d05c2a169ba96966ab3053f599f9aebe95f9d
>>>>>>> Stashed changes
	}
	Ocean(string N, float D, float S)
	{
		name = N;
		deep = D;
		size = S;
	}

	void setName(string N);
	void setDeep(float D);
	void setSize(float S);

	friend ostream& operator<<(ostream& stream, const Ocean obj);
	friend istream& operator>>(istream& stream, Ocean& obj);
};
