#include "fractie.h"

int cmmdc(int x, int y)
{
	if (y == 0)return x;
	int r = x % y;
	x = y;
	y = r;
	cmmdc(x, y);
}

Fractie Fractie::operator+(Fractie const& fr) {
	Fractie rezultatBengos;
	int numitorComun=(numitor*fr.numitor)/cmmdc(numitor,fr.numitor);
	rezultatBengos.numitor = numitorComun;
	rezultatBengos.numarator = (numitorComun / numitor) * numarator + (numitorComun / fr.numitor) * fr.numarator;
	int diviz = cmmdc(rezultatBengos.numarator, rezultatBengos.numitor);
	rezultatBengos.numarator /= diviz;
	rezultatBengos.numitor /= diviz;
	return rezultatBengos;
}
void Fractie::afisareFractie()
{
	cout << numarator << "/" <<numitor<<" ";
}
Fractie Fractie::operator-(Fractie const& fr)
{
	Fractie rezultatBengos;
	bool minus = 0;
	int numitorComun = (numitor * fr.numitor) / cmmdc(numitor, fr.numitor);
	rezultatBengos.numitor = numitorComun;
	rezultatBengos.numarator = (numitorComun / numitor) * numarator - (numitorComun / fr.numitor) * fr.numarator;
	if (rezultatBengos.numarator <= 0)
	{
		minus = 1;
		rezultatBengos.numarator = -rezultatBengos.numarator;
	}
	int diviz = cmmdc(rezultatBengos.numarator, rezultatBengos.numitor);
	rezultatBengos.numarator /= diviz;
	rezultatBengos.numitor /= diviz;
	if (minus) {
		rezultatBengos.numarator = -rezultatBengos.numarator;
	}
	return rezultatBengos;
}
Fractie Fractie::operator*(Fractie const& fr)
{
	Fractie rezultatBengos;
	bool minus = 0;
	rezultatBengos.numarator = numarator * fr.numarator;
	rezultatBengos.numitor = numitor * fr.numitor;
	if (rezultatBengos.numarator <= 0)
	{
		minus = 1;
		rezultatBengos.numarator = -rezultatBengos.numarator;
	}
	int diviz = cmmdc(rezultatBengos.numarator, rezultatBengos.numitor);
	rezultatBengos.numarator /= diviz;
	rezultatBengos.numitor /= diviz;
	if (minus) {
		rezultatBengos.numarator = -rezultatBengos.numarator;
	}
	return rezultatBengos;
}
Fractie Fractie::operator/(Fractie const& fr)
{
	Fractie rezultatBengos;
	bool minus = 0;
	rezultatBengos.numarator = numarator * fr.numitor;
	rezultatBengos.numitor = numitor * fr.numarator;
	if (rezultatBengos.numarator <= 0)
	{
		minus = 1;
		rezultatBengos.numarator = -rezultatBengos.numarator;
	}
	int diviz = cmmdc(rezultatBengos.numarator, rezultatBengos.numitor);
	rezultatBengos.numarator /= diviz;
	rezultatBengos.numitor /= diviz;
	if (minus) {
		rezultatBengos.numarator = -rezultatBengos.numarator;
	}
	return rezultatBengos;

}
Fractie Fractie::operator+(int n)
{
	Fractie rezultatBengos(numarator,numitor);
	bool minus = 0;
	rezultatBengos.numarator += n * numitor;
	if (rezultatBengos.numarator <= 0)
	{
		minus = 1;
		rezultatBengos.numarator = -rezultatBengos.numarator;
	}
	int diviz = cmmdc(rezultatBengos.numarator, rezultatBengos.numitor);
	rezultatBengos.numarator /= diviz;
	rezultatBengos.numitor /= diviz;
	if (minus) {
		rezultatBengos.numarator = -rezultatBengos.numarator;
	}
	return rezultatBengos;
}
Fractie operator+(int n, Fractie const& fr)
{
	Fractie rezultatBengos(fr.numarator, fr.numitor);
	bool minus = 0;
	rezultatBengos.numarator += n * fr.numitor;
	if (rezultatBengos.numarator <= 0)
	{
		minus = 1;
		rezultatBengos.numarator = -rezultatBengos.numarator;
	}
	int diviz = cmmdc(rezultatBengos.numarator, rezultatBengos.numitor);
	rezultatBengos.numarator /= diviz;
	rezultatBengos.numitor /= diviz;
	if (minus) {
		rezultatBengos.numarator = -rezultatBengos.numarator;
	}
	return rezultatBengos;
}