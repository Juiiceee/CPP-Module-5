#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm default constructor called\n";
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj)
{
	std::cout << "Copy constructor called\n";
	*this = obj;
	return ;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &obj)
{
	std::cout << "Copy assignment operator called\n";
	if (this != &obj)
	{
		
	}
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Destructor of PresidentialPardonForm called\n";
}
