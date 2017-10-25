


     
     /* ws manipulator extracts whitespace characters until 
        non-whitespace character is encountered. It makes 
        concatenating 2 strings easier in my example.*/
     
        
        
        
     #include <iostream>
     #include <iomanip>
     #include <string>
     #include <sstream>


     int main() {
           
           int i=4;
           double d=4.0;
           std::string s="Hackerrank ";
         
           int integer;
           double dabbil;
           std::string str;

           
           std::cin >> integer >>dabbil;
           getline(std::cin >>std::ws,str);


           std::cout << integer+i <<std::endl;
           std::cout <<std::fixed <<std::setprecision(1) <<dabbil+d  <<std::endl;
           std::cout <<s+str <<std::endl;
     }
           
