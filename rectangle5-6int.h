#pragma once

#ifndef rectangle56int_h
#define rectangle56int_h

class rectangle56a2
{
private:
	float length, width, area, perimeter;
public:
	rectangle56a2(float r = 0.0, float w = 0.0);
	void calcperimeter(float, float);
	void calcarea(float, float);
	void print(void);
	void initialize(float, float);
};

#endif
