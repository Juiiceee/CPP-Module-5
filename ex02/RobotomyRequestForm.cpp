#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm default", 72, 45, "Feur")
{
	std::cout << "RobotomyRequestForm default constructor called\n";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45, target)
{
	std::cout << "RobotomyRequestForm constructor called\n";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj) : AForm(obj.getName(), 72, 45, obj.getTarget())
{
	std::cout << "Copy constructor called\n";
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &obj)
{
	std::cout << "Copy assignment operator called\n";
	if (this == &obj)
		return *this;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Destructor of RobotomyRequestForm called\n";
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	static int i = 0;
	if (this->getGradeExec() < executor.getGrade())
		throw AForm::GradeTooHighException();
	if (this->getIsSigned())
	{
		std::cout << "Makes some drilling noises\n";
		if (i % 2)
			std::cout << this->getTarget() << "has been robotomized successfully 50% of the time\n";
		else
			std::cout << "robotomy failed\n";
		i++;
	}
}
