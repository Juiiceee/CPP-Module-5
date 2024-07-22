#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include <iostream>
# include <string>
# include <fstream>
# include "AForm.cpp"

class AForm;

class ShrubberyCreationForm : public AForm
{
	private:
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &obj);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &obj);
		~ShrubberyCreationForm();
		void execute(Bureaucrat const & executor);
};
#endif
