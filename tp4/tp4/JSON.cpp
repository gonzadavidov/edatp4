#include "JSON.h"

JSONObject::JSONObject()
{

}

uint JSONObject::getFieldCount()
{

}

const char * JSONObject::getFieldType(const char * f)
{
	return nullptr;
}



const char * JSONObject::getArrayType(const char * f)
{
	return nullptr;
}

unsigned int JSONObject::getFieldSize(const char * f)
{
	return 0;
}

bool JSONObject::isFieldPresent(const char * f)
{
	return false;
}

void * JSONObject::copyField(const char * f)
{
	return nullptr;
}

void * JSONObject::copyArrayValue(const char * f, unsigned int pos)
{
	return nullptr;
}

void JSONObject::print(void)
{
}

JSONError JSONObject::getError(void)
{
	return JSONError();
}

bool JSONObject::parseString(const char * s)
{
	return false;
}

bool JSONObject::parseString(string & s)
{
	return false;
}


