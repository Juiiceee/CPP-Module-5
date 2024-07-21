#include "Bureaucrat.hpp"
#include "string"
#include "iostream"
#include "Form.hpp"

int main()
{
	/*try
	{*/
		Form salut("feur doc", 120, 20);
		std::cout << salut;
	//}
	/*catch (Form::GradeTooHighException &e)
	{
		std::cout << e.what();
	}*/
	std::cout << "__________________________________________________________________________________________________\n";
}