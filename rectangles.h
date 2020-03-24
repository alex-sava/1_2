#ifndef RECTANGLES_H
#define RECTANGLES_H

// Класс Rectangle по умолчанию создается по координатам левого нижнего и правого верхнего улов
class Rectangles
{
private:
	double m_x1{}, m_x2, m_y1, m_y2;			// координаты углов прямоугольника
	double m_length{}, m_width{};			// длина, ширина
	double m_perimeter{}, m_square{};		// периметр, площадь
	double m_insСircle{}, m_cirСircle{};	// радиус вписанной, радус описанной окружностей
	double m_x3{}, m_y3{};					// координаты точки Q


public:

	// Конструктор по умолчанию (с параметрами координат углов)
	Rectangles(double x1 = 2.0, double x2 = 5.0, double y1 = 3.0, double y2 = 7.0)
	{
		m_x1 = x1;
		m_x2 = x2;
		m_y1 = y1;
		m_y2 = y2;
	}

	// Деструктор
	~Rectangles() {    }

	void Input();	// ввода с клавиатуры
	void Raschet();	// расчет параметров прямоугольника
	void Result();  // вывод на экран

	double mx1() { return m_x1; }
	double mx2() { return m_x2; }
	double my1() { return m_y1; }
	double my2() { return m_y2; }
	
};

#endif //RECTANGLES_H