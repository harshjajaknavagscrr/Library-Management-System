#include "Civil.h"
Civil::Civil()
{
}
Civil::~Civil()
{
}
string Civil::toString()
{
	return "This is a Civil's Book! Its Name is - " + getName() + "! And Its Content is - " + getContent() + "!\n";
}
