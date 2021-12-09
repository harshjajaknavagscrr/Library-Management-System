#include "ECE.h"
ECE::ECE()
{
}
ECE::~ECE()
{
}
string ECE::toString()
{
	return "This is an ECE's Book! Its Name is - " + getName() + "! And Its Content is - " + getContent() + "!\n";
}
