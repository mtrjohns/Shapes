#pragma once

class Rect 
{
private:
	
	int x;
	int y;
	int w;
	int h;

public:
	
	Rect();
	Rect(int, int, int, int);
	~Rect();
	
	void setX(int);
	int getX(void);

	void setY(int);
	int getY(void);

	void setW(int);
	int getW(void);

	void setH(int);
	int getH(void);

	void print(void);
	};