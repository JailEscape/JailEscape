// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT_Lock_generated_h
#error "Lock.generated.h already included, missing '#pragma once' in Lock.h"
#endif
#define MYPROJECT_Lock_generated_h

#define JailEscape_Source_MyProject_Lock_h_12_RPC_WRAPPERS
#define JailEscape_Source_MyProject_Lock_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define JailEscape_Source_MyProject_Lock_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALock(); \
	friend MYPROJECT_API class UClass* Z_Construct_UClass_ALock(); \
public: \
	DECLARE_CLASS(ALock, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(ALock) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define JailEscape_Source_MyProject_Lock_h_12_INCLASS \
private: \
	static void StaticRegisterNativesALock(); \
	friend MYPROJECT_API class UClass* Z_Construct_UClass_ALock(); \
public: \
	DECLARE_CLASS(ALock, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(ALock) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define JailEscape_Source_MyProject_Lock_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALock(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALock) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALock); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALock); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALock(ALock&&); \
	NO_API ALock(const ALock&); \
public:


#define JailEscape_Source_MyProject_Lock_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALock(ALock&&); \
	NO_API ALock(const ALock&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALock); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALock); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALock)


#define JailEscape_Source_MyProject_Lock_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__sceneComponent() { return STRUCT_OFFSET(ALock, sceneComponent); } \
	FORCEINLINE static uint32 __PPO__lockMesh() { return STRUCT_OFFSET(ALock, lockMesh); } \
	FORCEINLINE static uint32 __PPO__firstNumWheel() { return STRUCT_OFFSET(ALock, firstNumWheel); } \
	FORCEINLINE static uint32 __PPO__secondNumWheel() { return STRUCT_OFFSET(ALock, secondNumWheel); } \
	FORCEINLINE static uint32 __PPO__thirdNumWheel() { return STRUCT_OFFSET(ALock, thirdNumWheel); } \
	FORCEINLINE static uint32 __PPO__interactionZone() { return STRUCT_OFFSET(ALock, interactionZone); } \
	FORCEINLINE static uint32 __PPO__unlockSound() { return STRUCT_OFFSET(ALock, unlockSound); } \
	FORCEINLINE static uint32 __PPO__spinSound() { return STRUCT_OFFSET(ALock, spinSound); }


#define JailEscape_Source_MyProject_Lock_h_9_PROLOG
#define JailEscape_Source_MyProject_Lock_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	JailEscape_Source_MyProject_Lock_h_12_PRIVATE_PROPERTY_OFFSET \
	JailEscape_Source_MyProject_Lock_h_12_RPC_WRAPPERS \
	JailEscape_Source_MyProject_Lock_h_12_INCLASS \
	JailEscape_Source_MyProject_Lock_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define JailEscape_Source_MyProject_Lock_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	JailEscape_Source_MyProject_Lock_h_12_PRIVATE_PROPERTY_OFFSET \
	JailEscape_Source_MyProject_Lock_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	JailEscape_Source_MyProject_Lock_h_12_INCLASS_NO_PURE_DECLS \
	JailEscape_Source_MyProject_Lock_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID JailEscape_Source_MyProject_Lock_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
