#include "Serializations.h"

// These macros are equivalent to ESJ, except for that they add arg-> in front of the member variable name

// Serializable element with more elements to follow
#define JSON_AE(json_adapter,class_member)  JSON::stream(json_adapter,_ASTRING(#class_member),arg->class_member,true)
// Serializable terminator, keep things simple for the JSON writer. No stream manipulations required
#define JSON_AT(json_adapter,class_member)  JSON::stream(json_adapter,_ASTRING(#class_member),arg->class_member,false)

using namespace JSON;

void stream<TempSensorMock>(Adapter& adapter, TempSensorMock * arg){
    JSON::Class root(adapter, "TempSensorMock");
    JSON_AE(adapter, value);
    JSON_AT(adapter, connected);
}
