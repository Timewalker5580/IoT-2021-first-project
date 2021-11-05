#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;

class Ship {
    public:
        int number;
        string text;
        
        
        Ship(int x, string y, int z, int a, string b, string c, string d) {
        waterCapacity = x;
        name = y;
        numOfContainers = z;
        number = a;
        text = b;
        man = c;
        woman = d;
    }
    ~Ship() {
        cout << "the destructure was declared";
    }
    int getWaterCapacity() {
        return waterCapacity;
    }
    string getName() {
        return name;
    }
    int getNumOfContainers() {
        return numOfContainers;
    }
    string getMan() {
        return man;
    }
    string getWoman() {
        return woman;
    }
    
    private:
    int waterCapacity;
    string name;
    int numOfContainers;
    
    
    protected:
    string man;
    string woman;
};

int main() {
    Ship water(100, "Linkor", 23, 16, "Something text", "Alex", "Anya");
    cout << "Water capacity is: " << water.getWaterCapacity() << ";" << endl;
    cout << "Name of ship is: " << water.getName() << ";" << endl;
    cout << "Number of containers: " << water.getNumOfContainers() << ";" << endl;
    cout << "Number of public specifier: " << water.number << ";" << endl;
    cout << "Text of public specifier: " << water.text << ";" << endl;
    cout << "Name of man: " << water.getMan() << ";" << endl;
    cout << "Name of woman: " << water.getWoman() << ";" << endl;
    return 0;
}