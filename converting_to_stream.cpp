
 /* Previously, I experienced fundamentals of string stream and now
    I have some string and integer variables and need to show them
    in string stream. Function to_string is assigned to do that 
    purpose. */

    #include <iostream>
    #include <vector>
    #include <string>
    #include <sstream>
    
    
    class student {
       int age;
       std::string f_name;
       std::string l_name;
       int stand;
    public:
       void set_age(int a){ age=a;}
       void set_fname(std::string fn){f_name=fn;}
       void set_lname(std::string ln){l_name=ln;}
       void set_stand(int b) {stand=b;}
       int get_age() {return age;}
       std::string get_fname() {return f_name;}
       std::string get_lname() {return l_name;}
       int get_stand() {return stand; }
       std::string to_string();
    };
    
    
    std::string student ::  to_string() {
       
       std::stringstream s1;
       
       s1 << age <<"," <<f_name <<"," <<l_name <<"," <<stand;
       
       std::string sr = s1.str();
       
       return sr;
    }
    
    
    int main()
    {
       int ag,standard;
       std::string fi_name,la_name;
       
       std::cin >>ag  >>fi_name >>la_name >>standard;
       
       student s1;
       s1.set_age(ag);
       s1.set_fname(fi_name);
       s1.set_lname(la_name);
       s1.set_stand(standard);
       
       std::cout <<s1.get_age() <<std::endl;
       std::cout <<s1.get_lname() <<",  " <<s1.get_fname() <<std::endl;
       std::cout <<s1.get_stand() <<std::endl <<std::endl ;
       std::cout <<s1.to_string() <<std::endl;
       return 0;
    }
       
       
       
