#pragma once
#include <TPoint.h>
using namespace std;
template <class T>
class Tball
{
private:
	T r;
	T cx, cy, cz;
public:
	Tball()
	{
		cx = 0; cy = 0; cz = 0; r = 1;
	}
	Tball(TPoint<T> cp,T r1)
	{
		cx = cp.getx();
		cy = cp.gety();
		cz = cp.getz();
		r = r1;
	}
	void show();
	void move(T dx, T dy, T dz);
	void changeR(T dr);
	T Getthearea();
	T Getthevolume();
};

template<class T>
T Tball<T>::Getthearea()
{
	T area;
	area = 4 * 3.14159*r*r;
	return 	area;
}

template<class T>
T Tball<T>::Getthevolume()
{
	T volume;
	volume = 3.14159 * r * r*r*4/3;
	return 	volume;
}

template<class T>
void Tball<T>::show()
{
	cout << "The centre of the ball is " << "(" << cx << "," << cy << "," << cy << ")" << endl;
	cout << "The radius of the ball is " << r<< endl;
	cout << "The superficial area of the ball is " << Getthearea() << endl;
	cout << "The volume of the ball is " << Getthevolume() << endl;
}

template<class T>
void Tball<T>::move(T dx,T dy,T dz)
{
	cx = dx;
	cy = dx;
	cz = dz;
	cout << "After moving,the centre of the ball is " << "(" << cx << "," << cy << "," << cy << ")" << endl;

}

template<class T>
void Tball<T>::changeR(T dr)
{
	r = dr;
	cout << "After moving,the radius of the ball is " << r<< endl;
	cout << "The superficial area of the ball is " << Getthearea() << endl;
	cout << "The volume of the ball is " << Getthevolume() << endl;

}