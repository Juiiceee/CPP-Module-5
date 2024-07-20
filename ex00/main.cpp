#include "Bureaucrat.hpp"
#include "string"
#include "iostream"

int main()
{
	try 
	{
		Bureaucrat Salut("Louis", 0);
	}
	catch (Bureaucrat::Exception &e)
	{
		std::cout << e.what();
	}
	try 
	{
		Bureaucrat Salut("Louis", 151);
	}
	catch (Bureaucrat::Exception &e)
	{
		std::cout << e.what();
	}
	std::cout << "__________________________________________________________________________________________________\n";
	Bureaucrat Salut("Louis", 150);
	std::cout << Salut;
	Salut.increment();
	std::cout << Salut;
	Salut.decrement();
	std::cout << Salut;
	try 
	{
		Salut.decrement();
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << e.what();
	}
	std::cout << Salut;
	try 
	{
		Salut.decrement();
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << e.what();
	}
	std::cout << Salut;
	std::cout << "__________________________________________________________________________________________________\n";
	Bureaucrat feunouille("feunouille", 1);
	feunouille.decrement();
	std::cout << feunouille;
	feunouille.increment();
	std::cout << feunouille;
	try 
	{
		feunouille.increment();
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.what();
	}
}