#include<iostream>
#include<string>
#include<vector>
#include"Exhibit.h"
#include"Museum.h"
using namespace std;

int main()
{
	Exhibit ex1("Rubens_P", "Four_philosophers", 1611);
	Exhibit ex2("Rubens_P", "Court_of_Paris", 1639);
	Exhibit ex3("Dali_S", "Atomic_Leda", 1949);
	Exhibit ex4("Rodin_A", "Thinker", 1888);

	Museum m1;
	m1.Add(ex1);
	m1.Add(ex2);
	m1.Add(ex3);
	m1.Add(ex4);
	m1.ShowMuseum();

	system("pause");
	return 0;
}