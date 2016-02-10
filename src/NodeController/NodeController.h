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

#include "../NodeModel/Node.cpp"
#include "../NodeModel/ArrayNode.cpp"
#include "../NodeModel/CTECArray.cpp"

using namespace std;

class NodeController
{
private:
	CTECArray<int> * notHipsterInts;
	CTECArray<double> * notHipsterDoubles;
public:
	NodeController();
	virtual ~NodeController();
	void start();
};

#endif /* NODECONTROLLER_NODECONTROLLER_H_ */
