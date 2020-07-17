#pragma once
#include<iostream>
#include<string>
#include<vector>
#include"Exhibit.h"
using namespace std;

class Museum 
{
	vector<Exhibit>exhibits;
	int numberOfExhibits;
public:
	Museum() : numberOfExhibits(0)
	{ }

	Museum(int numberOfExhibits) : numberOfExhibits(exhibits.size()) { }

	void Add(Exhibit other)
	{
		
		exhibits.push_back(other);
	}

	void Delete(int position)
	{
		if (position > exhibits.size()) cout << "There is no exhibit with this number" << endl;

		exhibits.erase(exhibits.begin() + (position - 1));

	}

	void SearchExhibitByNameAutor(string myNameAutor)
	{
		for (int i = 0; i < exhibits.size(); i++)
		{
			if (exhibits[i].GetNameAutor() == myNameAutor)
			{
				exhibits[i].ShowInfoExhibit();
			}
		}
	}

	void SearchExhibitByYearOfCreation(int  myYearOfCreation)
	{
		for (int i = 0; i < exhibits.size(); i++)
		{
			if (exhibits[i].GetYearOfCreation() == myYearOfCreation)
			{
				exhibits[i].ShowInfoExhibit();
			}
		}
	}

	void ShowMuseum()const
	{
		for (int i = 0; i < exhibits.size(); i++)
		{
			
			
				exhibits[i].ShowInfoExhibit();
			
		}
	}

};
