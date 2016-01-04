/*
 * Serializations.h
 *
 *  Created on: 4 jan. 2016
 *      Author: Elco
 */

#pragma once

#include "json_writer.h"
#include "TempSensorMock.h"

using namespace JSON;

void stream<TempSensorMock>(Adapter& adapter, TempSensorMock * arg);
