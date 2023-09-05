#pragma once
#include <string>

constexpr auto UserFile = "~/18.12.1/user_message";

class User 
{
const std::string login_;
std::string password_;
std::string name_;

public:
User(const std::string& login, const std::string& password, const std::string& name)
: login_(login), password_(password), name_(name) {}


};

