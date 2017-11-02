#pragma once

#ifndef _D2PTRS_H
#define _D2PTRS_H

/****************************************************************************
*                                                                           *
*   D2Ptrs.h                                                                *
*                                                                           *
*   Licensed under the Apache License, Version 2.0 (the "License");         *
*   you may not use this file except in compliance with the License.        *
*   You may obtain a copy of the License at                                 *
*                                                                           *
*   http://www.apache.org/licenses/LICENSE-2.0                              *
*                                                                           *
*   Unless required by applicable law or agreed to in writing, software     *
*   distributed under the License is distributed on an "AS IS" BASIS,       *
*   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.*
*   See the License for the specific language governing permissions and     *
*   limitations under the License.                                          *
*                                                                           *
*---------------------------------------------------------------------------*
*                                                                           *
*   https://github.com/olivier-verville/D2Template                          *
*                                                                           *
*   This file is used to declare pointers, be it function or variable       *
*   pointers, from the game's libraries.                                    *
*                                                                           *
*   It is recommended that you keep this file organized by which dll the    *
*   pointer is imported from, what type of pointer it is, etc. Ordering     *
*   them by address can also end up being very useful                       *
*                                                                           *
*****************************************************************************/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  These are the macros used by the template core to declare                                                                                                                                   ///
//  pointers. Do not touch unless you know what you're doing                                                                                                                                    ///
//                                                                                                                                                                                              ///
#define D2FUNC(DLL, NAME, RETURN, CONV, ARGS, OFFSET) typedef RETURN (CONV##* DLL##_##NAME##_t) ARGS; static DLL##_##NAME##_t DLL##_##NAME = (DLL##_##NAME##_t)(DLLBASE_##DLL + OFFSET);        ///
#define D2VAR(DLL, NAME, TYPE, OFFSET) typedef TYPE DLL##_##NAME##_vt; static DLL##_##NAME##_vt * DLL##_##NAME = (DLL##_##NAME##_vt *)(DLLBASE_##DLL + OFFSET);                                 ///
#define D2PTR(DLL, NAME, OFFSET) static DWORD NAME = (DLLBASE_##DLL + OFFSET);                                                                                                                  ///
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/********************************************************************************
*                                                                               *
*   D2GAME.DLL POINTERS                                                         *
*                                                                               *
*********************************************************************************/



/********************************************************************************
*                                                                               *
*   D2CLIENT.DLL POINTERS                                                       *
*                                                                               *
*********************************************************************************/



/********************************************************************************
*                                                                               *
*   D2COMMON.DLL POINTERS                                                       *
*                                                                               *
*********************************************************************************/



// end of file -----------------------------------------------------------------
#endif