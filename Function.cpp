//Function testing
#include <iostream>
#include <math.h>	//For step 15

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


void spawn_player( std::string name, float x_coorodinate, float y_coorodinate, float z_coordinate )	//Used to spawn the player in a rudamentory way
{
	std::cout<< "The player's name is " << name << ", you have spawned at" ;
	std::cout<< "( " << x_coorodinate << ", " << y_coorodinate << ", " << z_coordinate << " )" << std::endl;
}

void spawn_all_players()	//To spawn 5 players with random vairables
{
	//player 1 - 5
	spawn_player( "Name 1", 0.0f, 1.2f, 0.2f );
	spawn_player( "Name 2", 2.0f, 0.0f, 1.0f );
	spawn_player( "Name 3", 0.0f, 0.5f, 3.0f );
	spawn_player( "Name 4", 5.0f, 30.0f, 0.0f );
	spawn_player( "Name 5", 0.1f, 0.0f, 7890.0f );
}

void start_game()	//Spawns all the players in another function with an additional output
{
	std::cout<< "Get ready" << std::endl;
	spawn_all_players();
}

bool higher_than_ten( int number_to_evalueate )
{
	if( number_to_evalueate > 10 )	//If number is more than 10
	{
		return true;
	}
	
	else	//If the number is less than 10
	{
		return false;
	}
}

bool alphabetical( char character_one, char character_two )	//Aim Should return true if letters are passed in alphabetical order.
{
	if( int( character_one ) < int ( character_two ) )	//If the second value inputted has more ascii value than the first.
	{
		return true;	//Then do this
	}

	else
	{
		return false;
	}
}

float deg_to_rad( float degree_value )
{
	float radian_conversion = 0.01745;
	return float( degree_value * radian_conversion ); 
}

//Step 10
class player	//Step 9 player class
{
	public:
		float x;
		float y;
		float rotation;
		float speed;
		
		player()	//Constructor settign default values.
		{
			x = 0.0f;
			y = 0.0f;
			rotation = 0.0f;
			speed = 0.0f;
		}
};

class game
{
	public:
		player player[4];
		
	//Constructor over writes player values: x, y, speed values and rotation
		//X and y from -10.0 to 10.0
		//Speed from range 0 to 1.0
		//rotation from 0 to 360.
	game()
	{
		//Player 0 - 3 will be setup here.
			//Player 0
		player[ 0 ].x = -10.0f;
		player[ 0 ].y = -10.0f;
		player[ 0 ].rotation = 0.0f;
		player[ 0 ].speed = 0.0f;
		
			//Player 1
		player[ 1 ].x = -5.0f;
		player[ 1 ].y = -5.0f;
		player[ 1 ].rotation = 90.0f;
		player[ 1 ].speed = 1.0f;
		
			//Player 2
		player[ 2 ].x = 0.0f;
		player[ 2 ].y = 0.0f;
		player[ 2 ].rotation = 180.0f;
		player[ 2 ].speed = -2.0f;
		
			//Player 3
		player[ 3 ].x = 5.0f;
		player[ 3 ].y = 5.0f;
		player[ 3 ].rotation = 270.0f;
		player[ 3 ].speed = 1.0f;
	}
};

//Step 11 
void display_game_state( game game_state )	//Defining the needed function
{
	/*
	//Player 0
	std::cout<< "Player 0 has: " << game_state.player[ 0 ].x << ", " << game_state.player[ 0 ].y << ", ";
	std::cout<< " with a rotation of " << game_state.player[ 0 ].rotation << " and a speed of " << game_state.player[ 0 ].speed << std::endl;
	
	//Player 1
	std::cout<< "Player 1 has: " << game_state.player[ 1 ].x << ", " << game_state.player[ 1 ].y << ", ";
	std::cout<< " with a rotation of " << game_state.player[ 1 ].rotation << " and a speed of " << game_state.player[ 1 ].speed << std::endl;
	
	//Player 2
	std::cout<< "Player 2 has: " << game_state.player[ 2 ].x << ", " << game_state.player[ 2 ].y << ", ";
	std::cout<< " with a rotation of " << game_state.player[ 2 ].rotation << " and a speed of " << game_state.player[ 2 ].speed << std::endl;
	
	//Player 3
	std::cout<< "Player 3 has: " << game_state.player[ 3 ].x << ", " << game_state.player[ 3 ].y << ", ";
	std::cout<< " with a rotation of " << game_state.player[ 3 ].rotation << " and a speed of " << game_state.player[ 3 ].speed << std::endl;*/	//Now to do this with iteration
	
	for( int itr = 0; itr < 4; itr ++ )
	{
		std::cout<< "Player " << itr << " has: " << game_state.player[ itr ].x << ", " << game_state.player[ itr ].y << ", ";
		std::cout<< " with a rotation of " << game_state.player[ itr ].rotation << " and a speed of " << game_state.player[ itr ].speed << std::endl;
	}
}

