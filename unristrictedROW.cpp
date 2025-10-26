#include <iostream>
#include <string>
#include <map>


int main () {
    std::string input;  
    std::string result;
    std::cout<<"Boot succesful"<<std::endl;
    
    std::map<char, std::string> letters;//creaating a MAP



    std::getline(std::cin, input);//inputing a row
    for(char ch : input){
       if(std::isalpha(ch)){
         letters[ch]+=ch;
      }
    } for(const auto& pair : letters){
        result+=pair.second;
    }
   
   std::cout<<result<<std::endl;
   std::cout<<"done";
   

        




 return 0;




    
}