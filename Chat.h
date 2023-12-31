#pragma once

#include <string>
#include "Message.h"

class Chat final {

public:
Chat();
~Chat();

void setLogin(const std::string& login);
void setPassword(const int password);

const std::string& getLogin() const;
int getPassword() const;

private:
std::string login_;
int password_ { 0 };

void readChat();
void writeChat() const;

};
