#include "Bureaucrat.hpp"
#include "string"
#include "iostream"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	Bureaucrat bubu("gravit", 26);
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
	fifourm.beSigned(bubu);
	fifourm.execute(bubu);
	fifourm.execute(bubu);
}