#include "JSON.h"





JSONObject::JSONObject()
{
	fieldCount = 0;
}



JSONObject::JSONObject(std::string & s)
{

}

JSONObject::JSONObject(const char * s)
{
	string = s;
}



uint JSONObject::getFieldCount()
{
	return fieldCount;
}

const char * JSONObject::getFieldType(const char * f)
{
	return ;
}



const char * JSONObject::getArrayType(const char * f)
{
	return ;
}

uint JSONObject::getFieldSize(const char * f)
{
	return ;
}

bool JSONObject::isFieldPresent(const char * f)
{
	return ;
}

void * JSONObject::copyField(const char * f)
{
	return ;
}

void * JSONObject::copyArrayValue(const char * f, unsigned int pos)
{
	return ;
}

void JSONObject::print(void)
{

}

JSOError JSONObject::getError(void)
{
	return JSOError();
}

bool JSONObject::parseString(const char * s)		//FSM
{
	return ; 
}

bool JSONObject::parseString(std::string & s)
{
	return ;
}


