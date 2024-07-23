#include "AForm.hpp"

AForm::AForm() : _name("Feur"), _isSigned(0), _gradeSign(150), _gradeExec(150)
{
	std::cout << "Form default constructor called\n";
}

AForm::AForm(std::string name, int gradeSign, int gradeExec, std::string target) : _name(name), _target(target), _isSigned(0), _gradeSign(gradeSign), _gradeExec(gradeExec)
{
	if (gradeSign > 150 || gradeExec > 150)
		throw(AForm::GradeTooLowException());
	else if (gradeSign < 1 || gradeExec < 1)
		throw(AForm::GradeTooHighException());
	else
		std::cout << "Form default constructor called\n";
}

AForm::AForm(std::string name, int gradeSign, int gradeExec) : _name(name), _isSigned(0), _gradeSign(gradeSign), _gradeExec(gradeExec)
{
	if (gradeSign > 150 || gradeExec > 150)
		throw(AForm::GradeTooLowException());
	else if (gradeSign < 1 || gradeExec < 1)
		throw(AForm::GradeTooHighException());
	else
		std::cout << "Form default constructor called\n";
}

AForm::~AForm()
{
	std::cout << "Destructor of Form called\n";
}

AForm::AForm(const AForm &obj) : _name(obj.getName()), _isSigned(obj.getIsSigned()), _gradeSign(obj.getGradeSign()), _gradeExec(obj.getGradeExec())
{
	std::cout << "Copy constructor called\n";
}

AForm &AForm::operator=(const AForm &obj)
{
	std::cout << "Copy assignment operator called\n";

	this->_isSigned = obj._isSigned;
	return *this;
}
void	AForm::beSigned(const Bureaucrat &bureau)
{
	if (bureau.getGrade() > this->getGradeSign())
		throw (AForm::GradeTooLowException());
	else
		this->setSign(true);
	std::cout << bureau.getName() << " signed " << this->getName() << " Form\n";
}

const std::string AForm::getName() const
{
	return (this->_name);
}

bool AForm::getIsSigned() const
{
	return (this->_isSigned);
}

int AForm::getGradeSign() const
{
	return (this->_gradeSign);
}

const std::string AForm::getTarget() const
{
	return (this->_target);
}

int AForm::getGradeExec() const
{
	return (this->_gradeExec);
}

void AForm::setTarget(std::string target)
{
	this->_target = target;
}

void AForm::setSign(bool isSigned)
{
	this->_isSigned = isSigned;
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("Bureaucraft grade too high.\n");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("Bureaucrat grade too low.\n");
}

std::ostream& operator<<(std::ostream &os, const AForm &obj)
{
	os << "The " << obj.getName() << " form, has a minimum grade to sign for " << obj.getGradeSign() << " and to execute for " << obj.getGradeExec() << " and its signature state is " << obj.getIsSigned() << std::endl;
	return (os);
}
