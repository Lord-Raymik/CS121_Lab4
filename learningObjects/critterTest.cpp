#include <string>
#include <iostream>


class Critter {
	private:
		std::string name;
	public:
		Critter() {
			Critter::name = "unnamed";
		} //end no parameter constructor

		Critter(std::string name) {
			Critter::name = name;
		} //end constructor

		void setName(std::string name) {
			Critter::name = name;
		} //end setName

		std::string getName() {
			return name;
		} //end getName

		void sayHi() {
			std::cout << "Hello! My name is " << Critter::name << std::endl;
		} //end sayHi
}; //end Critter class def

class Car {
	private:
		Critter driver;
	public:
		Car() {
			Car::driver = Critter("Guy");
		} //end no parameter constructor

		Car(Critter driver) {
			Car::driver = driver;
		} //end constructor

		void setDriver(Critter driver) {
			Car::driver = driver;
		} //end setDriver
		
		Critter getDriver() {
			return driver;
		} //end getDriver

		std::string getDriverName() {
			return driver.getName();
		} //end getDriverName
}; //end Car class def


int main() {
	/* expected output
	 * Critter: Mike
	 * Hello! My name is Andrew
	 * Critter b: Andrew
	 * Driver: Steve
	 */

	//testing no paramater constructor
	Critter a;
	a.setName("Mike");
	std::cout << "Critter: " << a.getName() << std::endl;
	a.sayHi();

	//testing single parameter constructor
	Critter b = Critter("Andrew");
	std::cout << "Critter: " << b.getName() << std::endl;
} //end main
