#include "Chat.h"
#include <iostream>

int main() {

Chat chat;
std::cout << "login: " << chat.getLogin() << std::endl;
std::cout << "password: " << chat.getPassword() << std::endl;

const std::string newLogin = "Eugen";
chat.setLogin(newLogin);
const int newPassword = 2112;
chat.setPassword(newPassword);

std::cout << "Current user: \n";
std::cout << "Login: " << chat.getLogin() << std::endl;
std::cout << "Password" << chat.getPassword() << std::endl;

}


