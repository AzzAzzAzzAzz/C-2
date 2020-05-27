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
	cout << "请输入姓名、工号、性别、基本工资、奖金、扣税" << endl;
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
	cout << "姓名：" << name << endl;
	cout << "工号：" << id << endl;
	cout << "性别：" << sex << endl;
	cout << "基本工资：" << sal << endl;
	cout << "奖金：" << bonus << endl;
	cout << "扣税：" << tax << endl;
	cout << "总工资：" << totalsal << endl;
}