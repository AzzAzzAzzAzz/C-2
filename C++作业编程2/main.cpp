#include<iostream>
using namespace std;

class Employee
{
	string name;
	int id;
	string sex;
	double sal;
	double bonus;
	double tax;
	double totalsal;
public:
	void input();
	double total();
	void display();
};

int main()
{
	Employee people;
	people.input();
	people.total();
	people.display();
	return 0;
}

void Employee::input()
{
	cout << "���������������š��Ա𡢻������ʡ����𡢿�˰" << endl;
	cin >> name;
	cin >> id;
	cin >> sex;
	cin >> sal;
	cin >> bonus;
	cin >> tax;
}
double Employee::total()
{
	totalsal = sal + bonus - tax;
	return totalsal;
}
void Employee::display()
{
	cout << "������" << name << endl;
	cout << "���ţ�" << id << endl;
	cout << "�Ա�" << sex << endl;
	cout << "�������ʣ�" << sal << endl;
	cout << "����" << bonus << endl;
	cout << "��˰��" << tax << endl;
	cout << "�ܹ��ʣ�" << totalsal << endl;
}