//Step 12
void reset_health( int &n )
{
	n = 100;	//Removed redundant declairation
}

//Step 13
class color
{
	public:
		int red;
		int green;
		int blue;
		int alpha;
		
		color()
		{
			red = 0;
			green = 0;
			blue = 0;
			alpha = 0;
		}
};

void set_to_grey( int n)	//N is one color parameter passed in from the class.
{
	int grey = 128;
	
	n = grey;
}

void set_to_grey_ref( int &n )	//Passed by referance here, will actually change the values
{
	int grey = 128;
	
	n = grey;
}

void output_colour( color color_passed )	//East of outputting colours
{
	std::cout<< "The red value is " << color_passed.red << std::endl;
	std::cout<< "The green value is " << color_passed.green << std::endl;
	std::cout<< "The blue value is " << color_passed.blue << std::endl;
}

//Step 15
void applying_speed_x( float &position, float rotation, float speed )
{
	//Calls to convert vaue to radiants
	float radiant_value = deg_to_rad( rotation );
	
	position += speed * sin( radiant_value );
}

void applying_speed_y( float &position, float rotation, float speed )
{
	float radiant_value = deg_to_rad( rotation );
	
	position += speed * cos( radiant_value );
}

void out_of_range_adjust( float &x_position, float &y_position )
{
	const float OUT_OF_RANGE_POSITIVE = 10.0f;
	const float OUT_OF_RANGE_NEGATIVE = -10.0f;
	const float REST_VALUE = 0.0f;
	
	//X Value
	if( ( x_position > OUT_OF_RANGE_POSITIVE ) || ( x_position < OUT_OF_RANGE_NEGATIVE ) )
	{
		x_position = 0.0f;
	}
	
	else
	{
		;	//Nothing pass
	}
	
	//Y Value
	if( ( y_position > OUT_OF_RANGE_POSITIVE ) || ( y_position < OUT_OF_RANGE_NEGATIVE ) )
	{
		y_position = 0.0f;
	}
	
	else
	{
		;	//Nothing pass
	}
}


