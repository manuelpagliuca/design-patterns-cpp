#pragma once
#include <string>

class Product
{
public:
	void setA(const std::string& part)
	{
		partA = part;
	}

	void setB(const std::string& part)
	{
		partB = part;
	}

	void setC(const std::string& part)
	{
		partC = part;
	}

	std::string get_all_parts()
	{
		return (partA + " " + partB + " " + partC);
	}

private:
	std::string partA;
	std::string partB;
	std::string partC;
};