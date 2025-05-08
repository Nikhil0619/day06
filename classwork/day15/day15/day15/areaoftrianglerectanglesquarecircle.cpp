#include<iostream>
using namespace std;

float rectangle(float l, float b);

float square(float s);

float circle(float r);

float triangle(float b, float h);



int main()

{
	float l, b, h, r, s;
	int c;

	cout << "enter your choice:\n1 Area of triangle\n 2Area of rectangle\n 3 Area of square\n 4 Area of circle\n";

	cin >> c;

	switch (c)

	{
	case 1:

		cout << "enter base and height of triangle: ";

		cin >> b >> h;

		cout << "area of triangle is " << triangle(b, h) << endl;

		break;

	case 2:

		cout << "enter length and breadth of rectangle ";

		cin >> l >> b;

		cout << "area of rectangle is " << rectangle(l, b) << endl;

		break;

	case 3:

		cout << "Enter side of square: ";

		cin >> s;

		cout << "Area of square is " << square(s) << endl;

		break;

	case 4:

		cout << "enter radius of circle: ";
		cin >> r;

		cout << "area of the circle is " << circle(r) << endl;
	}


	return 0;
}



	float rectangle(float x, float y)

	{
		return x * y;

	}

	float square (float a)
	
	{

		return a * a;

	}

	float circle(float r)

	{

		return (3.14 * r * r);

	}

	float triangle(float b, float h)

	{

		return (0.5 * b * h);

	}