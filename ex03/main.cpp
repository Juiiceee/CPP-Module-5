#include "Bureaucrat.hpp"
#include "string"
#include "iostream"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	Bureaucrat bubu("gravit", 26);
	Bureaucrat bobo("avit", 2);
	ShrubberyCreationForm form("saluter");
	form.beSigned(bubu);
	form.execute(bubu);
	std::cout << "__________________________________________________________________________________________________\n";
	Bureaucrat bubo("grav", 146);
	ShrubberyCreationForm frilou("frilou");
	try
	{
		frilou.beSigned(bubo);
	}
	catch (std::exception &e)
	{
		std::cout << e.what();
	}
	RobotomyRequestForm fifourm("feurlo");
	PresidentialPardonForm fifarm("feurlop");
	PresidentialPardonForm fafarm("feurlup");
	fifourm.beSigned(bubu);
	fifourm.execute(bubu);
	fifourm.execute(bubu);
	try
	{
		fifarm.beSigned(bubu);
		fifarm.execute(bubu);
	}
	catch (std::exception &e)
	{
		std::cout << e.what();
	}
	fifarm.beSigned(bobo);
	fifarm.execute(bobo);

	bobo.executeForm(fifarm);
	bubu.executeForm(fifarm);
	bubu.executeForm(fafarm);
}