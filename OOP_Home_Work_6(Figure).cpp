#include <iostream>
using namespace std;

class Figure
{
public:
	void Draw()
	{
		cout << "The Figure is drawn" << endl;
	}
	
	void Area()
	{
		cout << "Area of Figure is..." << endl;
	}

	void Perimeter()
	{
		cout << "Perimeter of Fugure is..." << endl;
	}
};

class Point :public Figure
{
public:
	void Draw() 
	{
		cout << "The Point is drawn" << endl;
	}

	void Area()
	{
		cout << "Point does not have an area." << endl;
	}

	void Perimeter()
	{
		cout << "Point does not have a perimeter." << endl;
	}
};

class Straight : public Figure
{
public:
	void Draw()
	{
		cout << "The Straight is drawn" << endl;
	}

	void Area()
	{
		cout << "Straight does not have an area." << endl;
	}

	void Perimeter()
	{
		cout << "Straight does not have a perimeter." << endl;
	}
};

class Ellipse : public Figure  // эллипс
{
public:
	void Draw()
	{
		cout << "The Ellipse is drawn" << endl;
	}

	void Area()
	{
		cout << "Area of Ellipse is..." << endl;
	}

	void Perimeter()
	{
		cout << "Perimeter of Ellipse is..." << endl;
	}
};

class Circle :public Ellipse  // окружность
{
public:
	void Draw()
	{
		cout << "The Circle is drawn" << endl;
	}

	void Area()
	{
		cout << "Area of Circle is..." << endl;
	}

	void Perimeter()
	{
		cout << "Perimeter of Circle is..." << endl;
	}
};

class Polygon : public Figure   // многоугольник 
{
public:
	void Draw()
	{
		cout << "The Polygon is drawn" << endl;
	}

	void Area()
	{
		cout << "Area of Polygon is..." << endl;
	}

	void Perimeter()
	{
		cout << "Perimeter of Polygon is..." << endl;
	}
};

class Triangle :public Polygon 
{
public:
	void Draw()
	{
		cout << "The Triangle is drawn" << endl;
	}

	void Area()
	{
		cout << "Area of Triangle is..." << endl;
	}

	void Perimeter()
	{
		cout << "Perimeter of Triangle is..." << endl;
	}
};

class Ordinary_Acute_Triangle : public Triangle  // Обычный Остроугольный Треугольник
{
public:
	void Draw()
	{
		cout << "The Ordinary Acute Triangle is drawn" << endl;
	}

	void Area()
	{
		cout << "Area of Ordinary Acute Triangle is..." << endl;
	}

	void Perimeter()
	{
		cout << "Perimeter of Ordinary Acute Triangle is..." << endl;
	}
};

class Isosceles_Acute_Triangle : public Triangle // Равнобедренный Остроугольный Треугольник
{
public:
	void Draw()
	{
		cout << "The Isosceles Acute Triangle is drawn" << endl;
	}

	void Area()
	{
		cout << "Area of Isosceles Acute Triangle is..." << endl;
	}

	void Perimeter()
	{
		cout << "Perimeter of Isosceles Acute Triangle is..." << endl;
	}
};

class Equilateral_Acute_Triangle :public Triangle // Равносторонний Остроугольный Треугольник
{
public:
	void Draw()
	{
		cout << "The Equilateral Acute Triangle is drawn" << endl;
	}

	void Area()
	{
		cout << "Area of Equilateral Acute Triangle is..." << endl;
	}

	void Perimeter()
	{
		cout << "Perimeter of Equilateral Acute Triangle is..." << endl;
	}
};

class Ordinary_Obtuse_Triangle : public Triangle // Обычный Тупоугольный Треугольник
{
public:
	void Draw()
	{
		cout << "The Ordinary Obtuse Triangle is drawn" << endl;
	}

	void Area()
	{
		cout << "Area of Ordinary Obtuse Triangle is..." << endl;
	}

	void Perimeter()
	{
		cout << "Perimeter of Ordinary Obtuse Triangle is..." << endl;
	}
};

class Isosceles_Obtuse_Triangle : public Triangle  //равнобедренный Тупоугольный Треугольник
{
public:
	void Draw()
	{
		cout << "The Isosceles Obtuse Triangle is drawn" << endl;
	}

	void Area()
	{
		cout << "Area of Isosceles Obtuse Triangle is..." << endl;
	}

	void Perimeter()
	{
		cout << "Perimeter of Isosceles Obtuse Triangle is..." << endl;
	}
};

class Plain_Rectangular_Triangle : public Triangle //Обычный Прямоугольный Треугольник
{
public:
	void Draw()
	{
		cout << "The Plain Rectangular Triangle is drawn" << endl;
	}

	void Area()
	{
		cout << "Area of Plain Rectangular Triangle is..." << endl;
	}

	void Perimeter()
	{
		cout << "Perimeter of Plain Rectangular Triangle is..." << endl;
	}
};

class Isosceles_Rectangular_Triangle : public Triangle //Равнобедренный Прямоугольный Треугольник
{
public:
	void Draw()
	{
		cout << "The Isosceles Rectangular Triangle is drawn" << endl;
	}

	void Area()
	{
		cout << "Area of Isosceles Rectangular Triangle is..." << endl;
	}

	void Perimeter()
	{
		cout << "Perimeter of Isosceles Rectangular Triangle is..." << endl;
	}
};

class Quadrilateral : public Polygon  // Четырёхугольник
{
public:
	void Draw()
	{
		cout << "The Quadrilateral is drawn" << endl;
	}

	void Area()
	{
		cout << "Area of Quadrilateral is..." << endl;
	}

	void Perimeter()
	{
		cout << "Perimeter of Quadrilateral is..." << endl;
	}
};

