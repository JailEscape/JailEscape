// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT_ShowerRoomKey_generated_h
#error "ShowerRoomKey.generated.h already included, missing '#pragma once' in ShowerRoomKey.h"
#endif
#define MYPROJECT_ShowerRoomKey_generated_h

#define JailEscape_Source_MyProject_ShowerRoomKey_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetPickedUp) \
	{ \
		P_GET_UBOOL(Z_Param__state); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetPickedUp(Z_Param__state); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPickedUp) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsPickedUp(); \
		P_NATIVE_END; \
	}


#define JailEscape_Source_MyProject_ShowerRoomKey_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetPickedUp) \
	{ \
		P_GET_UBOOL(Z_Param__state); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetPickedUp(Z_Param__state); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPickedUp) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsPickedUp(); \
		P_NATIVE_END; \
	}


#define JailEscape_Source_MyProject_ShowerRoomKey_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShowerRoomKey(); \
	friend MYPROJECT_API class UClass* Z_Construct_UClass_AShowerRoomKey(); \
public: \
	DECLARE_CLASS(AShowerRoomKey, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AShowerRoomKey) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define JailEscape_Source_MyProject_ShowerRoomKey_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAShowerRoomKey(); \
	friend MYPROJECT_API class UClass* Z_Construct_UClass_AShowerRoomKey(); \
public: \
	DECLARE_CLASS(AShowerRoomKey, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AShowerRoomKey) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define JailEscape_Source_MyProject_ShowerRoomKey_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShowerRoomKey(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShowerRoomKey) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShowerRoomKey); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShowerRoomKey); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShowerRoomKey(AShowerRoomKey&&); \
	NO_API AShowerRoomKey(const AShowerRoomKey&); \
public:


#define JailEscape_Source_MyProject_ShowerRoomKey_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShowerRoomKey(AShowerRoomKey&&); \
	NO_API AShowerRoomKey(const AShowerRoomKey&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShowerRoomKey); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShowerRoomKey); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AShowerRoomKey)


#define JailEscape_Source_MyProject_ShowerRoomKey_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__sceneComponent() { return STRUCT_OFFSET(AShowerRoomKey, sceneComponent); } \
	FORCEINLINE static uint32 __PPO__showerRoomKey() { return STRUCT_OFFSET(AShowerRoomKey, showerRoomKey); } \
	FORCEINLINE static uint32 __PPO__interactionZone() { return STRUCT_OFFSET(AShowerRoomKey, interactionZone); } \
	FORCEINLINE static uint32 __PPO__pickupSound() { return STRUCT_OFFSET(AShowerRoomKey, pickupSound); } \
	FORCEINLINE static uint32 __PPO__bIsPickedUp() { return STRUCT_OFFSET(AShowerRoomKey, bIsPickedUp); }


#define JailEscape_Source_MyProject_ShowerRoomKey_h_9_PROLOG
#define JailEscape_Source_MyProject_ShowerRoomKey_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	JailEscape_Source_MyProject_ShowerRoomKey_h_12_PRIVATE_PROPERTY_OFFSET \
	JailEscape_Source_MyProject_ShowerRoomKey_h_12_RPC_WRAPPERS \
	JailEscape_Source_MyProject_ShowerRoomKey_h_12_INCLASS \
	JailEscape_Source_MyProject_ShowerRoomKey_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define JailEscape_Source_MyProject_ShowerRoomKey_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	JailEscape_Source_MyProject_ShowerRoomKey_h_12_PRIVATE_PROPERTY_OFFSET \
	JailEscape_Source_MyProject_ShowerRoomKey_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	JailEscape_Source_MyProject_ShowerRoomKey_h_12_INCLASS_NO_PURE_DECLS \
	JailEscape_Source_MyProject_ShowerRoomKey_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID JailEscape_Source_MyProject_ShowerRoomKey_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
