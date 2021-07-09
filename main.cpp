#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <iterator>

//  Hello World Class
class HelloWorld
{
 private: 
   std::string text;
   
 public:
   HelloWorld(const std::string text);  // Constructor
   ~HelloWorld();                       // Destructor (unused)
   
   void hello();
};


// Constructor
HelloWorld::HelloWorld(const std::string text)
{
   HelloWorld::text = text; 
}


// Destructor
HelloWorld::~HelloWorld()
{
   ;
}

void HelloWorld::hello()
{
   std::cout << "Name entered in Python Program is " << text << std::endl;
}

int main(int argc, char* argv[]) 
{
   std::cout << "This output is generated in C++" << std::endl;
   std::cout << "Recieved Arguments from Python: " << '\n' ;
   std::cout << "Name of C++ Program being executed: " << argv[0] << '\n' ;
   std::string arg1(argv[1]);

   HelloWorld *helloworld = new HelloWorld(arg1) ;
   helloworld->hello();

   return 0;
}

