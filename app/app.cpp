#include "app.h"
#include <algorithm>

namespace vsite::oop::v3
{
	student::student(std::string ime, int ocjena) :
		name(name),
		grade(grade)
	{}



	results::results(uint32_t listLength) :
		list(nullptr)
	{
		list = new student[listLength];
	}

	results::~results()
	{}

	uint32_t results::has_grade(int ocjena)
	{
		uint32_t numberOfGrades = 0;
		 
	}

	uint32_t results::starts_with_letter(char slovo)
	{

	}
	void results::add(student const& Student)
	{

	}
}