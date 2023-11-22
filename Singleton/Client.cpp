#include "Singleton.h"

int main()
{
	Singleton::get()->tell();
	Singleton::restart();

	return 0;
}