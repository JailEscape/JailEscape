// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT_PaperCutCellRow_generated_h
#error "PaperCutCellRow.generated.h already included, missing '#pragma once' in PaperCutCellRow.h"
#endif
#define MYPROJECT_PaperCutCellRow_generated_h

#define JailEscape_Source_MyProject_PaperCutCellRow_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPaperIndex) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetPaperIndex(); \
		P_NATIVE_END; \
	} \
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


#define JailEscape_Source_MyProject_PaperCutCellRow_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPaperIndex) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetPaperIndex(); \
		P_NATIVE_END; \
	} \
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


#define JailEscape_Source_MyProject_PaperCutCellRow_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPaperCutCellRow(); \
	friend MYPROJECT_API class UClass* Z_Construct_UClass_APaperCutCellRow(); \
public: \
	DECLARE_CLASS(APaperCutCellRow, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(APaperCutCellRow) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define JailEscape_Source_MyProject_PaperCutCellRow_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPaperCutCellRow(); \
	friend MYPROJECT_API class UClass* Z_Construct_UClass_APaperCutCellRow(); \
public: \
	DECLARE_CLASS(APaperCutCellRow, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(APaperCutCellRow) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define JailEscape_Source_MyProject_PaperCutCellRow_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APaperCutCellRow(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APaperCutCellRow) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APaperCutCellRow); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APaperCutCellRow); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APaperCutCellRow(APaperCutCellRow&&); \
	NO_API APaperCutCellRow(const APaperCutCellRow&); \
public:


#define JailEscape_Source_MyProject_PaperCutCellRow_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APaperCutCellRow(APaperCutCellRow&&); \
	NO_API APaperCutCellRow(const APaperCutCellRow&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APaperCutCellRow); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APaperCutCellRow); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APaperCutCellRow)


#define JailEscape_Source_MyProject_PaperCutCellRow_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__sceneComponent() { return STRUCT_OFFSET(APaperCutCellRow, sceneComponent); } \
	FORCEINLINE static uint32 __PPO__meshInstances() { return STRUCT_OFFSET(APaperCutCellRow, meshInstances); } \
	FORCEINLINE static uint32 __PPO__interactionObject() { return STRUCT_OFFSET(APaperCutCellRow, interactionObject); } \
	FORCEINLINE static uint32 __PPO__cellRow1() { return STRUCT_OFFSET(APaperCutCellRow, cellRow1); } \
	FORCEINLINE static uint32 __PPO__cellRow2() { return STRUCT_OFFSET(APaperCutCellRow, cellRow2); } \
	FORCEINLINE static uint32 __PPO__interactionZone() { return STRUCT_OFFSET(APaperCutCellRow, interactionZone); } \
	FORCEINLINE static uint32 __PPO__pickupSound() { return STRUCT_OFFSET(APaperCutCellRow, pickupSound); } \
	FORCEINLINE static uint32 __PPO__bIsPickedUp() { return STRUCT_OFFSET(APaperCutCellRow, bIsPickedUp); } \
	FORCEINLINE static uint32 __PPO__nPaperIndex() { return STRUCT_OFFSET(APaperCutCellRow, nPaperIndex); }


#define JailEscape_Source_MyProject_PaperCutCellRow_h_9_PROLOG
#define JailEscape_Source_MyProject_PaperCutCellRow_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	JailEscape_Source_MyProject_PaperCutCellRow_h_12_PRIVATE_PROPERTY_OFFSET \
	JailEscape_Source_MyProject_PaperCutCellRow_h_12_RPC_WRAPPERS \
	JailEscape_Source_MyProject_PaperCutCellRow_h_12_INCLASS \
	JailEscape_Source_MyProject_PaperCutCellRow_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define JailEscape_Source_MyProject_PaperCutCellRow_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	JailEscape_Source_MyProject_PaperCutCellRow_h_12_PRIVATE_PROPERTY_OFFSET \
	JailEscape_Source_MyProject_PaperCutCellRow_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	JailEscape_Source_MyProject_PaperCutCellRow_h_12_INCLASS_NO_PURE_DECLS \
	JailEscape_Source_MyProject_PaperCutCellRow_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID JailEscape_Source_MyProject_PaperCutCellRow_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
