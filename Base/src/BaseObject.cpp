/*
 * BaseObject.cpp
 *
 *  Created on: 19 sep. 2013
 *      Author: TimWoo
 */

#include <iostream>
#include <string>
#include "BaseObject.h"

using namespace std;

int BaseObject::seqID = 100000;
bool BaseObject::debugging_ = false;

BaseObject::BaseObject()
	: name_(""),
	  xnot_(3),
	  defConstr(true),
	  ID_(seqID++)
{
	if(debugging_)
		cout << __PRETTY_FUNCTION__ << endl;
}

BaseObject::BaseObject(string name)
	: name_(name),
	  xnot_(3),
	  defConstr(false),
	  ID_(seqID++)
{
	if(debugging_)
		cout << __PRETTY_FUNCTION__ << endl;
}

BaseObject::BaseObject(const BaseObject &bo)
	: name_(bo.name_),
	  xnot_(bo.xnot_),
	  defConstr(bo.defConstr),
	  ID_(seqID++)
{
	if(debugging_)
		cout << __PRETTY_FUNCTION__ << endl;
}

BaseObject::~BaseObject()
{
	if(debugging_)
		cout << __PRETTY_FUNCTION__ << endl;

	string displayName;
	if(name_.length() != 0)
		displayName = name_;
	else
		displayName = "nameless";
	cout << "Destructing BaseObject " << displayName << " with ID: " << ID_ << endl;
}

void BaseObject::setName(string name)
{
	if(debugging_)
		cout << __PRETTY_FUNCTION__ << endl;
	name_ = name;
}

string BaseObject::getName() const
{
	if(debugging_)
		cout << __PRETTY_FUNCTION__ << endl;
	return name_;
}

void BaseObject::setXnot(int xnot)
{
	if(debugging_)
		cout << __PRETTY_FUNCTION__ << endl;
	xnot_ = xnot;
}

int BaseObject::getXnot()
{
	if(debugging_)
		cout << __PRETTY_FUNCTION__ << endl;
	return xnot_;
}

bool BaseObject::isDefaultConstructed()
{
	if(debugging_)
		cout << __PRETTY_FUNCTION__ << endl;
	return defConstr;
}

int BaseObject::getID() const
{
	if(debugging_)
		cout << __PRETTY_FUNCTION__ << endl;
	return ID_;
}

void BaseObject::setDebugging(bool debug)
{
	if(debugging_)
		cout << __PRETTY_FUNCTION__ << endl;
	debugging_ = debug;
}

bool BaseObject::isDebugOn()
{
	return debugging_;
}

BaseObject& BaseObject::operator =(const BaseObject& aBO)
{
	if(debugging_)
		cout << __PRETTY_FUNCTION__ << endl;
	this->name_ = aBO.name_;
	this->xnot_ = aBO.xnot_;
	this->defConstr = aBO.defConstr;
	return *this;
}

std::ostream& operator<<(std::ostream& os, const BaseObject& aBaseObject)
{
	cout << __PRETTY_FUNCTION__ << endl;
//  os << aBaseObject.name_ << " met ID " << aBaseObject.ID_;
  os << aBaseObject.getName() << " met ID " << aBaseObject.getID();
  return os;
}


