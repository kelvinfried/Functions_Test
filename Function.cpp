//Function testing
#include <iostream>

//Program Functions
	//Used for cooking food items, you pass in data to the attributes
		//The arguements define what food is cooking and how long and at what temp it cooks at
		//Nothing returned
void cook_food( std::string food_name, int cooking_temperature, int cooking_time )
{
	std::cout<< "We will be cooking the food " << food_name << " item." << std::endl;
	std::cout<< "Add the " << food_name << " to the pan, at " << cooking_temperature << " 'C" << std::endl;
	std::cout<< "The " << food_name << " must cook for " << cooking_time << std::endl;
}

	//Prepair dish function
void prepair_food( )
{
	std::cout<< "To prepair your food, you need to" << std::endl;
	std::cout<< "You need a frying pan, oil and salt. << std::endl << "Now oil up the pan" << std::endl;
}
	//Updating to include attributes t o fit with the food being cooked at the time
void prepair_food( std::string food_name )
{
	std::cout<< "To prepair your food, you need to" << std::endl;
	std::cout<< "You need a frying pan, oil and salt." << std::endl << "Now oil up the pan" << std::endl;
}

	//Finish food
void finish_food( )
{
	std::cout<< "Now take the food out and serve it on a plate" << std::endl;
}

	//Now to update the cook food function to include the prepair and finish food functions
void cook_food( std::string food_name, int cooking_temperature, int cooking_time )
{
	
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