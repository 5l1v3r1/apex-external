#pragma once

#define WIN32_LEAN_AND_MEAN

#pragma warning(disable : 4311)
#pragma warning(disable : 4302)
#pragma warning(disable : 4267)

#include <Windows.h>
#include <WinUser.h>
#include <tlhelp32.h>
#include <iostream>
#include <string>
#include <cstdarg>
#include <cmath>
#include <thread>

#pragma warning(disable : 4244)
#pragma warning(disable : 4267)

#include "junk.h"
#include "vector.h"
#include "math.h"
#include "console.h"
#include "utils.h"
#include "driver.h"
#include "offsets.h"

extern bool s_Glow;
extern bool s_Health;
extern bool s_Shield;

extern bool s_Aim;
extern int s_Smooth;
extern int s_FOV;
extern bool s_Recoil;

extern char s_Aimkey[256];

#include "gui.h"

extern SOCKET g_Sock; 
extern DWORD g_PID; 
extern uint64_t g_Base; 