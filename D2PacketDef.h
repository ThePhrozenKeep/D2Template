#pragma once

#ifndef _D2PACKETDEF_H
#define _D2PACKETDEF_H

#pragma pack(1)

/****************************************************************************
*                                                                           *
*   D2PacketDef.h                                                           *
*   Copyright (C) Olivier Verville                                          *
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
*   This file is an expansion of D2Structs.h, meant to be used to declare   *
*   structs representing network data packets used by the game to           *
*   handle communications between the server and the client                 *
*                                                                           *
*****************************************************************************/

/****************************************************************************
*                                                                           *
* DECLARATIONS                                                              *
*                                                                           *
*****************************************************************************/

struct D2GSPacketClt01;
struct D2GSPacketClt02;
struct D2GSPacketClt03;

struct D2GSPacketSrv01;
struct D2GSPacketSrv02;
struct D2GSPacketSrv03;

/****************************************************************************
*                                                                           *
* DEFINITIONS                                                               *
*                                                                           *
*****************************************************************************/

struct D2GSPacketClt01
{
    //...
};

// end of file --------------------------------------------------------------
#pragma pack()
#endif