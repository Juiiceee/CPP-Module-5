#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm default constructor called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137, target)
{
	std::cout << "ShrubberyCreationForm constructor called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj)
{
	std::cout << "Copy constructor called\n";
	*this = obj;
	return;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj)
{
	std::cout << "Copy assignment operator called\n";
	if (this != &obj)
	{
	}
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Destructor of ShrubberyCreationForm called\n";
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor)
{
	if (this->getGradeExec() < executor.getGrade())
		throw AForm::GradeTooHighException();
	if (this->getIsSigned())
	{
		std::string filename = this->getTarget() + "_shrubbery";
		std::ofstream file;

		file.open(filename.c_str());
		if (file.is_open())
		{
			file << "      _-_" << std::endl;
			file << "   /~~   ~~\\" << std::endl;
			file << "/~~         ~~\\" << std::endl;
			file << "{               }" << std::endl;
			file << "\\  _-     -_  /" << std::endl;
			file << "~  \\ //  ~" << std::endl;
			file << "_- -   | | _- _" << std::endl;
			file << "_ -  | |   -_" << std::endl;
			file << "// \\" << std::endl;
			file.close();
		}
		else
			std::cerr << "impossible d'ecrire\n";
	}
}
