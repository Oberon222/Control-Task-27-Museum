#pragma once
#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Exhibit
{
	string nameAutor;
	string nameExhibit;
	int yearOfCreation;
public:
	Exhibit() : nameAutor(" "), nameExhibit(" "), yearOfCreation(0) { }

	Exhibit(string nameAutor, string nameExhibit, int yearOfCreation)
	{
		this->nameAutor = nameAutor;
		this->nameExhibit = nameExhibit;
		this->yearOfCreation = yearOfCreation;
	}

	string GetNameAutor()const
	{
		return nameAutor;
	}

	string GetNameExhibit()const
	{
		return nameExhibit;
	}

	int GetYearOfCreation()const
	{
		return yearOfCreation;
	}

	void ShowInfoExhibit()const
	{
		cout << "Author's name: " << nameAutor << endl;
		cout << "Name of the exhibit: " << nameExhibit << endl;
		cout << "Year of creation of the exhibit: " << yearOfCreation << endl;
	}

};
