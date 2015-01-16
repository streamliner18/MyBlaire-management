﻿// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'LbBytes.pas' rev: 28.00 (Windows)

#ifndef LbbytesHPP
#define LbbytesHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.Classes.hpp>	// Pascal unit
#include <System.SysUtils.hpp>	// Pascal unit
#include <LbCipher.hpp>	// Pascal unit
#include <LbProc.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Lbbytes
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TBlowfishBytes;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TBlowfishBytes : public Lbproc::TBlowfishEncrypt
{
	typedef Lbproc::TBlowfishEncrypt inherited;
	
public:
	static void __fastcall BFEncryptBytes(const System::DynamicArray<System::Byte> InBytes, System::DynamicArray<System::Byte> &OutBytes, const Lbcipher::TKey128 &Key, bool Encrypt);
	static void __fastcall BFEncryptBytesCBC(const System::DynamicArray<System::Byte> InBytes, System::DynamicArray<System::Byte> &OutBytes, const Lbcipher::TKey128 &Key, bool Encrypt);
	static System::DynamicArray<System::Byte> __fastcall BFEncryptBytesCBCEx(const System::DynamicArray<System::Byte> InBytes, const Lbcipher::TKey128 &Key, bool Encrypt);
	static System::DynamicArray<System::Byte> __fastcall BFEncryptBytesEx(const System::DynamicArray<System::Byte> InBytes, const Lbcipher::TKey128 &Key, bool Encrypt);
public:
	/* TObject.Create */ inline __fastcall TBlowfishBytes(void) : Lbproc::TBlowfishEncrypt() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TBlowfishBytes(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS TDESBytes;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TDESBytes : public Lbproc::TDESEncrypt
{
	typedef Lbproc::TDESEncrypt inherited;
	
public:
	static void __fastcall DESEncryptBytes(const System::DynamicArray<System::Byte> InBytes, System::DynamicArray<System::Byte> &OutBytes, const Lbcipher::TKey64 &Key, bool Encrypt);
	static void __fastcall DESEncryptBytesCBC(const System::DynamicArray<System::Byte> InBytes, System::DynamicArray<System::Byte> &OutBytes, const Lbcipher::TKey64 &Key, bool Encrypt);
	static System::DynamicArray<System::Byte> __fastcall DESEncryptBytesCBCEx(const System::DynamicArray<System::Byte> InBytes, const Lbcipher::TKey64 &Key, bool Encrypt);
	static System::DynamicArray<System::Byte> __fastcall DESEncryptBytesEx(const System::DynamicArray<System::Byte> InBytes, const Lbcipher::TKey64 &Key, bool Encrypt);
	static void __fastcall TripleDESEncryptBytes(const System::DynamicArray<System::Byte> InBytes, System::DynamicArray<System::Byte> &OutBytes, const Lbcipher::TKey128 &Key, bool Encrypt);
	static void __fastcall TripleDESEncryptBytesCBC(const System::DynamicArray<System::Byte> InBytes, System::DynamicArray<System::Byte> &OutBytes, const Lbcipher::TKey128 &Key, bool Encrypt);
	static System::DynamicArray<System::Byte> __fastcall TripleDESEncryptBytesCBCEx(const System::DynamicArray<System::Byte> InBytes, const Lbcipher::TKey128 &Key, bool Encrypt);
	static System::DynamicArray<System::Byte> __fastcall TripleDESEncryptBytesEx(const System::DynamicArray<System::Byte> InBytes, const Lbcipher::TKey128 &Key, bool Encrypt);
public:
	/* TObject.Create */ inline __fastcall TDESBytes(void) : Lbproc::TDESEncrypt() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDESBytes(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS TRDLBytes;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TRDLBytes : public Lbproc::TRDLEncrypt
{
	typedef Lbproc::TRDLEncrypt inherited;
	
public:
	static void __fastcall RDLEncryptBytes(const System::DynamicArray<System::Byte> InBytes, System::DynamicArray<System::Byte> &OutBytes, const void *Key, int KeySize, bool Encrypt);
	static void __fastcall RDLEncryptBytesCBC(const System::DynamicArray<System::Byte> InBytes, System::DynamicArray<System::Byte> &OutBytes, const void *Key, int KeySize, bool Encrypt);
	static System::DynamicArray<System::Byte> __fastcall RDLEncryptBytesCBCEx(const System::DynamicArray<System::Byte> InBytes, const void *Key, int KeySize, bool Encrypt);
	static System::DynamicArray<System::Byte> __fastcall RDLEncryptBytesEx(const System::DynamicArray<System::Byte> InBytes, const void *Key, int KeySize, bool Encrypt);
public:
	/* TObject.Create */ inline __fastcall TRDLBytes(void) : Lbproc::TRDLEncrypt() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TRDLBytes(void) { }
	
};

#pragma pack(pop)

struct DECLSPEC_DRECORD TLbBase64
{
private:
	static System::StaticArray<System::Byte, 64> Lb64Table;
	static System::StaticArray<System::Byte, 80> LbD64Table;
	
public:
	static void __fastcall LbDecodeBase64(System::Classes::TStream* InStream, System::Classes::TStream* OutStream);
	static void __fastcall LbEncodeBase64(System::Classes::TStream* InStream, System::Classes::TStream* OutStream);
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Lbbytes */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_LBBYTES)
using namespace Lbbytes;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// LbbytesHPP
