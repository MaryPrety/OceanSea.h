#include "Sea.h"

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
	stream << obj.name << " ????; ";
	stream << "???????: " << obj.deep << "?; ";
	stream << "??????: " << obj.size << "??? ??2";

	return stream;
}