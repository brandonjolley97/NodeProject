/*
 * CTECList.cpp
 *
 *  Created on: Feb 22, 2016
 *      Author: bjol7457
 */

#include "CTECList.h"

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
	//create a pointer to what is after head
	ArrayNode<Type> * newHead = new ArrayNode<Type>();
	newHead = head->getNext();
	//delete what head is pointing to
	delete head;
	head = newHead;
	//Set head to the new head
	this->head = head;

}

template<class Type>
Type CTECList<Type>::removeEnd()
{

}

template<class Type>
Type CTECList<Type>::removeIndex(int index)
{

}

template<class Type>
Type CTECList<Type>::set(int index, const Type& value)
{

}











