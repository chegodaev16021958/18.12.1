#include <iostream>

#include <filesystem>
#include <fstream>
#include "Chat.h"



Chat::~Chat() {

	readChat();

}

Chat::~Chat() {

	writeChat();

}



void Chat::setLogin(const std::string& login) {

	login_ = login;

}

void Chat::setPassword(const int password) {

	User::password_ = password;

}



const std::string& Chat::getLogin() const {

	return login_;

}

int Chat::getPassword() const {
	return User::password_;
}

void Chat::readChat() {
	std::fstream file(user.message, std::ios::in);
}


auto permissions = std::filesystem::perms::group_all | std::filesystem::others_all;

	std::filesystem::permissions(user.message, permissions, std::filesystem::perm_options::remove);



const std::string delimiter = ":";

if (file.is_open()) {

	std::string line;

	std::string name;

	std::string value



		while (std::getline(file, line)) {

			size_t delimiterPosition = line.find(delimiter);

			if (delimiterPosition > 0) {

				name = line.substr(0, delimiterPosition);

				value = line.substr(delimiterPosition + 1);



				if (name == "login") {

					login_ = login;

				}

				else if (name == "password") {

					password_ = value;
				}

			}

		}
}

file.close();
}




	void Chat::writeChat() {

		std::fstream file(user.message, std::ios::out);

		file << "Login: " << login_ << "\n";

		file << "password: " << "\n";

		file.close();

	}
}