class Parallelogram :public Quadrilateral  //Параллелограмм
{
public:
	void Draw()
	{
		cout << "The Parallelogram is drawn" << endl;
	}

	void Area()
	{
		cout << "Area of Parallelogram is..." << endl;
	}

	void Perimeter()
	{
		cout << "Perimeter of Parallelogram is..." << endl;
	}
};

class Rectangle : public Parallelogram // Прямоугольник
{
public:
	void Draw()
	{
		cout << "The Rectangle is drawn" << endl;
	}

	void Area()
	{
		cout << "Area of Rectangle is..." << endl;
	}

	void Perimeter()
	{
		cout << "Perimeter of Rectangle is..." << endl;
	}
};

class Square : public Rectangle
{
public:
	void Draw()
	{
		cout << "The Square is drawn" << endl;
	}

	void Area()
	{
		cout << "Area of Square is..." << endl;
	}

	void Perimeter()
	{
		cout << "Perimeter of Square is..." << endl;
	}
};

class Rhombus :public Parallelogram
{
public:
	void Draw()
	{
		cout << "The Rhombus is drawn" << endl;
	}

	void Area()
	{
		cout << "Area of Rhombus is..." << endl;
	}

	void Perimeter()
	{
		cout << "Perimeter of Rhombus is..." << endl;
	}
};

class Trapeze :public Quadrilateral
{
public:
	void Draw()
	{
		cout << "The Trapeze is drawn" << endl;
	}

	void Area()
	{
		cout << "Area of Trapeze is..." << endl;
	}

	void Perimeter()
	{
		cout << "Perimeter of Trapeze is..." << endl;
	}
};

class Deltoid :public Quadrilateral
{
public:
	void Draw()
	{
		cout << "The Deltoid is drawn" << endl;
	}

	void Area()
	{
		cout << "Area of Deltoid is..." << endl;
	}

	void Perimeter()
	{
		cout << "Perimeter of Deltoid is..." << endl;
	}
};



int main()
{
	/*Figure A;
	A.Draw();
	A.Area();
	A.Perimeter();
	cout << "=========" << endl;

	Point B;
	B.Draw();
	B.Area();
	B.Perimeter();
	cout << "=========" << endl;

	Straight C; 
	C.Draw();
	C.Area();
	C.Perimeter();
	cout << "=========" << endl;

	Ellipse d;
	d.Draw();
	d.Area();
	d.Perimeter();
	cout << "=========" << endl;*/

	/*Polygon polygon;
	polygon.Draw();
	polygon.Area();
	polygon.Perimeter();
	cout << "=========" << endl;

	Circle circle;
	circle.Draw();
	circle.Area();
	circle.Perimeter();
	cout << "=========" << endl;

	Triangle triangle;
	triangle.Draw();
	triangle.Area();
	triangle.Perimeter();
	cout << "=========" << endl;

	Quadrilateral quadrilateral;
	quadrilateral.Draw();
	quadrilateral.Area();
	quadrilateral.Perimeter();
	cout << "=========" << endl;*/

	/*Ordinary_Acute_Triangle ordinary_Acute_Triangle;
	ordinary_Acute_Triangle.Draw();
	ordinary_Acute_Triangle.Area();
	ordinary_Acute_Triangle.Perimeter();
	cout << "=========" << endl;

	Isosceles_Acute_Triangle isosceles_Acute_Triangle;
	isosceles_Acute_Triangle.Draw();
	isosceles_Acute_Triangle.Area();
	isosceles_Acute_Triangle.Perimeter();
	cout << "=========" << endl;

	Equilateral_Acute_Triangle equilateral_Acute_Triangle;
	equilateral_Acute_Triangle.Draw();
	equilateral_Acute_Triangle.Area();
	equilateral_Acute_Triangle.Perimeter();
	cout << "=========" << endl;

	Ordinary_Obtuse_Triangle ordinary_Obtuse_Triangle;
	ordinary_Obtuse_Triangle.Draw();
	ordinary_Obtuse_Triangle.Area();
	ordinary_Obtuse_Triangle.Perimeter();
	cout << "=========" << endl;

	Isosceles_Obtuse_Triangle isosceles_Obtuse_Triangle;
	isosceles_Obtuse_Triangle.Draw();
	isosceles_Obtuse_Triangle.Area();
	isosceles_Obtuse_Triangle.Perimeter();
	cout << "=========" << endl;

	Plain_Rectangular_Triangle plain_Rectangular_Triangle;
	plain_Rectangular_Triangle.Draw();
	plain_Rectangular_Triangle.Area();
	plain_Rectangular_Triangle.Perimeter();
	cout << "=========" << endl;

	Isosceles_Rectangular_Triangle isosceles_Rectangular_Triangle;
	isosceles_Rectangular_Triangle.Draw();
	isosceles_Rectangular_Triangle.Area();
	isosceles_Rectangular_Triangle.Perimeter();
	cout << "=========" << endl;*/

	Parallelogram parallelogram;
	parallelogram.Draw();
	parallelogram.Area();
	parallelogram.Perimeter();
	cout << "=========" << endl;

	Trapeze trapeze;
	trapeze.Draw();
	trapeze.Area();
	trapeze.Perimeter();
	cout << "=========" << endl;

	Deltoid deltoid;
	deltoid.Draw();
	deltoid.Area();
	deltoid.Perimeter();
	cout << "=========" << endl;

	Rectangle rectangle;
	rectangle.Draw();
	rectangle.Area();
	rectangle.Perimeter();
	cout << "=========" << endl;

	Rhombus rhombus;
	rhombus.Draw();
	rhombus.Area();
	rhombus.Perimeter();
	cout << "=========" << endl;

	Square square;
	square.Draw();
	square.Area();
	square.Perimeter();
	cout << "=========" << endl;

	return 0;
}