#include "bilinter.h"



bilinter::bilinter()
{
	std::cout << "Input date: " << std::endl;

	std::cout << "y: "; std::cin >> y;
	std::cout << "y1: "; std::cin >> y1;
	std::cout << "y2: "; std::cin >> y2;

	std::cout << "x: "; std::cin >> x;
	std::cout << "x1: "; std::cin >> x1;
	std::cout << "x2: "; std::cin >> x2;

	std::cout << "fq11: "; std::cin >> fq11;
	std::cout << "fq12: "; std::cin >> fq12;
	std::cout << "fq21: "; std::cin >> fq21;
	std::cout << "fq22: "; std::cin >> fq22;
}


bilinter::~bilinter()
{
}

double bilinter::set_fr(double fq1, double fq2) {
	double result = 0;

	return result = ((x2 - x) / (x2 - x1))*fq1 + ((x - x1) / (x2 - x1))*fq2;
}

double bilinter::inter() {
	double result = 0;

	return result = ((y2 - y) / (y2 - y1))*set_fr(fq11, fq21) + ((y - y1) / (y2 - y1))*set_fr(fq12, fq22);
}
