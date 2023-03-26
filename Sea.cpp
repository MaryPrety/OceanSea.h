<<<<<<< HEAD
﻿#include "Sea.h"
=======
#include "Sea.h"
#include <Windows.h>

void Sea::addZaliv()
	{
	Zaliv* subarray = new Zaliv[zalivs_count + 1];
	for (int i = 0; i < zalivs_count; i++)
	{
		subarray[i] = zalivs[i];
	}
	zalivs_count++;
	zalivs = subarray;
	}
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

void Sea::setName(string N)
{
	name = N;
}
void Sea::setDeep(float D)
{
	deep = D;
}
void Sea::setSize(float S)
{
	size = S;
}

ostream& operator<<(ostream& stream, Sea obj)
{
<<<<<<< Updated upstream
=======
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
	stream << obj.name << " ěîđĺ; ";
	stream << "ăëóáčíŕ: " << obj.deep << "ě; ";
	stream << "đŕçěĺđ: " << obj.size << "ňűń ęě2";
=======
=======
>>>>>>> 288d05c2a169ba96966ab3053f599f9aebe95f9d
=======
>>>>>>> 288d05c2a169ba96966ab3053f599f9aebe95f9d
=======
>>>>>>> 288d05c2a169ba96966ab3053f599f9aebe95f9d
=======
>>>>>>> 288d05c2a169ba96966ab3053f599f9aebe95f9d
>>>>>>> Stashed changes
	stream << obj.name << " море; ";
	stream << "глубина: " << obj.deep << "м; ";
	stream << "размер: " << obj.size << "тыс км2";
	
	if (obj.zalivs_count == 0) stream << "\n    у этого моря нет заливов.";

	for (int i = 0; i < obj.zalivs_count; i++)
	{
		stream << "\n    " << obj.zalivs[i];
	}
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

	return stream;
}
istream& operator>>(istream& stream, Sea& obj)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Rus");
	stream >> obj.name >> obj.deep >> obj.size;
	return stream;
}
