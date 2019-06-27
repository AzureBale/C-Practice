#pragma once
#include <TPoint.h>
#include<math.h>
using namespace std;
template <class T>
class Tball
{
private:
	T r;   //球半径
	T cx, cy, cz;  //球心坐标
public:
	Tball()//缺省构造函数
	{
		cx = 0; cy = 0; cz = 0; r = 1;
	}
	Tball(TPoint<T> cp,T r1) //点径式构造函数
	{
		cx = cp.getx();
		cy = cp.gety();
		cz = cp.getz();
		r = r1;
	}
	Tball(T dx,T dy,T dz,T dr) //四参数构造函数
	{
		cx = dx; cy = dy; cz = dz; r = dr;
	}
	void show();  //展示函数
	void move(T dx, T dy, T dz); //球心移动函数
	void changeR(T dr); //球半径改变函数
	void judge(TPoint<T> poi); //点和球位置关系判断函数
	T Getthearea();  //球表面积计算函数
	T Getthevolume(); //球体积计算函数
};

template<class T>
T Tball<T>::Getthearea()
{
	T area;
	area = 4*3.14159*r*r; //球表面积计算公式
	return 	area;
}

template<class T>
T Tball<T>::Getthevolume()
{
	T volume;
	volume = 3.14159 * r * r*r*4/3; //球体积计算公式
	return 	volume;
}

template<class T>
void Tball<T>::show()
{
	cout << "The centre of the ball is " << "(" << cx << "," << cy << "," << cy << ")" << endl;
	cout << "The radius of the ball is " << r<< endl;
	cout << "The superficial area of the ball is " << Getthearea() << endl;
	cout << "The volume of the ball is " << Getthevolume() << endl<<endl;
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

template<class T>
void Tball<T>::judge(TPoint<T> poi)
{
	T ddx = poi.getx() - cx;   //不能从外部直接访问类的私有成员函数
	T ddy = poi.gety() - cy;   //可以使用类内函数提供的接口进行访问
	T ddz = poi.getz() - cz;
	T ddd = sqrt(ddx * ddx + ddy * ddy + ddz * ddz);//点和球心的距离
	cout << "The radius of Tball is " << r << ",and the distance between the centre point and TPoint is "
		<< ddd << endl << "So,";
	if (ddd > r)
		cout << "This point is out of the Tball."<<endl;
	else if(ddd==r)
		cout << "This point is on the Tball." << endl;
	else
		cout << "This point is in the Tball." << endl;
}