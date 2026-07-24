#include <iostream>
#include <string>

int main() {
  // Flush after every std::cout / std:cerr
  std::cout << std::unitbuf;
  std::cerr << std::unitbuf;
while(true)
{
  // TODO: Uncomment the code below to pass the first stage
  std::cout << "$ ";
//what i need to do is take input from the user
// i want to add stage 5 a feature that would help me to echo the arguments given in propmpt
  std::string command;

  if(!std::getline(std::cin,command))
  {
break;
  }
  if(command.empty())
  {
    continue;
  }
  if(command=="exit"||command=="EXIT"||command=="Exit")
  {
break;
  }
  std::size_t start=0;
  std::size_t end=command.find(" ",start);
  std::string word=command.substr(start,end);
  start=end+1;

  if(word=="echo")
  {
      std::string argument=command.substr(start);
      std::cout<<argument<<'\n';
      continue;
      }
    
  
  std::cout << command <<": command not found"<< std:: endl;
}

 }

