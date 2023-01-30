#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void): AForm(145, 137, "Shrubbery")
{
	std::cout << "Default Constructor ShrubberyCreationForm" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& shrubberyCreationForm)
{
	std::cout << "Copy Constructor ShrubberyCreationForm" << std::endl;
	(*this) = shrubberyCreationForm;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):AForm(145, 137, target + " Form"), _target(target)
{
	std::cout << "Arg Constructor ShrubberyCreationForm" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "Destructor ShrubberyCreationForm" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& shrubberyCreationForm)
{
	std::cout << "Copy Operator ShrubberyCreationForm" << std::endl;
	if (this != &shrubberyCreationForm)
		this->_target = shrubberyCreationForm._target;
	return ((*this));
}

void ShrubberyCreationForm::execute(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() > this->getGradeExec())
		throw AForm::GradeTooLowException();
	else if (this->getIsSigned() == false)
		throw AForm::NotSigned();
	else
	{
		std::ofstream file_out;
	
		file_out.open((this->_target + "_shrubbery").c_str(), std::ios::out | std::ios::trunc);
		file_out << "\033[1;32m";
		file_out << "          *" << std::endl;
		file_out << "         *|*" << std::endl;
		file_out << "        *\\|/*" << std::endl;
		file_out << "      *\\**|**/*" << std::endl;
		file_out << "    *\\***\\|/***/*" << std::endl;
		file_out << "     **\\**|**/**" << std::endl;
		file_out << "    *\\***\\|/***/*" << std::endl;
		file_out << "  *\\***\\**|**/***/*" << std::endl;
		file_out << "    *\\***\\|/***/*" << std::endl;
		file_out << "  *****\\**|**/*****" << std::endl;
		file_out << "*********\\|/*********" << std::endl;
		file_out << "         _|_" << std::endl;
		file_out << "\033[0m";
	
		file_out.close();
	}
}
