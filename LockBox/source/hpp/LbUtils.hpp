﻿// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'LbUtils.pas' rev: 28.00 (Windows)

#ifndef LbutilsHPP
#define LbutilsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.Types.hpp>	// Pascal unit
#include <System.SysUtils.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Lbutils
{
//-- type declarations -------------------------------------------------------
typedef unsigned *PDWord;

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE System::UnicodeString __fastcall BufferToHex(const void *Buf, unsigned BufSize);
extern DELPHI_PACKAGE bool __fastcall HexToBuffer(const System::UnicodeString Hex, void *Buf, unsigned BufSize);
}	/* namespace Lbutils */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_LBUTILS)
using namespace Lbutils;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// LbutilsHPP
