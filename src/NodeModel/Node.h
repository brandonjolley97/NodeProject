/*
 * Node.h
 *
 *  Created on: Jan 27, 2016
 *      Author: bjol7457
 */

#ifndef NODEMODEL_NODE_H_
#define NODEMODEL_NODE_H_


template <class Type>
class Node
{

private:
	Type value;			//Container for the value stored in the node.
	Node * pointers;	//Pointer to the array of Nodes that are linked to this Node.
public:
	Node();
	Node(Type value);
	virtual ~Node();
	Type getValue();
	Node * getPointers();

};

#endif /* NODEMODEL_NODE_H_ */
