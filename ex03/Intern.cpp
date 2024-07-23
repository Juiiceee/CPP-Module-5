#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern default constructor called\n";
}

Intern::Intern(const Intern &obj)
{
	std::cout << "Copy constructor called\n";
	*this = obj;
	return ;
}

Intern &Intern::operator=(const Intern &obj)
{
	std::cout << "Copy assignment operator called\n";
	if (this != &obj)
		return *this;
	return *this;
}

Intern::~Intern()
{
	std::cout << "Destructor of Intern called\n";
}

void freeTab(AForm *tab[], int j)
{
	for (int i = 0; i < 3; i++)
	{
		if (i != j)
			delete tab[i];
	}
}

AForm *Intern::makeForm(std::string name, std::string target)
{
	std::string allName[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
	AForm *allForm[3] = {
		new ShrubberyCreationForm(target),
		new RobotomyRequestForm(target),
		new PresidentialPardonForm(target),
	};

	for (int i = 0; i < 3; i++)
	{
		if (name == allName[i])
		{
			freeTab(allForm, i);
			std::cout << "Intern creates " << allForm[i]->getName() << std::endl;
			return (allForm[i]);
		}
	}
	freeTab(allForm, 3);
	return (NULL);
}
