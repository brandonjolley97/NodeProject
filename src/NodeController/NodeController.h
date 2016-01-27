/*
 * NodeController.h
 *
 *  Created on: Jan 27, 2016
 *      Author: bjol7457
 */

#ifndef NODECONTROLLER_NODECONTROLLER_H_
#define NODECONTROLLER_NODECONTROLLER_H_

#include "../Model/Node.h"

class NodeController
{
private:
	Node<int> myNode;
public:
	NodeController();
	virtual ~NodeController();
};

#endif /* NODECONTROLLER_NODECONTROLLER_H_ */
