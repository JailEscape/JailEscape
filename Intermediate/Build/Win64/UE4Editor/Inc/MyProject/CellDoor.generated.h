// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT_CellDoor_generated_h
#error "CellDoor.generated.h already included, missing '#pragma once' in CellDoor.h"
#endif
#define MYPROJECT_CellDoor_generated_h

#define JailEscape_Source_MyProject_CellDoor_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetLocked) \
	{ \
		P_GET_UBOOL(Z_Param__state); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetLocked(Z_Param__state); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsLocked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsLocked(); \
		P_NATIVE_END; \
	}


#define JailEscape_Source_MyProject_CellDoor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetLocked) \
	{ \
		P_GET_UBOOL(Z_Param__state); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetLocked(Z_Param__state); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsLocked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsLocked(); \
		P_NATIVE_END; \
	}


#define JailEscape_Source_MyProject_CellDoor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACellDoor(); \
	friend MYPROJECT_API class UClass* Z_Construct_UClass_ACellDoor(); \
public: \
	DECLARE_CLASS(ACellDoor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(ACellDoor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define JailEscape_Source_MyProject_CellDoor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesACellDoor(); \
	friend MYPROJECT_API class UClass* Z_Construct_UClass_ACellDoor(); \
public: \
	DECLARE_CLASS(ACellDoor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(ACellDoor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define JailEscape_Source_MyProject_CellDoor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACellDoor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACellDoor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACellDoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACellDoor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACellDoor(ACellDoor&&); \
	NO_API ACellDoor(const ACellDoor&); \
public:


#define JailEscape_Source_MyProject_CellDoor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACellDoor(ACellDoor&&); \
	NO_API ACellDoor(const ACellDoor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACellDoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACellDoor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACellDoor)


#define JailEscape_Source_MyProject_CellDoor_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__sceneComponent() { return STRUCT_OFFSET(ACellDoor, sceneComponent); } \
	FORCEINLINE static uint32 __PPO__doorFrame() { return STRUCT_OFFSET(ACellDoor, doorFrame); } \
	FORCEINLINE static uint32 __PPO__door() { return STRUCT_OFFSET(ACellDoor, door); } \
	FORCEINLINE static uint32 __PPO__interactionZone() { return STRUCT_OFFSET(ACellDoor, interactionZone); } \
	FORCEINLINE static uint32 __PPO__doorSound() { return STRUCT_OFFSET(ACellDoor, doorSound); } \
	FORCEINLINE static uint32 __PPO__bIsLocked() { return STRUCT_OFFSET(ACellDoor, bIsLocked); }


#define JailEscape_Source_MyProject_CellDoor_h_9_PROLOG
#define JailEscape_Source_MyProject_CellDoor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	JailEscape_Source_MyProject_CellDoor_h_12_PRIVATE_PROPERTY_OFFSET \
	JailEscape_Source_MyProject_CellDoor_h_12_RPC_WRAPPERS \
	JailEscape_Source_MyProject_CellDoor_h_12_INCLASS \
	JailEscape_Source_MyProject_CellDoor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define JailEscape_Source_MyProject_CellDoor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	JailEscape_Source_MyProject_CellDoor_h_12_PRIVATE_PROPERTY_OFFSET \
	JailEscape_Source_MyProject_CellDoor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	JailEscape_Source_MyProject_CellDoor_h_12_INCLASS_NO_PURE_DECLS \
	JailEscape_Source_MyProject_CellDoor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID JailEscape_Source_MyProject_CellDoor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
