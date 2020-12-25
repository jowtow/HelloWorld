#include <iostream>
using namespace std;

class FizzBuzzCalculator{
    public:
        string Calculate(int num){
            if(num % 3 == 0 && num % 5 == 0){
                return "FizzBuzz";
            }
            else if(num % 3 == 0){
                return "Fizz";
            }
            else if(num % 5 == 0){
                return "Buzz";
            }
            else{
                return "";
            }
        }
};

int main(){
    FizzBuzzCalculator fbCalc;
    cout << fbCalc.Calculate(9) << endl;
    cout << fbCalc.Calculate(25) << endl;
    cout << fbCalc.Calculate(15) << endl;

    return 0;
}