#include "Form.hpp"

Form::Form() : _name("Feur"), _gradeSign(150), _gradeExec(150)
{
	std::cout << "Form default constructor called\n";
}

Form::Form(std::string name, int gradeSign, int gradeExec) : _name(name), _gradeSign(gradeSign), _gradeExec(gradeExec)
{
	if (gradeSign > 150 || gradeExec > 150)
		throw(Form::GradeTooLowException());
	else if (gradeSign < 1 || gradeExec < 1)
		throw(Form::GradeTooHighException());
	else
		std::cout << "Form default constructor called\n";
}

Form::Form(const Form &obj) : _name(obj.getName()), _isSigned(obj.getIsSigned()), _gradeSign(obj.getGradeSign()), _gradeExec(obj.getGradeExec())
{
	std::cout << "Copy constructor called\n";
}

Form &Form::operator=(const Form &obj)
{
	std::cout << "Copy assignment operator called\n";

	this->_isSigned = obj._isSigned;
	return *this;
}

std::ostream& operator<<(std::ostream &os, const Form &obj)
{
	os << "The " << obj.getName() << " form, has a minimum grade to sign for " << obj.getGradeSign() << " and to execute for " << obj.getGradeExec() << "and its signature state is " << obj.getIsSigned() << std::endl;
	return (os);
}

Form::~Form()
{
	std::cout << "Destructor of Form called\n";
}

/*void	beSigned(const Bureaucrat &bureau)
{

}*/

const std::string Form::getName() const
{
	return (this->_name);
}

bool Form::getIsSigned() const
{
	return (this->_isSigned);
}

int Form::getGradeSign() const
{
	return (this->_gradeSign);
}

int Form::getGradeExec() const
{
	return (this->_gradeExec);
}

const char* Form::Exception::what() const throw()
{
	return ("Form Exception\n");
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade cannot < 1\n");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade cannot > 150\n");
}