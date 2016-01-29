/*
 * NodeController.cpp
 *
 *  Created on: Jan 27, 2016
 *      Author: bjol7457
 */

#include "NodeController.h"

NodeController::NodeController()
{
	this->intNode.setValue(5);
	this->stringArrayNode.setValue("words are fun");

}

NodeController::~NodeController()
{

}

void NodeController :: start()
{
	cout << intNode.getValue() << endl;
	cout << stringArrayNode.getValue() << endl;
}

