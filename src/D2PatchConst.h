#pragma once

#ifndef _D2PATCHCONST_H
#define _D2PATCHCONST_H

/****************************************************************************
*                                                                           *
*   D2PatchConst.h                                                          *
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
*   This file defines various expressions to simplify the declaration of    *
*   patches in D2Patch.h, and you shouldn't modify this file unless you     *
*   know what you're doing.                                                 *
*                                                                           *
*****************************************************************************/

#define PATCH_JMP               0x000000E9
#define PATCH_CALL              0x000000E8
#define PATCH_RETN              0x000000C3
#define PATCH_RETN4             0x000004C2
#define PATCH_RETN8             0x000008C2
#define PATCH_RETN0C            0x00000CC2
#define PATCH_RETN10            0x000010C2
#define PATCH_RETN14            0x000014C2
#define PATCH_RETN18            0x000018C2
#define PATCH_RETN1C            0x00001CC2
#define PATCH_NOPBLOCK          0x90909090

#endif