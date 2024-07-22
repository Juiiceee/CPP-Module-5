#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm default constructor called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137, target)
{
	std::cout << "ShrubberyCreationForm constructor called\n";
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &obj)
{
	if (this != &obj)
		*this = obj;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj)
{
	if (this == &obj)
		return *this;
	return *this;
}

void ShrubberyCreationForm::executeBehaviour() const
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
