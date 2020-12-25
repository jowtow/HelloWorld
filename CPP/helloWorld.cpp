#include <iostream>
using namespace std;

class Greeter{
    public: 
        void Greet(string greetee){
            cout << "Hello " << greetee << endl;
        }
};

int main(){
    Greeter greeter;
    greeter.Greet("World");
    return 0;
}