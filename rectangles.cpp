#include <iostream> 
#include "rectangles.h" 
#include <stdlib.h>
#include <cmath>

using namespace std;


void Rectangles::Input()
{
	while (1)
	{
		cout << "�������(��������) ���������� � ������ ������� ����" << endl;
		cin >> m_x1;
		cout << "�������(��������) ���������� y ������ ������� ����" << endl;
		cin >> m_y1;
		cout << "�������(��������) ���������� � ������� �������� ����" << endl;
		cin >> m_x2;
		cout << "�������(��������) ���������� y ������� �������� ����" << endl;
		cin >> m_y2;

		if ((m_x1 < m_x2) && (m_y1 < m_y2))
			break;
		else
			cout << "������������� ����� �� ���������. ���������� ��� ���." << endl;
	}
	cout << endl;

}

void Rectangles::Raschet()
{
	m_length = m_x2 - m_x1;															// ������ �����
	m_width = m_y2 - m_y1;															// ������ ������
	m_perimeter = 2 * (m_length + m_width);											// ������ ���������
	m_square = m_length * m_width;													// ������ �������
	m_length > m_width ? m_ins�ircle = m_width / 2 : m_ins�ircle = m_length / 2;	// ������ ������� ��������� ����������
	m_cir�ircle = (sqrt(pow(m_length,2) + pow(m_width,2))) / 2;						// ������ ������� ��������� ����������
}

void Rectangles::Result()
{
	cout << "��������� ��������������:" << endl;
	cout << "���������� A:" << "(" << m_x1 << "," << m_y1 << ")" << endl;
	cout << "���������� B:" << "(" << m_x2 << "," << m_y1 << ")" << endl;
	cout << "���������� C:" << "(" << m_x2 << "," << m_y2 << ")" << endl;
	cout << "���������� D:" << "(" << m_x1 << "," << m_y2 << ")" << endl;
	cout << "�����:" << m_length << endl;
	cout << "������:" << m_width << endl;
	cout << "��������:" << m_perimeter << endl;
	cout << "�������:" << m_square << endl;
	cout << "������ ��������� ����������:" << m_ins�ircle << endl;
	cout << "������ ��������� ����������:" << m_cir�ircle << endl;
	m_length == m_width ? cout << "������ ������������� �������� ���������" << endl : cout << "������ ������������� �� �������� ���������" << endl;
	
	cout << "������� ���������� � � y ����� Q, ��� �������� ������ �� ��� � �������, ������������ ���������������" << endl;
	cout << "x: ";
	cin >> m_x3;
	cout << "y: ";
	cin >> m_y3;

	if ((m_x1 <= m_x3) && (m_x3 <= m_x2) && (m_y1 <= m_y3) && (m_y3 <= m_y2))
		cout << "����� Q ������ � ������� ������������ ���������������" << endl;
	else 
		cout << "����� Q �� ������ � ������� ������������ ���������������" << endl;




}