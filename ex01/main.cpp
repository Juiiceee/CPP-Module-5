#include "Bureaucrat.hpp"
#include "string"
#include "iostream"
#include "Form.hpp"

int main()
{
	try
	{
		Form salut("feur doc", 160, 20);
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cout << e.what();
	}
	try
	{
		Form salut("feur doc", 150, 160);
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cout << e.what();
	}
	std::cout << "__________________________________________________________________________________________________\n";
	try
	{
		Form salut("feur doc", 160, 160);
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cout << e.what();
	}
	std::cout << "__________________________________________________________________________________________________\n";
	try
	{
		Form salut("feur doc", 0, 20);
	}
	catch (Form::GradeTooHighException &e)
	{
		std::cout << e.what();
	}
	try
	{
		Form salut("feur doc", 150, 0);
	}
	catch (Form::GradeTooHighException &e)
	{
		std::cout << e.what();
	}
	std::cout << "__________________________________________________________________________________________________\n";
	try
	{
		Form salut("feur doc", 0, 0);
	}
	catch (Form::GradeTooHighException &e)
	{
		std::cout << e.what();
	}
	std::cout << "__________________________________________________________________________________________________\n";
	Bureaucrat bubu("Jaja", 12);
	Form form("feur doc", 10, 150);
	std::cout << form;
	try
	{
		form.beSigned(bubu);
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cout << e.what();
	}
	std::cout << form;
	std::cout << "__________________________________________________________________________________________________\n";
	bubu.increment();
	bubu.increment();
	try
	{
		form.beSigned(bubu);
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cout << e.what();
	}
	std::cout << form;
	std::cout << "__________________________________________________________________________________________________\n";
	bubu.signForm(form);
	std::cout << "__________________________________________________________________________________________________\n";
	Form formu("Fifou", 60, 150);
	bubu.signForm(formu);
	std::cout << "__________________________________________________________________________________________________\n";
	Form fafou("fafou", 1, 150);
	bubu.signForm(fafou);
}