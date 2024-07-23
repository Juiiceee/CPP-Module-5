#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm default constructor called\n";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5, target)
{
	std::cout << "PresidentialPardonForm default constructor called\n";
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj) : AForm(obj.getName(), 25, 5, obj.getTarget())
{
	std::cout << "Copy constructor called\n";
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &obj)
{
	std::cout << "Copy assignment operator called\n";
	if (this == &obj)
		return *this;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Destructor of PresidentialPardonForm called\n";
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (this->getGradeExec() < executor.getGrade())
		throw AForm::GradeTooHighException();
	if (this->getIsSigned())
		std::cout << "Informs that " << this->getTarget() << " has been pardoned by Zaphod Beeblebrox.\n";
}
