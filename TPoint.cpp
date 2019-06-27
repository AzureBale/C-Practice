#include<iostream>
#include<TPoint.h>
#include<Tball.h>
#include<string>
using namespace std;

int main(void)
{
	cout << "YNWA!" << endl<<endl;
	cout << "At first,we'll test the function of TPoint:";
	TPoint<double> p1; //无参构造不需要（）
	TPoint<double> p2(5, 6, 7);  //点构造函数调试
	cout << "This is the Tpoint p1:" << endl;
	p1.show();      
	cout << "This is the Tpoint p2:" << endl<<endl;
	p2.show();    //点输出函数调试
	double x1, y1, z1;
	cout << "Do you want to move any point?(Input 1 to move)" << endl;
	int in; 
	cin>>in;
	if (in == 1) //位移函数调试
	{
		cout << "Input 1 to move the Tpoint p1,Input 2 to move the Tpoint p1;" << endl;
		int in;
		cin >> in;
		if (in == 1)
		{
			cout << "Where do you want to move the point p1 to ?" << endl
				<< "x:"; cin >> x1; cout << endl
				<< "y:"; cin >> y1; cout << endl
				<< "z:"; cin >> z1; cout << endl;
			p1.move(x1, y1, z1);
		}
		else if (in == 2)
		{
			cout << "Where do you want to move the point p1 to ?" << endl
				<< "x:"; cin >> x1; cout << endl
				<< "y:"; cin >> y1; cout << endl
				<< "z:"; cin >> z1; cout << endl;
			p2.move(x1, y1, z1);
		}
	}
	cout << "Ok,now we'll test the function of Tball" << endl;
	cout << "There are two Tballs:" << endl<<endl;
	Tball<double> b1;    //无参构造函数调试
	Tball<double> b2(p1, 2);  //球点径构造函数调试
	b1.show();
	b2.show();  //球输出函数调试
	cout << "Do you want to creat a new Tball?(1 to continue)" << endl;
	cin >> in;
	if (in == 1)
	{
		double ix, iy, iz, ir;
		cout << "Input the x of the Tball :" << endl;
		cin >> ix;
		cout << "Input the y of the Tball :" << endl;
		cin >> iy;
		cout << "Input the z of the Tball :" << endl;
		cin >> iz;
		cout << "Input the r of the Tball :" << endl;
		cin >> ir;
		Tball<double> b3(ix, iy, iz, ir);
		b3.show(); //表面积计算函数、体积计算函数调试


		TPoint<double> p4(1, 2, 3);  
		cout << "This is the Tpoint p4:" << endl;
		p4.show();
		cout << "Let's see the relationship betwwen the Tpoint p4 and the Tball you created:" << endl<<endl;
		b3.judge(p4); //点球位置关系判断函数调试
		cout << "Do you want to change the radius of the Tball you created? (Input 1 to change) " << endl;
		int in = 0;
		cin >> in;
		if (in)
		{
			cout << "Input the new radius you want : " << endl;
			double new_r;
			cin >> new_r;
			b3.changeR(new_r); //球半径更改函数调试
			b3.judge(p4);


		}

	}

}