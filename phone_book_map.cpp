
    /*In this practice my aim was to use map for creating phone
    book. For this purpose, it was required to enter name of 
    book and then number to make them pair. Later on, my task
    was inquiring name whether it is in book or not. The 
    important case is that program processes until the new query 
    is not entered.*/
 
  
   
    #include <iostream>
    #include <map>
    #include <string>
    #include <vector>
    
    
    int main() {
    
       int p_number;
       std::string f_name;
       
       std::map<std::string,int> phone_book;
       
       int n;
       std::cin >>n;
       

       
       for(int i=0; i<n; ++i){
          std::cin >>f_name >>p_number ;
          phone_book.insert(make_pair(f_name,p_number));
       }
       
       std::map<std::string,int>::iterator p_it;
       std::string isFound;
       while(std::cin >>isFound){

             if(phone_book.find(isFound) != phone_book.end())
               std::cout <<isFound <<"=" <<phone_book[isFound] <<std::endl;
               
             else
               std::cout <<"Not found" <<std::endl;
             
       }
          
       return 0;
       
    }
       
     
    
