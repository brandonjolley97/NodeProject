/*
 * NodeController.h
 *
 *  Created on: Jan 27, 2016
 *      Author: bjol7457
 */

#ifndef NODECONTROLLER_NODECONTROLLER_H_
#define NODECONTROLLER_NODECONTROLLER_H_

#include <iostream>
#include <string>
#include "../NodeModel/Node.h"
#include "../NodeModel/Node.cpp"
#include "../NodeModel/ArrayNode.h"
#include "../NodeModel/ArrayNode.cpp"

using namespace std;

class NodeController
{
private:
	Node<int> intNode;
	ArrayNode<string> stringArrayNode;
public:
	NodeController();
	virtual ~NodeController();
	void start();
};

#endif /* NODECONTROLLER_NODECONTROLLER_H_ */
