#include<iostream>
using namespace std;
class Engine{
	public:
		void start(){
			
		}
};

class Car{
	public:
		Car() : engine(new Engine()) {}
		void startcar(){
			engine->start();
		}
		private:
			Engine* engine;
};
int main(){
	Car car;
	car.startcar();
	return 0;
}
