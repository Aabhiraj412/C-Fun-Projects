#include<iostream>
#include<cmath>
// using namespace std;

class main_program{
    public:
    int x = 10;
    private:
    int y = 2*x;
};

int main(){
    main_program obj;
    std::cout<<obj.x<<"\n";
    // std::cout<<obj.y;
}