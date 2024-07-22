#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm default constructor called\n";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj)
{
	std::cout << "Copy constructor called\n";
	*this = obj;
	return ;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &obj)
{
	std::cout << "Copy assignment operator called\n";
	if (this != &obj)
	{
		
	}
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Destructor of RobotomyRequestForm called\n";
}
