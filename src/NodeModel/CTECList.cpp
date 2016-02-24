/*
 * CTECList.cpp
 *
 *  Created on: Feb 22, 2016
 *      Author: bjol7457
 */

#include "CTECList.h"
#include <assert.h>

template<class Type>
CTECList<Type>::CTECList()
{
	this->size = 0;
	this->head = nullptr;
	this->end = nullptr;

}

template<class Type>
CTECList<Type>::~CTECList()
{

}

template<class Type>
int CTECList<Type>::getSize()
{

}

template<class Type>
void CTECList<Type>::addToFront(const Type& value)
{

}

template<class Type>
void CTECList<Type>::addToEnd(const Type& value)
{

}

template<class Type>
void CTECList<Type>::addToIndex(int index, const Type& value)
{

}

template<class Type>
Type CTECList<Type>::getFront()
{

}

template<class Type>
Type CTECList<Type>::getEnd()
{

}

template<class Type>
Type CTECList<Type>::getFromIndex(int index)
{

}

template<class Type>
Type CTECList<Type>::removeFront()
{
	Type returnValue;  //In case we need to use the value we are removing

	assert(size > 0);

	//create a pointer to what is after head
	ArrayNode<Type> * newHead = new ArrayNode<Type>();
	newHead = head->getNext();

	//Get what was in the head node
	returnValue = head->getValue();

	//delete what head is pointing to
	delete this->head;

	//Set head to the new head
	this->head = newHead;

	return returnValue;

}

template<class Type>
Type CTECList<Type>::removeEnd()
{
	//loop over size
	//or
	//loop until getNext()->getNext() == nullptr
}

template<class Type>
Type CTECList<Type>::removeIndex(int index)
{

}

template<class Type>
Type CTECList<Type>::set(int index, const Type& value)
{

}











