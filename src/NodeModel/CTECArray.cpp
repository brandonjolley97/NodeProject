/*
 * CTECArray.cpp
 *
 *  Created on: Feb 2, 2016
 *      Author: Brandon Jolley
 */

#include "CTECArray.h"
#include <iostream>

using namespace std;

template <class Type>
CTECArray<Type>::CTECArray(int size)
{
	this->size = size;
	head = nullptr;

	if(size <= 0)
	{
		cerr << "Nope. Not Happening!" << endl;
		return;
	}

}

template <class Type>
CTECArray<Type>::~CTECArray()
{
	// TODO Auto-generated destructor stub
}

template <class Type>
int CTECArray<Type>:: getSize()
{
	return this->size;
}

template <class Type>
Type * CTECArray<Type>:: get(int position)
{
	//Bounds check for size and negative.
	if(position >= size || position < 0)
	{
		return nullptr;
		cout << "You done messed up A-A-Ron." << endl;
	}
	else
	{
		ArrayNode<Type> * current = head;
		//Inclusive because I am inside the bounds guaranteed
		for(int spot = 0; spot <= position; spot++)
		{
			if(spot != position)
			{
				current = current->getNext();
			}
			else
			{
				return current->getValue();
			}

		}
	}
}

template <class Type>
void CTECArray<Type>:: set(int position, Type value)
{
	if(position >= size || position < 0)
		{
			cerr << "Don't do this!  Out of bounds!" << endl;
		}
		else
		{
			ArrayNode<Type> * current = head;
			for(int spot = 0; spot <= position; spot++)
			{
				if(spot != position)
				{
					current = current->getNext();
				}
				else
				{
					current->setValue(value);
				}
			}
		}
}









