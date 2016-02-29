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
	Type thingToRemove;  //In case we need to use the value we are removing

	assert(size > 0);

	//create a pointer to what is after head
	ArrayNode<Type> * newHead = new ArrayNode<Type>();
	newHead = head->getNext();

	//Get what was in the head node
	thingToRemove = head->getValue();

	//delete what head is pointing to
	delete this->head;

	//Set head to the new head
	this->head = newHead;

	this->calculateSize();

	return thingToRemove;

}

template<class Type>
Type CTECList<Type>::removeEnd()
{
	//loop over size
	//or
	//loop until getNext()->GetNext() == nullptr
	//Before return the variable call calculateSize()


}

template<class Type>
Type CTECList<Type>::removeIndex(int index)
{
	Type returnValue;  //In case we need to use the value we are removing

	assert(size > 0 && index >= 0 && index < size); //compound assert statement.  If any or all of the statements don't pass, program terminates

	Type thingToRemove;  //

	ArrayNode<Type> * previous, deleteMe, newNext;  //Create references

	if(index == 0)
	{
		thingToRemove = removeFront();
	}
	else if(index == size - 1)
	{
		thingToRemove = removeEnd();
	}
	else
	{
		for(int spot = 0; spot < index + 1; spot++)
		{

		}
		this->calculateSize();
	}

	return thingToRemove;

}

/**
 * Calculates the size of the list by iterating over all of the nodes in the list
 */
template<class Type>
void CTECList<Type>::calculateSize()
{
	assert(size >= 0);

	ArrayNode<Type> * counterPointer = head;
	int count = 1;

	if(counterPointer == nullptr)
	{
		this->size = 0;
		return;
	}
	else
	{
		while(counterPointer->getNext() != nullptr)
		{
			counterPointer = counterPointer->getNext();
			count++;
		}

		this->size = count;
	}

}

template<class Type>
Type CTECList<Type>::set(int index, const Type& value)
{

}











