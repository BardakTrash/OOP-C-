#include <iostream>
using namespace std;
class Point
{
private:
	double x;
	double y;
public:
	Point() : Point(0, 0) {}
	Point(double x, double y)
	{
		this->x = x;
		this->y = y; // Данил пидр


	}
	friend bool operator==(const Point& point, const Point& point2)
	{
		return point.x == point2.x && point.y == point2.y;
	}
	Point& operator=(const Point& point)
	{
		if (!(this == &point))
		{
			this->x = point.x;
			this->y = point.y;
		}
	}
};
class Figure
{
private:
	int size;
	Point* points;
public:
	Figure() : Figure(5) {}
	Figure(int size) : points{ new Point[size] }, size{ size } 
	{
		for (int i = 0;i < size;i++)
		{
			points[i] = Point(rand() % 10, rand() % 10);
		}
	}
	Figure(const Figure& figure) : points{ new Point[figure.size]}, size{figure.size}
	{
		for (int i = 0;i < size;i++)
		{
			points[i] = figure.points[i];
		}
	}
	Figure(Figure&& figure) : points{figure.points }, size{ figure.size }
	{
		figure.points = nullptr;
		figure.size = 0;
	}
	~Figure()
	{
		delete[] points;
	}
	void print()
	{
		
	}
};
int main()
{
	Figure fig(5);
	Figure fig2(10);
	Figure fig3(5);

	fig = fig3;
	fig = fig2;
	Figure fig4(fig);

}