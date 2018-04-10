//
//  main.cpp
//  wuzzy
//
//  Created by Steven Spagnolo on 10/4/18.
//  Copyright © 2018 Steven Spagnolo. All rights reserved.
//

#include <iostream>
#include <vector>
#include "agent.hpp"

int main(int argc, const char * argv[]) {
	// insert code here...
	std::vector<Agent> agentList;

	agentList.reserve(10);
	Agent agent;
	agentList.push_back(agent);
//	agentList.push_back()
	
	std::vector<Agent>::const_iterator i;
	for (i=agentList.begin();i<agentList.end();++i) {
		std::cout << "Hello, World!\n";
	}
	return 0;
}
