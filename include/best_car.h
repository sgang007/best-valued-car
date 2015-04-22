#ifndef _BEST_CAR_H
#define _BEST_CAR_H

#include <iostream>
#include <decision_tree.h>
#include <boost>
#include <string>
#include <vector>
#include <algorithm>

class best_car
{
private:
	std::vector<std::vector<int>> mat_engineer; 
	std::vector<std::vector<int>> mat_comsumer; 
	std::vector<std::vector<int>> mat_total; 
	tree_search tree;
	void init();//generate mat_engineer
	void consumer_matrix(int);//calculate mat_consumer
	void evaluate_costs();//total cost evaluated
	void show_best_car(int);//rank of car based on match passed as parameter
	//searches tree based on total cost of each attribute passed in an array
	void search(std::vector<int>);

public:
	best_car(std::string,std::string);
	~best_car();

	
};

#endif