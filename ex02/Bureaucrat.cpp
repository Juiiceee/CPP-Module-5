#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("zeubi"), _grade(150)
{
	std::cout << "Bureaucrat default constructor called\n";
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	std::cout << "Bureaucrat constructor called\n";
	this->setGrade(grade);
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj)
{
	std::cout << "Copy constructor called\n";
	*this = obj;
	return;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj)
{
	std::cout << "Copy assignment operator called\n";
	if (this != &obj)
	{
		this->_grade = obj._grade;
	}
	return *this;
}

std::ostream &operator<<(std::ostream &os, Bureaucrat const &obj)
{
	os << obj.getName() << ", bureaucrat grade " << obj.getGrade() << std::endl;
	return (os);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor called " << this->getName() << "\n";
}

const std::string Bureaucrat::getName() const
{
	return (this->_name);
}

int Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void Bureaucrat::increment()
{
	if (this->_grade - 1 < 1)
		throw(Bureaucrat::GradeTooHighException());
	this->_grade--;
	std::cout << "Increment\n";
}

void Bureaucrat::decrement()
{
	if (this->_grade + 1 > 150)
		throw(Bureaucrat::GradeTooLowException());
	this->_grade++;
	std::cout << "Decrement\n";
}

void Bureaucrat::setGrade(int grade)
{
	if (grade < 1)
		throw(Bureaucrat::GradeTooHighException());
	else if (grade > 150)
		throw(Bureaucrat::GradeTooLowException());
	this->_grade = grade;
	std::cout << "the grade has been defined\n";
}

void Bureaucrat::signForm(const AForm &form)
{
	if (form.getIsSigned())
		std::cout << this->getName() << " signed " << form.getName() << std::endl;
	else
	{
		if (this->getGrade() < form.getGradeSign())
			std::cout << this->getName() << " couldn’t sign " << form.getName() << " because PAS ENVIE" << std::endl;
		else
			std::cout << this->getName() << " couldn’t sign " << form.getName() << " because grade too higher" << std::endl;
	}
}

const char *Bureaucrat::Exception::what() const throw()
{
	return ("Bureau Exception\n");
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade cannot < 1\n");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade cannot > 150\n");
}
