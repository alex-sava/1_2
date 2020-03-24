#ifndef RECTANGLES_H
#define RECTANGLES_H

// ����� Rectangle �� ��������� ��������� �� ����������� ������ ������� � ������� �������� ����
class Rectangles
{
private:
	double m_x1{}, m_x2, m_y1, m_y2;			// ���������� ����� ��������������
	double m_length{}, m_width{};			// �����, ������
	double m_perimeter{}, m_square{};		// ��������, �������
	double m_ins�ircle{}, m_cir�ircle{};	// ������ ���������, ����� ��������� �����������
	double m_x3{}, m_y3{};					// ���������� ����� Q


public:

	// ����������� �� ��������� (� ����������� ��������� �����)
	Rectangles(double x1 = 2.0, double x2 = 5.0, double y1 = 3.0, double y2 = 7.0)
	{
		m_x1 = x1;
		m_x2 = x2;
		m_y1 = y1;
		m_y2 = y2;
	}

	// ����������
	~Rectangles() {    }

	void Input();	// ����� � ����������
	void Raschet();	// ������ ���������� ��������������
	void Result();  // ����� �� �����

	double mx1() { return m_x1; }
	double mx2() { return m_x2; }
	double my1() { return m_y1; }
	double my2() { return m_y2; }
	
};

#endif //RECTANGLES_H