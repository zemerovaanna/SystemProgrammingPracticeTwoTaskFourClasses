#include <iostream>
#include <math.h>
using namespace std;

class Triangle {

private:
	double side1;
	double side2;
	double side3;

public:
	void setSide1(double side) {
		side1 = side;
	}
	void setSide2(double side) {
		side2 = side;
	}
	void setSide3(double side) {
		side3 = side;
	}

	double getSide1() {
		return side1;
	}
	double getSide2() {
		return side2;
	}
	double getSide3() {
		return side3;
	}

	void findS()
	{
		double p = (side1 + side2 + side3) / 2;
		double s = sqrt(p * (p - side1) * (p - side2) * (p - side3));
		cout << "Площадь = " << s << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "ru");

	Triangle triangle;

	cout << "Введите первую сторону:" << endl;
	double x;
	cin >> x;
	triangle.setSide1(x);

	cout << "Введите вторую сторону:" << endl;
	cin >> x;
	triangle.setSide2(x);

	cout << "Введите третью сторону:" << endl;
	cin >> x;
	triangle.setSide3(x);

	triangle.findS();

	return 0;
}