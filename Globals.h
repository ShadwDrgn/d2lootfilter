#pragma once

#include <Windows.h>
#include <string>
#include <unordered_map>
#include "Action.h"
#include "D2Constants.h"

//Globals
extern D2Version GameVersion;
extern int32_t FilterLevel;
extern int32_t PingLevel;
extern bool IsFilterDebug;
extern bool IsTxtDataLoaded;

extern std::unordered_map<std::wstring, int32_t> ItemTypes;

extern std::unordered_map<std::wstring, std::wstring> CustomStats;