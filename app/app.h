#pragma once
#include <string>

namespace vsite::oop::v3 
{
	class student
	{
	public:
		student(std::string ime, int ocjena);
		student();
		std::string name;
		int grade;
	};

	class results
	{
	public:
		results(int listLength);
		~results();
		void add(const student& student);
		unsigned int has_grade(int grade);
		unsigned int starts_with_letter(char slovo);

	private:
		student* m_list;
		int m_size;
		int m_index;

	};

	class array
	{
	public:
		array(uint32_t arraySize = 0, double pValue = 0.0);
		~array();
		uint32_t size();
		double at(int index);
		void push_back(double value);
		array(array&& other) noexcept;
		array(const array& other);

	private:
		uint32_t m_size;
		double* m_array;
	};
}