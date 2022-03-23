#pragma once
class Rect;

class Widget
{
protected:
	Rect* rect;
	int z;
	static const int MAX_TEXT = 128;
	char text[MAX_TEXT];

public:
	Widget();

	~Widget();

	void setRect(Rect*);
	Rect* getRect(void);

	virtual void draw() = 0;
};