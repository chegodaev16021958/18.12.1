#include "Chat.h"

#include <iostream>



int main() {



	Chat chat;

	std::cout << "login: " << user.getLogin() << std::endl;

	std::cout << "password: " << user.getPassword() << std::endl;



	const std::string newLogin = "Eugen";

	user.setLogin(newLogin);

	const int newPassword = 2112;

	user.setPassword(newPassword);



	std::cout << "Current user: \n";

	std::cout << "Login: " << user.getLogin() << std::endl;

	std::cout << "Password" << user.getPassword() << std::endl;



}



