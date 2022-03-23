#include "Widget.h"
#include "Rect.h"

int main(int argc, char* argv[])
{
	Rect *rect1 = new Rect(1, 1, 0, 0);
	rect1->print();

	return 0;
}