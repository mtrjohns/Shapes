#include "Rect.h"
#include <stdio.h>

Rect::Rect()
{
	setX(0);
	setY(0);
	setW(0);
	setH(0);
}

Rect::Rect(int x, int y, int w, int h)
{
	setX(x);
	setY(y);
	setW(w);
	setH(h);
}

Rect::~Rect()
{

}

void Rect::setX(int x)
{
	this->x = x;
}

int Rect::getX(void)
{
	return x;
}

void Rect::setY(int y)
{
	this->y = y;
}

int Rect::getY(void)
{
	return y;
}

void Rect::setW(int w)
{
	this->w = w;
}

int Rect::getW(void)
{
	return w;
}

void Rect::setH(int h)
{
	this->h = h;
}

int Rect::getH(void)
{
	return h;
}

void Rect::print(void)
{
	printf("Rectangle : x %d, y %d, w %d, h %d\n", x, y, w, h);
}