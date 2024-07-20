#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("zeubi"), _grade(150)
{
	std::cout << "Bureaucrat default constructor called\n";
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	this->setGrade(grade);
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj)
{
	std::cout << "Copy constructor called\n";
	*this = obj;
	return ;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj)
{
	std::cout << "Copy assignment operator called\n";
	if (this != &obj)
	{
		
	}
	return *this;
}

std::ostream& operator<<(std::ostream& os, Bureaucrat const &obj)
{
	os << obj.getName() << ", bureaucrat grade " << obj.getGrade() << std::endl;
	return (os);
}

Bureaucrat::~Bureaucrat()
{
	
}

const std::string	Bureaucrat::getName() const
{
	return (this->_name);
}

int			Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void		Bureaucrat::increment()
{
	if (this->_grade - 1 < 1)
		throw(Bureaucrat::GradeTooHighException());
	else
		this->_grade--;
}

void		Bureaucrat::decrement()
{
	if (this->_grade + 1 > 150)
		throw(Bureaucrat::GradeTooLowException());
	else
		this->_grade++;
}

void		Bureaucrat::setGrade(int grade)
{
	if (grade < 1)
		throw(Bureaucrat::GradeTooHighException());
	else if (grade > 150)
		throw(Bureaucrat::GradeTooLowException());
	else
		this->_grade = grade;
}

const char* Bureaucrat::Exception::what() const throw()
{
	return ("Bureau Exception\n");
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade cannot < 1\n");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade cannot > 150\n");
}
