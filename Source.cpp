#include <iostream>
using namespace std;
class Func
{
public:
	double x, first, second,y;

	double root(double first, double second, double y)
	{
		if (first == 0) 
		{
			return -1;
		}
		return (y - second) / first;
	}
};
int main()
{
	setlocale(LC_ALL, "Russian");
	Func Urav;
	cout << "����� ����� ������� y=Ax+B, ��� ��������� ��������� A, B, x" << endl;
	cout << "����� y" << endl;
	cin >> Urav.y;
	cout << "����� A" << endl;
	cin >> Urav.first;
	cout << "����� B" << endl;
	cin >> Urav.second;
	if (Urav.root(Urav.first, Urav.second, Urav.y) == -1){
		cout << "��������� �� ����������.";
	}
	else {
		cout << "�����: ������ ������� =  " << Urav.root(Urav.first, Urav.second, Urav.y);
	}
}
