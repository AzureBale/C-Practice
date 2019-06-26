#pragma once
using namespace std;
template <class T>  
class TPoint
{

private:
	T x, y, z;

public:
	TPoint()
	{
		x = 0; y = 0; z = 0;
	}
	TPoint(T dx,T dy,T dz)
	{
		x = dx;
		y = dy;
		z = dz;

	}
	T getx() { return x; }
	T gety() { return y; }
	T getz() { return z; }
	void show();
	void move(T dx,T dy,T dz);
	~TPoint() {}
};
template <class T>
void TPoint<T>::show()
{
	cout << "The x,y,z of this point is " << x << " " << y << " " << z << endl;
};

template <class T>
void TPoint<T>::move(T dx, T dy, T dz)
{
	x = dx; y = dy; z = dz;
	cout << "After moving,the x,y,z of this point is : " <<endl<< x << " " << y << " " << z << endl;
};
