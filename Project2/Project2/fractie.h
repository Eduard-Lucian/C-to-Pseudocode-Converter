#ifndef FRACTIE_H
#define FRACTIE_H
#include <iostream>
using namespace std;
int cmmdc(int x, int y);
class Fractie
{
private:
	int numarator;
	int numitor;
public:
	Fractie(int numarator=0, int numitor=0) :numarator(numarator), numitor(numitor) {};
	Fractie operator+(Fractie const& fr);
	Fractie operator-(Fractie const& fr);
	Fractie operator*(Fractie const& fr);
	Fractie operator/(Fractie const& fr);
	Fractie operator+(int n);
	friend Fractie operator+(int n, Fractie const& fr);
	void afisareFractie();
};


#endif // !1