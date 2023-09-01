#pragma once

#include <string>



class User

{

	const std::string login_;

	std::string password_;

	std::string name_;



public:

	User(const std::string& login, const std::string& password, const std::string& name)

		: login_(login), password_(password), name_(name) {}



};
