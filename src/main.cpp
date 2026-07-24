#include <iostream>
#include <string>

int main() {
  // Flush after every std::cout / std:cerr
  std::cout << std::unitbuf;
  std::cerr << std::unitbuf;
while(true)
{
  // TODO: Uncomment the code below to pass the first stage
  std::cout << "$";
//what i need to do is take input from the user

  std::string command;

  if(!std::getline(std::cin,command))
  {
break;
  }

  if(command=="exit"||command=="EXIT"||command=="Exit")
  {
break;
  }
  if(command.empty())
  {
    continue;
  }
  std::cout << command <<": command not found"<< std:: endl;
}

 }

