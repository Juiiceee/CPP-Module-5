#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Form
{
private:
	const std::string _name;
	bool _isSigned;
	const int _gradeSign;
	const int _gradeExec;

public:
	Form();
	Form(std::string name, int gradeSign, int gradeExec);
	Form(const Form &obj);
	Form &operator=(const Form &obj);
	~Form();

	const std::string getName() const;
	int getGradeSign() const;
	int getGradeExec() const;
	bool getIsSigned() const;
	//void beSigned(const Bureaucrat &bureau);

	class Exception : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};

	class GradeTooHighException : public Form::Exception
	{
	public:
		virtual const char *what() const throw();
	};

	class GradeTooLowException : public Form::Exception
	{
	public:
		virtual const char *what() const throw();
	};
};
std::ostream &operator<<(std::ostream &os, const Form &obj);

#endif