#include <iostream>
#include <cmath>

int main () {
    int a;
    int b;
    int c;
    int x1;
    int x2; 
    int Discriminant;
    int nummer;



    // ax^2+bx+c=0
   
    std::cin>>a>>b>>c;
    Discriminant= pow(b, 2)-4*a*c;
    
    if (Discriminant>0) {
        nummer= -b+sqrt(Discriminant);
        x1= nummer/(2*a);
        nummer= -b-sqrt(Discriminant);
        x2= nummer/(2*a);
        std::cout<<"D="<<Discriminant<<std::endl;
        std::cout<<"X1="<<x1<<std::endl;
        std::cout<<"X2="<<x2<<std::endl;

    }
    if(Discriminant<0){
        std::cout<<"D="<<Discriminant<<std::endl;
        
        std::cout<<"g.o."<<std::endl;

        }
    if (Discriminant==0){
            x1=-b/(2*a);
            std::cout<<"D="<<Discriminant<<std::endl;
            std::cout<<"X="<<x1<<std::endl;
        }
        
    
    
        // examples D>0: 1 -5 6------- D<0 1 2 5 ------- D=0 1 -4 4

         
    return 0;
}
