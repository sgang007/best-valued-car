#ifndef _BEST_CAR_H
#define _BEST_CAR_H

#include <iostream>
#include <decision_tree.h>
#include <boost>
#include <template>
#include <algorithm>

class best_car
{
public:
	best_car(tree_file,parameter_file);
	~best_car();
private:
	void init();
	
};

#endif