#include <best_car.h>
#include <iostream>

int main(int argc, char const *argv[])
{
	/* code */
	//create objects with initialization data
	best_car b(data);

	//Accept input from user: luxury based cars or budget-value cars
	std::cout<<"Choose the type of car you are looking for:"
	std::cout<<"\n1. Best Value cars \n2. Luxury model cars\nChoose 1 or 2 ?"
	std::cin>>model;

	//Initialize object with engineer's design cost matrix
	b.init(model);
	
	//Get most valuable attribute from consumer
	std::cout<<"\nWhat is your biggest priority?\n1. Safety\n2. Fuel Efficiency\n3. Cost\nChoose(1/2/3) ?"
	std::cin>>best_attrib;

	//Start thread for decision tree search
	// std::thread th_tree((void *)dt.init,best_attrib);
	// th_tree.join();

	//Generate consumer evaluation matrix and store it in object
	b.consumer_matrix(best_attrib);

	//Calculate total cost matrix
	b.evaluate_costs();

	//Print the details of the 3 best valued car where the parameter represents the rank of matching
	b.show_best_car(1);
	b.show_best_car(2);
	b.show_best_car(3);

	return 0;
}