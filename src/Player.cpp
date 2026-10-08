#include <string>
#include <iostream>
using namespace std;

class Player {
    private: 
        string name {};
        int health {};
        int attack {};
    public: 
       void displayStats();
       Player();
}