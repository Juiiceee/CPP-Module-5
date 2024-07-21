#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <string>
#include "Form.hpp"

class Form;

class Bureaucrat
{
private:
	std::string const _name;
	int _grade;

public:
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &obj);
	Bureaucrat &operator=(const Bureaucrat &obj);
	~Bureaucrat();
	const std::string getName() const;
	int getGrade() const;
	void increment();
	void decrement();
	void setGrade(int grade);
	void signForm(const Form &form);

	class Exception : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};

	class GradeTooHighException : public Bureaucrat::Exception
	{
	public:
		virtual const char *what() const throw();
	};

	class GradeTooLowException : public Bureaucrat::Exception
	{
	public:
		virtual const char *what() const throw();
	};
};
std::ostream &operator<<(std::ostream &os, Bureaucrat const &obj);
#endif
