#include <iostream>

#include <string>




class Fruit {

public:

virtual std::string getTaste() {

return "Generic fruit taste";

}

};




class Apple : public Fruit {

public:

std::string getTaste() override {

return "Sweet";

}

};




class Banana : public Fruit {

public:

std::string getTaste() override {

return "Creamy";

}

};




class Orange : public Fruit {

public:

std::string getTaste() override {

return "Tangy";

}

};




class Grape : public Fruit {

public:

std::string getTaste() override {

return "Juicy";

}

};




class Pineapple : public Fruit {

public:

std::string getTaste() override {

return "Sweet and Sour";

}

};




int main() {

int choice;

Fruit* fruit;




//std::cout << "Choose a fruit (1 = Apple, 2 = Banana, 3 = Orange, 4 = Grape, 5 = Pineapple): ";

std::cin >> choice;




switch (choice) {

case 1:

fruit = new Apple();

break;

case 2:

fruit = new Banana();

break;

case 3:

fruit = new Orange();

break;

case 4:

fruit = new Grape();

break;

case 5:

fruit = new Pineapple();

break;

default:

std::cout << "Invalid choice, defaulting to generic fruit." << std::endl;

fruit = new Fruit();

break;

}




std::cout << "The taste of the fruit is: " << fruit->getTaste() << std::endl;




delete fruit;




return 0;

} 
