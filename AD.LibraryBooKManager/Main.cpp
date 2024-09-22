

#include <iostream>
#include <conio.h>

using namespace std;

struct Book {
	string title;
	string author;
	int yearPublished = 0;
	int numPages = 0;
};
//void PrintBook(const Book )
//{
//	cout << .Name << " has a gpa of " << student.GPA << "\n";
//}

int main()
{
	const int Num_books = 4;
	Book book[Num_books] =
	{
		{"A Game of Thrones","George R.R Martin", 1996,720},
		{"The Voyage of the Dawn Treader", "C.S Lewis", 1952 , 223 },
		{"Dune","Frank Herbert",1963,412},
		{"Naruto","Masashi Kishimoto",1999,192}
	};

	for (int i = 0; i < Num_books; i++)
	{
		cout << (i + 1) << ". " << book[i].title << "\n Author: " << book[i].author <<
			"\n Year Published: " << book[i].yearPublished <<
			"\n Pages: " << book[i].numPages << "\n \n";
	}
	int ID = 0;
	cout << "Enter the ID of the Book You Would Like to update (1-4): ";
	cin >> ID;
	cout << book[ID - 1].title << "\n ";

	cout << "Enter the Author (Unknown): ";
	cin >> book[ID - 1].author;

	cout << "Enter the Year Published: ";
	cin >> book[ID - 1].yearPublished;

	cout << "Enter the Number of Pages: ";
	cin >> book[ID - 1].numPages;

	string choice;
	cout << "\n Save these changes? (Y/N):";
	cin >> choice;

	if (choice == "Y"||"y")
	{
	
	cout << "\n" << (ID) << ". " << book[ID - 1].title << " \n Author: " << book[ID - 1].author <<
		" \n Year Published: " << book[ID - 1].yearPublished <<
		" \n Pages: " << book[ID - 1].numPages << "\n \n";
	}
	else if (choice == "N"||"n")
	{
		cout << "Done";
	}
}