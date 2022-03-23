#include "Widget.h"
#include "Rect.h"

Widget::Widget()
{
	z = 0;
}

Widget::~Widget()
{
	delete [] text;
}

void Widget::setRect(Rect *r)
{
	this->rect = r;
}

Rect *Widget::getRect(void)
{
	return rect;
}