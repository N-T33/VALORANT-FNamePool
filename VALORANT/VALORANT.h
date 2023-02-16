#pragma once

#include <Windows.h>
#include <string>
#include <Misc/Types.h>
#include <Misc/AllignmentTemplates.h>
#include <Misc/ImSorryForTheQualityOfThis.h>

uint64 BaseAddress = NULL;
class FNamePool* NamePoolData = nullptr;

#define FileName "\\FNamePool_Entries_Log.txt"

#define DecryptWideOffset 0x31C2A30
#define DecryptNonWideOffset 0x31C29C0 
#define NamePoolDataOffset 0x8FB54C0

#include <VALORANT/FNamePool.h>
