			// lab31.cpp
			// �������� �����
			// ����������� ������ No 3.1
			// ������������, ������ ��������: ������� ������ �����.
			// ������ 23
#include<iostream>
#include<cmath>

using namespace std;
int main() {
			double x;  // ������� ��������
			double y;  // ��������� ���������� ������
			double A;  // �������� ��������� -������������� ����� ������� ������ 
			double B;  // �������� ��������� -������������� ����� ������� ������
			double ctg;
			cout << "x = "; cin  >> x;
			
			A = pow(x, 2) + sin((4 * x) / 3); 
			ctg = cos(x) / sin(x);

			// ����� 1: ������������ � ���������� ����
			if (x < -5)
				
				B = ctg;
			if(x >= -5 && x <= 0)
				B = 4 - pow(x,2)/2;
			if(x>=0)
				B = log(x*x) - (4*x)/3;
			y = A + B;
			cout << endl;
			cout << "1) y = "<< y << endl;
			
			// ����� 2: ������������ � ������ ����
			if (x < -5)
				B = ctg;
			else if (x >= -5 && x <= 0)
				B = 4 - pow(x, 2) / 2;
			else if (x >= 0)
				B = log(x * x) - (4 * x) / 3;
			y = A + B;

			cout << "2) y = "<< y << endl;
			cin.get();
			return 0;
}