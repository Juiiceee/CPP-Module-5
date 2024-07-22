#include "Bureaucrat.hpp"
#include "string"
#include "iostream"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	Bureaucrat bubu("gravit", 26);
	ShrubberyCreationForm form("saluter");
	form.beSigned(bubu);
	form.execute(bubu);
}