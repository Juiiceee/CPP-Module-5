#include "Bureaucrat.hpp"
#include "string"
#include "iostream"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	Bureaucrat bubu("gravit", 2);
	/*Bureaucrat bobo("avit", 2);
	ShrubberyCreationForm form("saluter");
	form.beSigned(bubu);
	form.execute(bubu);
	std::cout << "__________________________________________________________________________________________________\n";
	Bureaucrat bubo("grav", 146);
	PresidentialPardonForm fafarm("feurlup");*/
	Intern intern;
	std::cout << "__________________________________________________________________________________________________\n";
	AForm *fifourm = intern.makeForm("ShrubberyCreationForm", "feur");
	std::cout << "__________________________________________________________________________________________________\n";
	AForm *fifirm = intern.makeForm("RobotomyRequestForm", "feur");
	std::cout << "__________________________________________________________________________________________________\n";
	AForm *fafourm = intern.makeForm("PresidentialPardonForm", "feur");
	std::cout << "__________________________________________________________________________________________________\n";
	fifourm->beSigned(bubu);
	fifourm->execute(bubu);
	std::cout << "__________________________________________________________________________________________________\n";
	fifirm->beSigned(bubu);
	fifirm->execute(bubu);
	std::cout << "__________________________________________________________________________________________________\n";
	fafourm->beSigned(bubu);
	fafourm->execute(bubu);
	std::cout << "__________________________________________________________________________________________________\n";
	delete fafourm;
	delete fifirm;
	delete fifourm;
	/*fifourm.execute(bubu);
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
	bubu.executeForm(fafarm);*/
}