#include <iostream>

#pragma once
class bilinter
{
public:
	bilinter();
	bilinter(double y_, double y1_, double y2_, double x_, double x1_, double x2_, 
			 double fq11_, double fq12_, double fq21_, double fq22_);

	~bilinter();

public:
	double inter();

private:
	double y, y1, y2, x, x1, x2;
	double fq11, fq12, fq21, fq22;
	double set_fr(double fq1, double fq2);
};

