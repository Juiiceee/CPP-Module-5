#ifndef AFORM_HPP
#define AFORM_HPP
#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

#pragma once

class Bureaucrat;

class AForm
{
private:
	const std::string _name;
	std::string _target;
	bool _isSigned;
	const int _gradeSign;
	const int _gradeExec;

protected:
	AForm();
	AForm(std::string name, int gradeSign, int gradeExec);
	AForm(std::string name, int gradeSign, int gradeExec, std::string target);

public:
	AForm(const AForm &obj);
	AForm &operator=(const AForm &obj);
	virtual ~AForm();

	const std::string getName() const;
	int getGradeSign() const;
	int getGradeExec() const;
	bool getIsSigned() const;
	const std::string getTarget() const;
	void beSigned(const Bureaucrat &bureau);
	virtual void execute(const Bureaucrat &executor) = 0;

	class Exception : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};

	class GradeTooHighException : public AForm::Exception
	{
	public:
		virtual const char *what() const throw();
	};

	class GradeTooLowException : public AForm::Exception
	{
	public:
		virtual const char *what() const throw();
	};
};
std::ostream &operator<<(std::ostream &os, const AForm &obj);

#endif