//Function testing
#include <iostream>

//Program Functions
	//Used for cooking food items, you pass in data to the attributes
		//The arguements define what food is cooking and how long and at what temp it cooks at
		//Nothing returned
		//Just a note any redefinitions are commented out
/*void cook_food( std::string food_name, int cooking_temperature, int cooking_time )
{
	std::cout<< "We will be cooking the food " << food_name << " item." << std::endl;
	std::cout<< "Add the " << food_name << " to the pan, at " << cooking_temperature << " 'C" << std::endl;
	std::cout<< "The " << food_name << " must cook for " << cooking_time << std::endl;
}*/


	//Prepair dish function
/*void prepair_food( )
{
	std::cout<< "To prepair your food, you need to" << std::endl;
	std::cout<< "You need a frying pan, oil and salt." << std::endl << "Now oil up the pan" << std::endl;
}*/

	//Updating to include attributes t o fit with the food being cooked at the time
void prepair_food( std::string food_name )
{
	std::cout<< "To prepair your " << food_name << " you need to" << std::endl;
	std::cout<< "You need a frying pan, oil and salt." << std::endl << "Now oil up the pan" << std::endl;
}


	//Finish food
/*void finish_food( std::string food_name )
{
	std::cout<< "Now take the food out and serve it on a plate" << std::endl;
}*/

	//Updates for the use of attributes
void finish_food( std::string food_name )
{
	std::cout<< "Now take the " << food_name << " out and serve it on a plate" << std::endl;
}


	//Now to update the cook food function to include the prepair and finish food functions
void cook_food( std::string food_name, int cooking_temperature, int cooking_time )
{
	prepair_food( food_name );
	std::cout<< "" << std::endl;
	
	std::cout<< "We will be cooking the food " << food_name << " item." << std::endl;
	std::cout<< "Add the " << food_name << " to the pan, at " << cooking_temperature << " 'C" << std::endl;
	std::cout<< "The " << food_name << " must cook for " << cooking_time << std::endl;
	
	std::cout<< "" << std::endl;
	finish_food( food_name );
}

void cook_dinner()
{
	std::cout<< "" << std::endl;
	std::cout<< "Cooking food function" << std::endl;
	
	cook_food( "steak", 240, 5 );
	cook_food( "omelette", 200, 7 );
	cook_food( "mushrooms", 200, 3 );
}

//Step 2 functions
void fire_bullet()
{
	std::cout<< "Bullet fired" << std::endl;	//Outputs that a gun has been fired
}

void reload()
{
	std::cout<< "Take out a new magazine from your backpack" << std::endl;	//When the user reloads the gun
	std::cout<< "Put the new magazine in your gun" << std::endl;
}

void out_of_bullets()
{
	std::cout<< "You can no longer fire" << std::endl;	//Displayed when the user is out of bullets to fire
}

void fire_until_empty()	//Uses the above functions to creat a sudo gun firing cycle
{
	//Initialise an ammo value;
	int ammo_value = 15;
	
	std::cout<< "Enemy spotted!" << std::endl;
	
	for( int x = 0; x < ammo_value; x++ )
	{
		//std::cout<< x;
		fire_bullet();
	}
	
	reload();
}


void say_hello( int num_time, char initial )	//Adding in another attribute  for the function
{
	for( int x = 0; x < num_time; x++ )
	{
		std::cout<< "hello, Mr/Mrs " << initial << std::endl;	//Fixed syntax error on the endl
	}
}

int main()
{
	//impliment 5 functions based on recipies 
		//Testing phase
	//cook_food( "Steak", 240, 5 );
	
	//Cook Dinner Function
	std::cout<< "" << std::endl;
	//std::cout<< "Cook Dinner functions" << std::endl;
	//cook_dinner();
	
		/*//Cook dinner will be used to call these functions
	std::cout<< "Cook Steak" << std::endl;
	std::cout<< "Cook Omelette" << std::endl;
	std::cout<< "Cook Mushrooms" << std::endl;
	std::cout<< "Cook Peas" << std::endl;*/
	
	//Step 2	
		//Write a function called firebullet.
	//fire_until_empty();	//Step 3- From here
	
	//Step 4
		//Write a function called sayhello()
	//say_hello();	//Testing that the function works
	//say_hello( 1 );	//Now needs to be ammeneded so the parameter is passed into the function
	say_hello( 2, 'K' );	//Now needs to be ammeneded so the parameter is passed into the function
	
	
	
	return 0;
}