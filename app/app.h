#pragma once
#include <string>

namespace vsite::oop::v3 
{
	class student
	{
	public:
		student(std::string ime = "", int ocjena = 0);

		std::string name;
		int grade;
	};

	class array
	{
	public:

	private:

	};

	class results
	{
	public:
		results(uint32_t listLength);
		~results();

		uint32_t has_grade(int grade);
		uint32_t starts_with_letter(char slovo);
		void add(student const& Student);

	private:
		student* list;

	};
}