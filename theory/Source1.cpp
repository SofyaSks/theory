#include <iostream>
#include <string>
using namespace std;

class Animal {

public:
	int getAge() {
		return age;
	}

	void setAge(int age_x) {
		age = age_x;
	}

	std::string getName() {
		return name;
	}

	void setName(std::string name_x) {
		color = name_x;
	}

	std::string getColor() {
		return color;
	}

	void setColor(std::string color_x) {
		color = color_x;
	}

	bool getFur() {
		return fur;
	}

	void setFur(bool fur) {
		this->fur = fur;
	}

	bool getPredator() {
		return predator;
	}

	void setPredator(bool predator) {
		this->predator = predator;
	}

private:
	bool predator;
	bool fur;
	int age;
	std::string color;
	std::string name;
};

class Dog : public Animal {
public:
	std::string getBreed() {
		return breed;
	}

	void setBreed(std::string breed_x) {
		breed = breed_x;
	}

	std::string getSize() {
		return size;
	}

	void setSize(std::string size_x) {
		size = size_x;
	}

	std::string getTeeth() {
		return teeth;
	}

	void setSize(std::string teeth_x) {
		teeth = teeth_x;
	}

	int getStrength() {
		return strength;
	}

	void setStrength(int strength_x) {
		strength = strength_x;
	}

private:
	std::string breed;
	std::string size;
	std::string teeth;
	int strength;
};

class Puppy : public Dog {
public:
	double getWeight() {
		return weight;
	}

	void setWeight(int weight_x) {
		weight = weight_x;
	}

	int getHp() {
		return hp;
	}

	void setHp(int hp_x) {
		hp = hp_x;
	}

	void beenBeaten(Dog& First) {
		cout << "Щенок"<< First.name ;
	}

private:
	double weight;                                               
	int hp;
	bool bleeding;
	
};

int main() {

	Animal A;
	Dog B;
	Puppy C;
	C.
	
	


	return 0;
}