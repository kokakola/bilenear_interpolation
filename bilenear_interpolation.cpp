// bilenear_interpolation.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include "bilinter.h"


int main()
{
	bilinter *obj;
	obj = new bilinter;

	std::cout << obj->inter() << std::endl;

    return 0;
}