int main()
{
	//impliment 5 functions based on recipies 
		//Testing phase
	//cook_food( "Steak", 240, 5 );
	
	/* //Cook Dinner Function
	std::cout<< "" << std::endl;
	//std::cout<< "Cook Dinner functions" << std::endl;
	//cook_dinner();
	
		//Cook dinner will be used to call these functions
	std::cout<< "Cook Steak" << std::endl;
	std::cout<< "Cook Omelette" << std::endl;
	std::cout<< "Cook Mushrooms" << std::endl;
	std::cout<< "Cook Peas" << std::endl; */
	
	/* //Step 2	
		//Write a function called firebullet.
	//fire_until_empty();	//Step 3- From here */
	
	/* //Step 4 
		//Write a function called sayhello() 
	//say_hello();	//Testing that the function works
	//say_hello( 1 );	//Now needs to be ammeneded so the parameter is passed into the function
	//say_hello( 2, 'K' );	//Now needs to be ammeneded so the parameter is passed into the function */
	
	/* //Step 5
	//spawn_player( "Default Name", 0.0f, 0.0f, 0.0f );
	//spawn_all_players();	//Now to test the output of the spawn all players function
	//start_game(); */
	
	/* //Step 6 
		//Testing function 
	//higher_than_ten( 10 );	//Should be less than 10
		//Outputting the value of the boolean value to see if it was true ( 1 ) or false ( 0 )	//Amded this
	//std::cout<< "The value returned is " << higher_than_ten( 10 ) << std::endl;	//As expected returns false as it is not more than 10, but equal
	
	//std::cout<< "The value returned is " << higher_than_ten( 111 ) << std::endl;	//Should be more than 10 */
	
	/* //Step 7 
		//Testing function 
	//alphabetical( 'a', 'b' );
	
	//std::cout<< "If a and b are alphabetical " << alphabetical( 'a', 'b' ) << std::endl << "it will return 1." << std::endl; //Had to ammend the values for boolean values returned as I has mistaken that 0 was true and 1 was true.// ammended
	//std::cout<< "If v and a are alphabetical " << alphabetical( 'v', 'a' ) << std::endl << "it will return 1." << std::endl; 
		//Whne equal
	//std::cout<< "If a and a are alphabetical " << alphabetical( 'a', 'a' ) << std::endl << "it will return 1." << std::endl; //As expected returns false */
	
	/* //step 8 
	//std::cout<< "The first value is 0' and it's radiant is " << deg_to_rad( 0.0f ) << std::endl;	//Working fine
	//std::cout<< "The first value is 30' and it's radiant is " << deg_to_rad( 30.0f ) << std::endl;	//working fine
	//std::cout<< "The first value is 120' and it's radiant is " << deg_to_rad( 120.0f ) << std::endl;	//working fine */
	
	/* //Step 9 
		//Writes a class for a player	-Float for x:y, rotation and speed.
			//Set up a constructor too
		//Create a game class with 4 player objects */
		
	/* //Step 10 
		//Init a game object and call it game 1.
			//Attempt to access the values
	//game game1;
		//Attempting to access game1 attributes;
	std::cout<< "Player 0's x poistion is " << game1.player[ 0 ].x << std::endl;		//Output section
	std::cout<< "Player 1's speed poistion is " << game1.player[ 1 ].speed << std::endl;
	std::cout<< "Player 2's rotation poistion is " << game1.player[ 2 ].rotation << std::endl;
	std::cout<< "Player 3's y poistion is " << game1.player[ 3 ].y << std::endl;	*/
	
	/* //Step 11 
		//Function display Game State and pass in the game class as an attribute.
			//Function will not return anything
			//It will print out each of the players vairables 
	//display_game_state( game1 ); */
	
	/* //Step 12 
		//Function called reset health
			//Does not return anything, accepts a int called n. Then set the value to be 100.
			//In main, make a health vairable set to 0.
				//Pass reset health into here as normal.
				//Then pass it in by referance using an & sign. 
	int health = 0; 
	
	//std::cout<< "The health value is currently " << health << std::endl;
	//reset_health( health );
	
	//std::cout<< "After the health function " << health << std::endl;
	
	//reset_health( health );	//You assign the pointer in the function declairation, not when passing in an arguement
	//std::cout<< "After passing the health function by referance " << health <<std::endl;	//Not needed	*/
	
	/* //Step 13
		//Class called colour, cotains ints for: Red, green, blue, alpha
			//Const sets 3 values to 0, others to 255.
		//Create an object 1, then check the values.
			//New function called "set_to_grey". Void functuon, and accepts a single parameters called 'n'.
				//Set RGB values to 128.
				//Pass n by referance
				//Then try passing by value.
	//Class init
	color color_class;
	
	//Output
	std::cout<< "First set, before." << std::endl;
	output_colour( color_class );
	//Testing without referance.
		//Red
		set_to_grey( color_class.red );
		//Green
		set_to_grey( color_class.blue );
		//Blue
		set_to_grey( color_class.green );
	//Output
	std::cout<< "" << std::endl << "After first pass." <<std::endl;
	output_colour( color_class );	

	std::cout<< "" << std::endl;

	color color_class_1;
	//Testing with referance
	std::cout<< "Second set, before." << std::endl;
	output_colour( color_class_1 );
	//Testing without referance.
		//Red
		set_to_grey_ref( color_class_1.red );
		//Green
		set_to_grey_ref( color_class_1.blue );
		//Blue
		set_to_grey_ref( color_class_1.green );
	//Output
	std::cout<< "" << std::endl << "After second pass." <<std::endl;
	output_colour( color_class_1 );	//Working as expected	*/
	
	/* //Step 15
		//Function that takes the game data and updates the position of the 4 players based on their current speed and rotation
			//To get the movements to be accurate I will have to use pythagoras therom to find out exactly how much the player moves based on their angle and speed
			//Use display game state to show a before and after the speed was applied to the base x and y values.
			//Wrte it so it updates until exited, ie player presses E for escape */
	game game1;
	char player_input = 'e';
	
	//Used for looping until the user defines it
	
	/*display_game_state( game1 );
	std::cout << "" << std::endl;
	
	for( int itr = 0; itr < 4; itr ++ )	//Ammended this to 4
	{
		std::cout<< itr << std::endl;
		applying_speed_x( game1.player[ itr ].x, game1.player[ itr ].rotation, game1.player[ itr ].speed );
		applying_speed_y( game1.player[ itr ].y, game1.player[ itr ].rotation, game1.player[ itr ].speed );
	}
	
	std::cout<< "" << std::endl;
	display_game_state( game1 );
	std::cout << "" << std::endl;*/	//Now that I know it works time to impliment the other steps
	
	//Main Loop
	while( player_input != 'e' )
	{
		//Adjustment code first
		for( int itr = 0; itr < 4; itr ++ )
		{
			out_of_range_adjust( game1.player[ itr ].x, game1.player[ itr ].y );
		}
	}
	
	return 0;
}