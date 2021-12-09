#include "Mechanical.h"
Mechanical::Mechanical()
{
}
Mechanical::~Mechanical()
{
}
string Mechanical::toString()
{
	return "This is a Mechanical's Book! Its Name is - " + getName() + "! And Its Content is - " + getContent() + "!\n";
}
