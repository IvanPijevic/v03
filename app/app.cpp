#include "app.h"
#include <algorithm>
#include <utility>

namespace vsite::oop::v3
{
	student::student(std::string ime, int ocjena) :
		name(ime),
		grade(ocjena)
	{}
	student::student()
	{}

	results::results(int listLength) :
		m_list(nullptr),
		m_size(listLength)
	{
		m_list = new student[listLength];
	}

	results::~results()
	{
		delete[] m_list;
	}

	void results::add(const student& student)
	{
		m_list[m_index] = student;
		m_index++;
	}

	uint32_t results::has_grade(int ocjena)
	{
		uint32_t numberOfGrades = 0;
		for (int i = 0; i < m_size; i++)
		{
			if (m_list[i].grade == ocjena)
			{
				numberOfGrades++;
			}
		}
		return numberOfGrades;
	}

	uint32_t results::starts_with_letter(char slovo)
	{
		char temp = tolower(slovo);
		uint32_t brojSlova = 0;
		for (int i = 0; i < m_size; i++)
		{
			char c = tolower(m_list[i].name[0]);
			if (c == temp)
			{
				brojSlova++;
			}
		}
		return brojSlova;
	}


	array::array(uint32_t arraySize, double value) :
		m_size(arraySize)
	{
		m_array = new double[arraySize];
		for (uint32_t i = 0; i < arraySize; i++)
		{
			m_array[i] = value;
		}
	}

	array::~array()
	{
		delete[] m_array;
	}

	uint32_t array::size()
	{
		return m_size;
	}

	double array::at(int index)
	{
		if (index > (-1) && index < m_size)
		{
			return m_array[index];
		}
		return 0;
	}

	void array::push_back(double value)
	{
		m_size++;
		double* tempArray = new double[m_size];
		for (int i = 0; i < (m_size - 1); i++)
		{
			tempArray[i] = m_array[i];
		}
		
		delete[] m_array;
		m_array = tempArray;
		m_array[m_size - 1] = value;
	}

	array::array(array&& other) noexcept :
		m_size(std::exchange(other.m_size, 0)),
		m_array(std::exchange(other.m_array, nullptr))
	{}

	array::array(const array& other) :
		m_size(other.m_size),
		m_array(new double[other.m_size])
	{
		std::copy(other.m_array, other.m_array + other.m_size, m_array);
	}
}