//Function testing
#include <iostream>

//Program Functions
void cook_food( std::string food_name, int cooking_temperature, int cooking_time )
{
	std::cout<< "We will be cooking the food " << food_name << " item." << std::endl;
	std::cout<< "Add the " << food_name << " to the pan, at " << cooking_temperature << " 'C" << std::endl;
	std::cout<< "The " << food_name << " must cook for " << cooking_time << std::endl;
}

void cook_dinner()
{
	std::cout<< "" << std::endl;
	std::cout<< "Cooking food function" << std::endl;
}

int main()
{
	//impliment 5 functions based on recipies 
		//Testing phase
	cook_food( "Steak", 240, 5 );
	
	//Cook Dinner Function
	std::cout<< "Cook Dinner functions" << std::endl;
	
		//Cook dinner will be used to call these functions
	std::cout<< "Cook Steak" << std::endl;
	std::cout<< "Cook Omelette" << std::endl;
	std::cout<< "Cook Mushrooms" << std::endl;
	std::cout<< "Cook Peas" << std::endl;
	
	return 0;
}