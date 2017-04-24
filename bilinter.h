#include <iostream>

#pragma once
class bilinter
{
public:
	bilinter();
	~bilinter();

public:
	double inter();

private:
	double y, y1, y2, x, x1, x2;
	double fq11, fq12, fq21, fq22;
	double set_fr(double fq1, double fq2);
};

