#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include <iostream>
# include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &obj);
		RobotomyRequestForm &operator=(const RobotomyRequestForm &obj);
		~RobotomyRequestForm();
		void execute(Bureaucrat const &executor) const;
};
#endif
