#include "Bureaucrat.hpp"
#include "string"
#include "iostream"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	ShrubberyCreationForm form("Feuille");

	Bureaucrat bubu("gravit", 26);

	form.execute(bubu);
}