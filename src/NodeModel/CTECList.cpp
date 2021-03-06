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
/**
 *
 */
template<class Type>
CTECList<Type>::~CTECList()
{
	ArrayNode<Type> * current = head;

	for(int deleteCount = 0; deleteCount < size; deleteCount++)
	{
		ArrayNode<Type> * temp = current;

		current = current->getNext();
		head = current;
		delete temp;
	}

	delete head;
	head = nullptr;
	end = nullptr;
	size = 0;
}

template<class Type>
int CTECList<Type>::getSize()
{

}

template<class Type>
void CTECList<Type>::addToFront(const Type& value)
{
	ArrayNode<Type> * newStuff = new ArrayNode<Type>(value);
	head = newStuff;
}

template<class Type>
void CTECList<Type>::addToEnd(const Type& value)
{
	end = new ArrayNode<Type>(value, end);
}

template<class Type>
void CTECList<Type>::addToIndex(int index, const Type& value)
{
	assert(index >= 0 && index <= size);

	ArrayNode<Type> * indexPtr =  new ArrayNode<Type>(value);

	ArrayNode<Type> * previousPtr = head;
	for(int spot = 0; spot < index; spot++)
	{
		previousPtr = previousPtr->getNext();
	}

	indexPtr->setNext(previousPtr->getNext());

	previousPtr->setNext(indexPtr);


}

template<class Type>
Type CTECList<Type>::getFront()
{
	return head->getValue();
}

template<class Type>
Type CTECList<Type>::getEnd()
{
	return end->getValue();
}

template<class Type>
Type CTECList<Type>::getFromIndex(int index)
{
	return index;
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
	//Check for size==1 it is a special case.
	//loop over size
	//or
	//loop until getNext()->getNext() == nullptr
	//set the next to last node to point to nullptr
	//set the next to last node as end
	//delete the old last node
	//Before return the variable call calculateSize()
	//return value
	assert(size > 0);
	Type valueToRemove;

	if(size == 1)
	{
		valueToRemove = removeFront();
		end = nullptr;
	}
	else
	{
		ArrayNode<Type> * current = head;
		for(int spot = 0; spot < size - 1; spot++)
		{
			current = current->getNext();
		}

		ArrayNode<Type> * pointer = head;
		while(pointer->getNext()->getNext() != nullptr)
		{
			pointer = pointer->getNext();
		}

		valueToRemove = current->getNext()->getNext();
		end = current;
		delete current->getNext();
	}

	this->calculateSize();
	return valueToRemove;

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
int CTECList<Type>::indexOf(Type searchValue)
{
	assert(this->size > 0);
	int index = 0;
	ArrayNode<Type> * searchPointer;

	for(searchPointer = head; searchPointer->getValue() != nullptr; searchPointer = searchPointer->getNext());
	{
		index++;
		if(searchValue == searchPointer->getValue())
		{
			return index;
		}

	}
	index = -1;

	return index;
}

template<class Type>
Type CTECList<Type>::set(int index, const Type& value)
{

}













