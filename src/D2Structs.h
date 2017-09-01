#pragma once

#ifndef _D2STRUCTS_H
#define _D2STRUCTS_H

#include "D2DataTables.h"
#include "D2PacketDef.h"
#pragma pack(1)

/****************************************************************************
*                                                                           *
*   D2Structs.h                                                             *
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
*   This file is used to declare data structures used by the game to        *
*   represent various entities, such as the data structure representing     *
*   a unit entity, or a game entity                                         *
*                                                                           *
*****************************************************************************/

/****************************************************************************
*                                                                           *
* DECLARATIONS                                                              *
*                                                                           *
*****************************************************************************/

struct D2GameStrc;
struct D2UnitStrc;

/****************************************************************************
*                                                                           *
* DEFINITIONS                                                               *
*                                                                           *
*****************************************************************************/

struct D2GameStrc
{
    //...
};

struct D2UnitStrc
{
    //...
};

// end of file --------------------------------------------------------------
#pragma pack()
#endif