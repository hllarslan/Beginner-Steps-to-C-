

    #include <iostream>
    #include <sstream>
    #include <vector>
    #include <string>
    
    std::vector<int> parseInts(std::string str){

      std::vector<int> vect;
      std::stringstream ss(str);
      int i;
      
      while(ss >> i){
         vect.push_back(i);
         
         if(ss.peek() == ',')
            ss.ignore();
      }
      
      return vect;
    }
    
    
    int main(){
    
      std::string myString;
      std::cin >>myString;
      
      std::vector<int> myVec = parseInts(myString);
      for(std::vector<int>::iterator it=myVec.begin(); it != myVec.end(); ++it)
         std::cout <<*it <<std::endl;
    }
