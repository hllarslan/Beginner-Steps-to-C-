   /*In this code I am asked to create Class Student which has vector for 
     5 grades of each student and then public methods to calculate sum of 
     grades of students. I practiced how to use array of objects in this code.*/
     


  
   
     #include <iostream>
     #include <vector>
    
     
     
     
     class Student {
       std::vector<int> scores;
     public:
       void inp();
       int calculateTotalScore();
     };
     
     void Student :: inp() {
       
        for(int i=0; i<5; ++i){
           int c;
           std::cin >>c;
           scores.push_back(c);
        }
     }
     
     int Student :: calculateTotalScore() {
        int sum=0;
        for(int i=0; i<scores.size(); ++i)
           sum += scores[i];
           
        return sum;
     }
     
     
     
     int main() {
       int n,count=0;
       std::cin >>n;
       
       Student s1[n];
       for(int i=0; i<n; ++i){
        
       s1[i].inp();
       s1[i].calculateTotalScore();
       }
       for(int i=1; i<n; ++i){
          if(s1[i].calculateTotalScore() > s1[0].calculateTotalScore())
            ++count;
       }
       std::cout <<count <<std::endl;
     }
