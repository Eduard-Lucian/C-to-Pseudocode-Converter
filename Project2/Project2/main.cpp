#include <iostream>
#include "fractie.h"
using namespace std;

int main()
{
	Fractie f(-2,5), f2(6,10);
	Fractie f1 = 2+f;
	f1.afisareFractie();
	return 0;
}