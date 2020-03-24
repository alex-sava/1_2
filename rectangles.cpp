#include <iostream> 
#include "rectangles.h" 
#include <stdlib.h>
#include <cmath>

using namespace std;


void Rectangles::Input()
{
	while (1)
	{
		cout << "Введите(измените) координату х левого нижнего угла" << endl;
		cin >> m_x1;
		cout << "Введите(измените) координату y левого нижнего угла" << endl;
		cin >> m_y1;
		cout << "Введите(измените) координату х правого верхнего угла" << endl;
		cin >> m_x2;
		cout << "Введите(измените) координату y правого верхнего угла" << endl;
		cin >> m_y2;

		if ((m_x1 < m_x2) && (m_y1 < m_y2))
			break;
		else
			cout << "Прямоугольник задан не корректно. Попробуйте еще раз." << endl;
	}
	cout << endl;

}

void Rectangles::Raschet()
{
	m_length = m_x2 - m_x1;															// расчет длины
	m_width = m_y2 - m_y1;															// расчет ширины
	m_perimeter = 2 * (m_length + m_width);											// расчет периметра
	m_square = m_length * m_width;													// расчет площади
	m_length > m_width ? m_insСircle = m_width / 2 : m_insСircle = m_length / 2;	// расчет радиуса вписанной окружности
	m_cirСircle = (sqrt(pow(m_length,2) + pow(m_width,2))) / 2;						// расчет радиуса описанной окружности
}

void Rectangles::Result()
{
	cout << "Параметры прямоугольника:" << endl;
	cout << "Координата A:" << "(" << m_x1 << "," << m_y1 << ")" << endl;
	cout << "Координата B:" << "(" << m_x2 << "," << m_y1 << ")" << endl;
	cout << "Координата C:" << "(" << m_x2 << "," << m_y2 << ")" << endl;
	cout << "Координата D:" << "(" << m_x1 << "," << m_y2 << ")" << endl;
	cout << "Длина:" << m_length << endl;
	cout << "Ширина:" << m_width << endl;
	cout << "Периметр:" << m_perimeter << endl;
	cout << "Площадь:" << m_square << endl;
	cout << "Радиус вписанной окружности:" << m_insСircle << endl;
	cout << "Радиус описанной окружности:" << m_cirСircle << endl;
	m_length == m_width ? cout << "Данный прямоугольник является квадратом" << endl : cout << "Данный прямоугольник не является квадратом" << endl;
	
	cout << "Введите координаты х и y точки Q, для проверки входит ли она в область, ограниченную прямоугольником" << endl;
	cout << "x: ";
	cin >> m_x3;
	cout << "y: ";
	cin >> m_y3;

	if ((m_x1 <= m_x3) && (m_x3 <= m_x2) && (m_y1 <= m_y3) && (m_y3 <= m_y2))
		cout << "Точка Q входит в область ограниченную прямоугольником" << endl;
	else 
		cout << "Точка Q не входит в область ограниченную прямоугольником" << endl;




}