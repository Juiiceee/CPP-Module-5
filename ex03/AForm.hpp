#ifndef AFORM_HPP
#define AFORM_HPP

#include <exception>
#include "Bureaucrat.hpp"

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
	AForm(AForm const &obj);
	AForm &operator=(const AForm &obj);
	virtual ~AForm();

	int getGradeSign() const;
	int getGradeExec() const;
	const std::string getName() const;
	const std::string getTarget() const;
	bool getIsSigned() const;

	void setTarget(std::string target);
	void setSign(bool isSigned);

	void beSigned(const Bureaucrat &bureau);
	virtual void execute(Bureaucrat const &executor) const = 0;

	class GradeTooLowException : public std::exception
	{
		virtual const char *what() const throw();
	};

	class GradeTooHighException : public std::exception
	{
		virtual const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &os, const AForm &obj);

#endif