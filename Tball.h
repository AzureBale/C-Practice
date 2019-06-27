#pragma once
#include <TPoint.h>
#include<math.h>
using namespace std;
template <class T>
class Tball
{
private:
	T r;   //��뾶
	T cx, cy, cz;  //��������
public:
	Tball()//ȱʡ���캯��
	{
		cx = 0; cy = 0; cz = 0; r = 1;
	}
	Tball(TPoint<T> cp,T r1) //�㾶ʽ���캯��
	{
		cx = cp.getx();
		cy = cp.gety();
		cz = cp.getz();
		r = r1;
	}
	Tball(T dx,T dy,T dz,T dr) //�Ĳ������캯��
	{
		cx = dx; cy = dy; cz = dz; r = dr;
	}
	void show();  //չʾ����
	void move(T dx, T dy, T dz); //�����ƶ�����
	void changeR(T dr); //��뾶�ı亯��
	void judge(TPoint<T> poi); //�����λ�ù�ϵ�жϺ���
	T Getthearea();  //���������㺯��
	T Getthevolume(); //��������㺯��
};

template<class T>
T Tball<T>::Getthearea()
{
	T area;
	area = 4*3.14159*r*r; //���������㹫ʽ
	return 	area;
}

template<class T>
T Tball<T>::Getthevolume()
{
	T volume;
	volume = 3.14159 * r * r*r*4/3; //��������㹫ʽ
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
	T ddx = poi.getx() - cx;   //���ܴ��ⲿֱ�ӷ������˽�г�Ա����
	T ddy = poi.gety() - cy;   //����ʹ�����ں����ṩ�Ľӿڽ��з���
	T ddz = poi.getz() - cz;
	T ddd = sqrt(ddx * ddx + ddy * ddy + ddz * ddz);//������ĵľ���
	cout << "The radius of Tball is " << r << ",and the distance between the centre point and TPoint is "
		<< ddd << endl << "So,";
	if (ddd > r)
		cout << "This point is out of the Tball."<<endl;
	else if(ddd==r)
		cout << "This point is on the Tball." << endl;
	else
		cout << "This point is in the Tball." << endl;
}