#include "Chemical.h"
Chemical::Chemical()
{
}
Chemical::~Chemical()
{
}
string Chemical::toString()
{
	return "This is a Chemical's Book! Its Name is - " + getName() + "! And Its Content is - " + getContent() + "!\n";
}
