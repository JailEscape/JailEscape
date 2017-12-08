// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "MyProject.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1MyProject() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_AActor();
	ENGINE_API class UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_ACharacter();
	HEADMOUNTEDDISPLAY_API class UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AGameModeBase();
	ENGINE_API class UClass* Z_Construct_UClass_AHUD();
	ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API class UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_USphereComponent_NoRegister();

	MYPROJECT_API class UFunction* Z_Construct_UFunction_ACellDoor_IsLocked();
	MYPROJECT_API class UFunction* Z_Construct_UFunction_ACellDoor_SetLocked();
	MYPROJECT_API class UClass* Z_Construct_UClass_ACellDoor_NoRegister();
	MYPROJECT_API class UClass* Z_Construct_UClass_ACellDoor();
	MYPROJECT_API class UClass* Z_Construct_UClass_ACEnemyAI_NoRegister();
	MYPROJECT_API class UClass* Z_Construct_UClass_ACEnemyAI();
	MYPROJECT_API class UClass* Z_Construct_UClass_ALock_NoRegister();
	MYPROJECT_API class UClass* Z_Construct_UClass_ALock();
	MYPROJECT_API class UClass* Z_Construct_UClass_AMyProjectCharacter_NoRegister();
	MYPROJECT_API class UClass* Z_Construct_UClass_AMyProjectCharacter();
	MYPROJECT_API class UClass* Z_Construct_UClass_AMyProjectGameMode_NoRegister();
	MYPROJECT_API class UClass* Z_Construct_UClass_AMyProjectGameMode();
	MYPROJECT_API class UClass* Z_Construct_UClass_AMyProjectHUD_NoRegister();
	MYPROJECT_API class UClass* Z_Construct_UClass_AMyProjectHUD();
	MYPROJECT_API class UFunction* Z_Construct_UFunction_AMyProjectProjectile_OnHit();
	MYPROJECT_API class UClass* Z_Construct_UClass_AMyProjectProjectile_NoRegister();
	MYPROJECT_API class UClass* Z_Construct_UClass_AMyProjectProjectile();
	MYPROJECT_API class UClass* Z_Construct_UClass_APaperCutCell_NoRegister();
	MYPROJECT_API class UClass* Z_Construct_UClass_APaperCutCell();
	MYPROJECT_API class UClass* Z_Construct_UClass_APaperCutCellBlock_NoRegister();
	MYPROJECT_API class UClass* Z_Construct_UClass_APaperCutCellBlock();
	MYPROJECT_API class UClass* Z_Construct_UClass_APaperCutCellRow_NoRegister();
	MYPROJECT_API class UClass* Z_Construct_UClass_APaperCutCellRow();
	MYPROJECT_API class UClass* Z_Construct_UClass_AShowerRoomDoor_NoRegister();
	MYPROJECT_API class UClass* Z_Construct_UClass_AShowerRoomDoor();
	MYPROJECT_API class UFunction* Z_Construct_UFunction_AShowerRoomKey_IsPickedUp();
	MYPROJECT_API class UFunction* Z_Construct_UFunction_AShowerRoomKey_SetPickedUp();
	MYPROJECT_API class UClass* Z_Construct_UClass_AShowerRoomKey_NoRegister();
	MYPROJECT_API class UClass* Z_Construct_UClass_AShowerRoomKey();
	MYPROJECT_API class UPackage* Z_Construct_UPackage__Script_MyProject();
	void ACellDoor::StaticRegisterNativesACellDoor()
	{
		UClass* Class = ACellDoor::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "IsLocked", (Native)&ACellDoor::execIsLocked },
			{ "SetLocked", (Native)&ACellDoor::execSetLocked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 2);
	}
	UFunction* Z_Construct_UFunction_ACellDoor_IsLocked()
	{
		struct CellDoor_eventIsLocked_Parms
		{
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_ACellDoor();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IsLocked"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x54020401, 65535, sizeof(CellDoor_eventIsLocked_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, CellDoor_eventIsLocked_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, CellDoor_eventIsLocked_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, CellDoor_eventIsLocked_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("CellDoor"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("CellDoor.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ACellDoor_SetLocked()
	{
		struct CellDoor_eventSetLocked_Parms
		{
			bool _state;
		};
		UObject* Outer=Z_Construct_UClass_ACellDoor();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetLocked"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(CellDoor_eventSetLocked_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(_state, CellDoor_eventSetLocked_Parms, bool);
			UProperty* NewProp__state = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("_state"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(_state, CellDoor_eventSetLocked_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(_state, CellDoor_eventSetLocked_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("CellDoor"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("CellDoor.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACellDoor_NoRegister()
	{
		return ACellDoor::StaticClass();
	}
	UClass* Z_Construct_UClass_ACellDoor()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_MyProject();
			OuterClass = ACellDoor::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;

				OuterClass->LinkChild(Z_Construct_UFunction_ACellDoor_IsLocked());
				OuterClass->LinkChild(Z_Construct_UFunction_ACellDoor_SetLocked());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bIsLocked, ACellDoor, bool);
				UProperty* NewProp_bIsLocked = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bIsLocked"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bIsLocked, ACellDoor), 0x0040000000000005, CPP_BOOL_PROPERTY_BITMASK(bIsLocked, ACellDoor), sizeof(bool), true);
				UProperty* NewProp_doorSound = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("doorSound"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(doorSound, ACellDoor), 0x00400000000a0009, Z_Construct_UClass_UAudioComponent_NoRegister());
				UProperty* NewProp_interactionZone = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("interactionZone"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(interactionZone, ACellDoor), 0x00400000000a0009, Z_Construct_UClass_UBoxComponent_NoRegister());
				UProperty* NewProp_door = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("door"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(door, ACellDoor), 0x00400000000a0009, Z_Construct_UClass_UStaticMeshComponent_NoRegister());
				UProperty* NewProp_doorFrame = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("doorFrame"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(doorFrame, ACellDoor), 0x00400000000a0009, Z_Construct_UClass_UStaticMeshComponent_NoRegister());
				UProperty* NewProp_sceneComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("sceneComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(sceneComponent, ACellDoor), 0x00400000000a0009, Z_Construct_UClass_USceneComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ACellDoor_IsLocked(), "IsLocked"); // 4107600140
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ACellDoor_SetLocked(), "SetLocked"); // 3946593571
				static TCppClassTypeInfo<TCppClassTypeTraits<ACellDoor> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("CellDoor.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("CellDoor.h"));
				MetaData->SetValue(NewProp_bIsLocked, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_bIsLocked, TEXT("Category"), TEXT("CellDoor"));
				MetaData->SetValue(NewProp_bIsLocked, TEXT("ModuleRelativePath"), TEXT("CellDoor.h"));
				MetaData->SetValue(NewProp_doorSound, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_doorSound, TEXT("Category"), TEXT("CellDoor"));
				MetaData->SetValue(NewProp_doorSound, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_doorSound, TEXT("ModuleRelativePath"), TEXT("CellDoor.h"));
				MetaData->SetValue(NewProp_interactionZone, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_interactionZone, TEXT("Category"), TEXT("CellDoor"));
				MetaData->SetValue(NewProp_interactionZone, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_interactionZone, TEXT("ModuleRelativePath"), TEXT("CellDoor.h"));
				MetaData->SetValue(NewProp_door, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_door, TEXT("Category"), TEXT("CellDoor"));
				MetaData->SetValue(NewProp_door, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_door, TEXT("ModuleRelativePath"), TEXT("CellDoor.h"));
				MetaData->SetValue(NewProp_doorFrame, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_doorFrame, TEXT("Category"), TEXT("CellDoor"));
				MetaData->SetValue(NewProp_doorFrame, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_doorFrame, TEXT("ModuleRelativePath"), TEXT("CellDoor.h"));
				MetaData->SetValue(NewProp_sceneComponent, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_sceneComponent, TEXT("Category"), TEXT("CellDoor"));
				MetaData->SetValue(NewProp_sceneComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_sceneComponent, TEXT("ModuleRelativePath"), TEXT("CellDoor.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACellDoor, 432023922);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACellDoor(Z_Construct_UClass_ACellDoor, &ACellDoor::StaticClass, TEXT("/Script/MyProject"), TEXT("ACellDoor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACellDoor);
	void ACEnemyAI::StaticRegisterNativesACEnemyAI()
	{
	}
	UClass* Z_Construct_UClass_ACEnemyAI_NoRegister()
	{
		return ACEnemyAI::StaticClass();
	}
	UClass* Z_Construct_UClass_ACEnemyAI()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ACharacter();
			Z_Construct_UPackage__Script_MyProject();
			OuterClass = ACEnemyAI::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


				static TCppClassTypeInfo<TCppClassTypeTraits<ACEnemyAI> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("CEnemyAI.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("CEnemyAI.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACEnemyAI, 1959828207);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACEnemyAI(Z_Construct_UClass_ACEnemyAI, &ACEnemyAI::StaticClass, TEXT("/Script/MyProject"), TEXT("ACEnemyAI"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACEnemyAI);
	void ALock::StaticRegisterNativesALock()
	{
	}
	UClass* Z_Construct_UClass_ALock_NoRegister()
	{
		return ALock::StaticClass();
	}
	UClass* Z_Construct_UClass_ALock()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_MyProject();
			OuterClass = ALock::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_spinSound = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("spinSound"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(spinSound, ALock), 0x00400000000a0009, Z_Construct_UClass_UAudioComponent_NoRegister());
				UProperty* NewProp_unlockSound = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("unlockSound"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(unlockSound, ALock), 0x00400000000a0009, Z_Construct_UClass_UAudioComponent_NoRegister());
				UProperty* NewProp_interactionZone = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("interactionZone"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(interactionZone, ALock), 0x00400000000a0009, Z_Construct_UClass_UBoxComponent_NoRegister());
				UProperty* NewProp_thirdNumWheel = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("thirdNumWheel"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(thirdNumWheel, ALock), 0x00400000000a0009, Z_Construct_UClass_UStaticMeshComponent_NoRegister());
				UProperty* NewProp_secondNumWheel = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("secondNumWheel"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(secondNumWheel, ALock), 0x00400000000a0009, Z_Construct_UClass_UStaticMeshComponent_NoRegister());
				UProperty* NewProp_firstNumWheel = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("firstNumWheel"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(firstNumWheel, ALock), 0x00400000000a0009, Z_Construct_UClass_UStaticMeshComponent_NoRegister());
				UProperty* NewProp_lockMesh = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("lockMesh"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(lockMesh, ALock), 0x00400000000a0009, Z_Construct_UClass_UStaticMeshComponent_NoRegister());
				UProperty* NewProp_sceneComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("sceneComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(sceneComponent, ALock), 0x00400000000a0009, Z_Construct_UClass_USceneComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<ALock> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Lock.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Lock.h"));
				MetaData->SetValue(NewProp_spinSound, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_spinSound, TEXT("Category"), TEXT("Lock"));
				MetaData->SetValue(NewProp_spinSound, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_spinSound, TEXT("ModuleRelativePath"), TEXT("Lock.h"));
				MetaData->SetValue(NewProp_unlockSound, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_unlockSound, TEXT("Category"), TEXT("Lock"));
				MetaData->SetValue(NewProp_unlockSound, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_unlockSound, TEXT("ModuleRelativePath"), TEXT("Lock.h"));
				MetaData->SetValue(NewProp_interactionZone, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_interactionZone, TEXT("Category"), TEXT("Lock"));
				MetaData->SetValue(NewProp_interactionZone, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_interactionZone, TEXT("ModuleRelativePath"), TEXT("Lock.h"));
				MetaData->SetValue(NewProp_thirdNumWheel, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_thirdNumWheel, TEXT("Category"), TEXT("Lock"));
				MetaData->SetValue(NewProp_thirdNumWheel, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_thirdNumWheel, TEXT("ModuleRelativePath"), TEXT("Lock.h"));
				MetaData->SetValue(NewProp_secondNumWheel, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_secondNumWheel, TEXT("Category"), TEXT("Lock"));
				MetaData->SetValue(NewProp_secondNumWheel, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_secondNumWheel, TEXT("ModuleRelativePath"), TEXT("Lock.h"));
				MetaData->SetValue(NewProp_firstNumWheel, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_firstNumWheel, TEXT("Category"), TEXT("Lock"));
				MetaData->SetValue(NewProp_firstNumWheel, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_firstNumWheel, TEXT("ModuleRelativePath"), TEXT("Lock.h"));
				MetaData->SetValue(NewProp_lockMesh, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_lockMesh, TEXT("Category"), TEXT("Lock"));
				MetaData->SetValue(NewProp_lockMesh, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_lockMesh, TEXT("ModuleRelativePath"), TEXT("Lock.h"));
				MetaData->SetValue(NewProp_sceneComponent, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_sceneComponent, TEXT("Category"), TEXT("Lock"));
				MetaData->SetValue(NewProp_sceneComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_sceneComponent, TEXT("ModuleRelativePath"), TEXT("Lock.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALock, 2906006228);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALock(Z_Construct_UClass_ALock, &ALock::StaticClass, TEXT("/Script/MyProject"), TEXT("ALock"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALock);
	void AMyProjectCharacter::StaticRegisterNativesAMyProjectCharacter()
	{
	}
	UClass* Z_Construct_UClass_AMyProjectCharacter_NoRegister()
	{
		return AMyProjectCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_AMyProjectCharacter()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ACharacter();
			Z_Construct_UPackage__Script_MyProject();
			OuterClass = AMyProjectCharacter::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20800080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bUsingMotionControllers, AMyProjectCharacter, uint8);
				UProperty* NewProp_bUsingMotionControllers = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bUsingMotionControllers"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bUsingMotionControllers, AMyProjectCharacter), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bUsingMotionControllers, AMyProjectCharacter), sizeof(uint8), false);
				UProperty* NewProp_BaseLookUpRate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BaseLookUpRate"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(BaseLookUpRate, AMyProjectCharacter), 0x0010000000020015);
				UProperty* NewProp_BaseTurnRate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BaseTurnRate"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(BaseTurnRate, AMyProjectCharacter), 0x0010000000020015);
				UProperty* NewProp_L_MotionController = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("L_MotionController"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(L_MotionController, AMyProjectCharacter), 0x00400000000a001d, Z_Construct_UClass_UMotionControllerComponent_NoRegister());
				UProperty* NewProp_R_MotionController = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("R_MotionController"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(R_MotionController, AMyProjectCharacter), 0x00400000000a001d, Z_Construct_UClass_UMotionControllerComponent_NoRegister());
				UProperty* NewProp_FirstPersonCameraComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FirstPersonCameraComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(FirstPersonCameraComponent, AMyProjectCharacter), 0x00400000000a001d, Z_Construct_UClass_UCameraComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->ClassConfigName = FName(TEXT("Game"));
				static TCppClassTypeInfo<TCppClassTypeTraits<AMyProjectCharacter> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MyProjectCharacter.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("MyProjectCharacter.h"));
				MetaData->SetValue(NewProp_bUsingMotionControllers, TEXT("Category"), TEXT("Gameplay"));
				MetaData->SetValue(NewProp_bUsingMotionControllers, TEXT("ModuleRelativePath"), TEXT("MyProjectCharacter.h"));
				MetaData->SetValue(NewProp_bUsingMotionControllers, TEXT("ToolTip"), TEXT("Whether to use motion controller location for aiming."));
				MetaData->SetValue(NewProp_BaseLookUpRate, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_BaseLookUpRate, TEXT("ModuleRelativePath"), TEXT("MyProjectCharacter.h"));
				MetaData->SetValue(NewProp_BaseLookUpRate, TEXT("ToolTip"), TEXT("Base look up/down rate, in deg/sec. Other scaling may affect final rate."));
				MetaData->SetValue(NewProp_BaseTurnRate, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_BaseTurnRate, TEXT("ModuleRelativePath"), TEXT("MyProjectCharacter.h"));
				MetaData->SetValue(NewProp_BaseTurnRate, TEXT("ToolTip"), TEXT("Base turn rate, in deg/sec. Other scaling may affect final turn rate."));
				MetaData->SetValue(NewProp_L_MotionController, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_L_MotionController, TEXT("Category"), TEXT("MyProjectCharacter"));
				MetaData->SetValue(NewProp_L_MotionController, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_L_MotionController, TEXT("ModuleRelativePath"), TEXT("MyProjectCharacter.h"));
				MetaData->SetValue(NewProp_L_MotionController, TEXT("ToolTip"), TEXT("Motion controller (left hand)"));
				MetaData->SetValue(NewProp_R_MotionController, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_R_MotionController, TEXT("Category"), TEXT("MyProjectCharacter"));
				MetaData->SetValue(NewProp_R_MotionController, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_R_MotionController, TEXT("ModuleRelativePath"), TEXT("MyProjectCharacter.h"));
				MetaData->SetValue(NewProp_R_MotionController, TEXT("ToolTip"), TEXT("Motion controller (right hand)"));
				MetaData->SetValue(NewProp_FirstPersonCameraComponent, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_FirstPersonCameraComponent, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_FirstPersonCameraComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_FirstPersonCameraComponent, TEXT("ModuleRelativePath"), TEXT("MyProjectCharacter.h"));
				MetaData->SetValue(NewProp_FirstPersonCameraComponent, TEXT("ToolTip"), TEXT("First person camera"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyProjectCharacter, 405731255);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyProjectCharacter(Z_Construct_UClass_AMyProjectCharacter, &AMyProjectCharacter::StaticClass, TEXT("/Script/MyProject"), TEXT("AMyProjectCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyProjectCharacter);
	void AMyProjectGameMode::StaticRegisterNativesAMyProjectGameMode()
	{
	}
	UClass* Z_Construct_UClass_AMyProjectGameMode_NoRegister()
	{
		return AMyProjectGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_AMyProjectGameMode()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_MyProject();
			OuterClass = AMyProjectGameMode::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20880288;


				static TCppClassTypeInfo<TCppClassTypeTraits<AMyProjectGameMode> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MyProjectGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("MyProjectGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyProjectGameMode, 3293311328);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyProjectGameMode(Z_Construct_UClass_AMyProjectGameMode, &AMyProjectGameMode::StaticClass, TEXT("/Script/MyProject"), TEXT("AMyProjectGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyProjectGameMode);
	void AMyProjectHUD::StaticRegisterNativesAMyProjectHUD()
	{
	}
	UClass* Z_Construct_UClass_AMyProjectHUD_NoRegister()
	{
		return AMyProjectHUD::StaticClass();
	}
	UClass* Z_Construct_UClass_AMyProjectHUD()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AHUD();
			Z_Construct_UPackage__Script_MyProject();
			OuterClass = AMyProjectHUD::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x2080028C;


				OuterClass->ClassConfigName = FName(TEXT("Game"));
				static TCppClassTypeInfo<TCppClassTypeTraits<AMyProjectHUD> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Rendering Actor Input Replication"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MyProjectHUD.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("MyProjectHUD.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyProjectHUD, 1958859108);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyProjectHUD(Z_Construct_UClass_AMyProjectHUD, &AMyProjectHUD::StaticClass, TEXT("/Script/MyProject"), TEXT("AMyProjectHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyProjectHUD);
	void AMyProjectProjectile::StaticRegisterNativesAMyProjectProjectile()
	{
		UClass* Class = AMyProjectProjectile::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "OnHit", (Native)&AMyProjectProjectile::execOnHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 1);
	}
	UFunction* Z_Construct_UFunction_AMyProjectProjectile_OnHit()
	{
		struct MyProjectProjectile_eventOnHit_Parms
		{
			UPrimitiveComponent* HitComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FVector NormalImpulse;
			FHitResult Hit;
		};
		UObject* Outer=Z_Construct_UClass_AMyProjectProjectile();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnHit"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00C20401, 65535, sizeof(MyProjectProjectile_eventOnHit_Parms));
			UProperty* NewProp_Hit = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Hit"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Hit, MyProjectProjectile_eventOnHit_Parms), 0x0010008008000182, Z_Construct_UScriptStruct_FHitResult());
			UProperty* NewProp_NormalImpulse = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NormalImpulse"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(NormalImpulse, MyProjectProjectile_eventOnHit_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_OtherComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherComp, MyProjectProjectile_eventOnHit_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_OtherActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherActor, MyProjectProjectile_eventOnHit_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_HitComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("HitComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(HitComp, MyProjectProjectile_eventOnHit_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("MyProjectProjectile.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("called when projectile hits something"));
			MetaData->SetValue(NewProp_Hit, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_OtherComp, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_HitComp, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMyProjectProjectile_NoRegister()
	{
		return AMyProjectProjectile::StaticClass();
	}
	UClass* Z_Construct_UClass_AMyProjectProjectile()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_MyProject();
			OuterClass = AMyProjectProjectile::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20800080;

				OuterClass->LinkChild(Z_Construct_UFunction_AMyProjectProjectile_OnHit());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_ProjectileMovement = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ProjectileMovement"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ProjectileMovement, AMyProjectProjectile), 0x00400000000a001d, Z_Construct_UClass_UProjectileMovementComponent_NoRegister());
				UProperty* NewProp_CollisionComp = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CollisionComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CollisionComp, AMyProjectProjectile), 0x00400000000b0009, Z_Construct_UClass_USphereComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AMyProjectProjectile_OnHit(), "OnHit"); // 3566446989
				OuterClass->ClassConfigName = FName(TEXT("Game"));
				static TCppClassTypeInfo<TCppClassTypeTraits<AMyProjectProjectile> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MyProjectProjectile.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("MyProjectProjectile.h"));
				MetaData->SetValue(NewProp_ProjectileMovement, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_ProjectileMovement, TEXT("Category"), TEXT("Movement"));
				MetaData->SetValue(NewProp_ProjectileMovement, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_ProjectileMovement, TEXT("ModuleRelativePath"), TEXT("MyProjectProjectile.h"));
				MetaData->SetValue(NewProp_ProjectileMovement, TEXT("ToolTip"), TEXT("Projectile movement component"));
				MetaData->SetValue(NewProp_CollisionComp, TEXT("Category"), TEXT("Projectile"));
				MetaData->SetValue(NewProp_CollisionComp, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_CollisionComp, TEXT("ModuleRelativePath"), TEXT("MyProjectProjectile.h"));
				MetaData->SetValue(NewProp_CollisionComp, TEXT("ToolTip"), TEXT("Sphere collision component"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyProjectProjectile, 4080409645);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyProjectProjectile(Z_Construct_UClass_AMyProjectProjectile, &AMyProjectProjectile::StaticClass, TEXT("/Script/MyProject"), TEXT("AMyProjectProjectile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyProjectProjectile);
	void APaperCutCell::StaticRegisterNativesAPaperCutCell()
	{
	}
	UClass* Z_Construct_UClass_APaperCutCell_NoRegister()
	{
		return APaperCutCell::StaticClass();
	}
	UClass* Z_Construct_UClass_APaperCutCell()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_MyProject();
			OuterClass = APaperCutCell::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


				static TCppClassTypeInfo<TCppClassTypeTraits<APaperCutCell> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("PaperCutCell.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("PaperCutCell.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(APaperCutCell, 1845663124);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APaperCutCell(Z_Construct_UClass_APaperCutCell, &APaperCutCell::StaticClass, TEXT("/Script/MyProject"), TEXT("APaperCutCell"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APaperCutCell);
	void APaperCutCellBlock::StaticRegisterNativesAPaperCutCellBlock()
	{
	}
	UClass* Z_Construct_UClass_APaperCutCellBlock_NoRegister()
	{
		return APaperCutCellBlock::StaticClass();
	}
	UClass* Z_Construct_UClass_APaperCutCellBlock()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_MyProject();
			OuterClass = APaperCutCellBlock::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_pickupSound = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("pickupSound"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(pickupSound, APaperCutCellBlock), 0x00400000000a0009, Z_Construct_UClass_UAudioComponent_NoRegister());
				UProperty* NewProp_interactionZone = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("interactionZone"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(interactionZone, APaperCutCellBlock), 0x00400000000a0009, Z_Construct_UClass_UBoxComponent_NoRegister());
				UProperty* NewProp_cellBlockB = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("cellBlockB"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(cellBlockB, APaperCutCellBlock), 0x00400000000a0009, Z_Construct_UClass_UStaticMeshComponent_NoRegister());
				UProperty* NewProp_cellBlockA = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("cellBlockA"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(cellBlockA, APaperCutCellBlock), 0x00400000000a0009, Z_Construct_UClass_UStaticMeshComponent_NoRegister());
				UProperty* NewProp_meshInstances = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("meshInstances"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(meshInstances, APaperCutCellBlock), 0x00400000000a0009, Z_Construct_UClass_USceneComponent_NoRegister());
				UProperty* NewProp_sceneComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("sceneComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(sceneComponent, APaperCutCellBlock), 0x00400000000a0009, Z_Construct_UClass_USceneComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<APaperCutCellBlock> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("PaperCutCellBlock.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("PaperCutCellBlock.h"));
				MetaData->SetValue(NewProp_pickupSound, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_pickupSound, TEXT("Category"), TEXT("PaperCutCellBlock"));
				MetaData->SetValue(NewProp_pickupSound, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_pickupSound, TEXT("ModuleRelativePath"), TEXT("PaperCutCellBlock.h"));
				MetaData->SetValue(NewProp_interactionZone, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_interactionZone, TEXT("Category"), TEXT("PaperCutCellBlock"));
				MetaData->SetValue(NewProp_interactionZone, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_interactionZone, TEXT("ModuleRelativePath"), TEXT("PaperCutCellBlock.h"));
				MetaData->SetValue(NewProp_cellBlockB, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_cellBlockB, TEXT("Category"), TEXT("PaperCutCellBlock"));
				MetaData->SetValue(NewProp_cellBlockB, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_cellBlockB, TEXT("ModuleRelativePath"), TEXT("PaperCutCellBlock.h"));
				MetaData->SetValue(NewProp_cellBlockA, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_cellBlockA, TEXT("Category"), TEXT("PaperCutCellBlock"));
				MetaData->SetValue(NewProp_cellBlockA, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_cellBlockA, TEXT("ModuleRelativePath"), TEXT("PaperCutCellBlock.h"));
				MetaData->SetValue(NewProp_meshInstances, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_meshInstances, TEXT("Category"), TEXT("PaperCutCellBlock"));
				MetaData->SetValue(NewProp_meshInstances, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_meshInstances, TEXT("ModuleRelativePath"), TEXT("PaperCutCellBlock.h"));
				MetaData->SetValue(NewProp_sceneComponent, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_sceneComponent, TEXT("Category"), TEXT("PaperCutCellBlock"));
				MetaData->SetValue(NewProp_sceneComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_sceneComponent, TEXT("ModuleRelativePath"), TEXT("PaperCutCellBlock.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(APaperCutCellBlock, 1511386267);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APaperCutCellBlock(Z_Construct_UClass_APaperCutCellBlock, &APaperCutCellBlock::StaticClass, TEXT("/Script/MyProject"), TEXT("APaperCutCellBlock"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APaperCutCellBlock);
	void APaperCutCellRow::StaticRegisterNativesAPaperCutCellRow()
	{
	}
	UClass* Z_Construct_UClass_APaperCutCellRow_NoRegister()
	{
		return APaperCutCellRow::StaticClass();
	}
	UClass* Z_Construct_UClass_APaperCutCellRow()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_MyProject();
			OuterClass = APaperCutCellRow::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


				static TCppClassTypeInfo<TCppClassTypeTraits<APaperCutCellRow> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("PaperCutCellRow.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("PaperCutCellRow.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(APaperCutCellRow, 3863280561);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APaperCutCellRow(Z_Construct_UClass_APaperCutCellRow, &APaperCutCellRow::StaticClass, TEXT("/Script/MyProject"), TEXT("APaperCutCellRow"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APaperCutCellRow);
	void AShowerRoomDoor::StaticRegisterNativesAShowerRoomDoor()
	{
	}
	UClass* Z_Construct_UClass_AShowerRoomDoor_NoRegister()
	{
		return AShowerRoomDoor::StaticClass();
	}
	UClass* Z_Construct_UClass_AShowerRoomDoor()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_MyProject();
			OuterClass = AShowerRoomDoor::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


				static TCppClassTypeInfo<TCppClassTypeTraits<AShowerRoomDoor> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("ShowerRoomDoor.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("ShowerRoomDoor.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShowerRoomDoor, 1687822351);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShowerRoomDoor(Z_Construct_UClass_AShowerRoomDoor, &AShowerRoomDoor::StaticClass, TEXT("/Script/MyProject"), TEXT("AShowerRoomDoor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShowerRoomDoor);
	void AShowerRoomKey::StaticRegisterNativesAShowerRoomKey()
	{
		UClass* Class = AShowerRoomKey::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "IsPickedUp", (Native)&AShowerRoomKey::execIsPickedUp },
			{ "SetPickedUp", (Native)&AShowerRoomKey::execSetPickedUp },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 2);
	}
	UFunction* Z_Construct_UFunction_AShowerRoomKey_IsPickedUp()
	{
		struct ShowerRoomKey_eventIsPickedUp_Parms
		{
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_AShowerRoomKey();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IsPickedUp"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x54020401, 65535, sizeof(ShowerRoomKey_eventIsPickedUp_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, ShowerRoomKey_eventIsPickedUp_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, ShowerRoomKey_eventIsPickedUp_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, ShowerRoomKey_eventIsPickedUp_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("ShowerRoomKey"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("ShowerRoomKey.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AShowerRoomKey_SetPickedUp()
	{
		struct ShowerRoomKey_eventSetPickedUp_Parms
		{
			bool _state;
		};
		UObject* Outer=Z_Construct_UClass_AShowerRoomKey();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetPickedUp"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(ShowerRoomKey_eventSetPickedUp_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(_state, ShowerRoomKey_eventSetPickedUp_Parms, bool);
			UProperty* NewProp__state = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("_state"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(_state, ShowerRoomKey_eventSetPickedUp_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(_state, ShowerRoomKey_eventSetPickedUp_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("ShowerRoomKey"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("ShowerRoomKey.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AShowerRoomKey_NoRegister()
	{
		return AShowerRoomKey::StaticClass();
	}
	UClass* Z_Construct_UClass_AShowerRoomKey()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_MyProject();
			OuterClass = AShowerRoomKey::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;

				OuterClass->LinkChild(Z_Construct_UFunction_AShowerRoomKey_IsPickedUp());
				OuterClass->LinkChild(Z_Construct_UFunction_AShowerRoomKey_SetPickedUp());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bIsPickedUp, AShowerRoomKey, bool);
				UProperty* NewProp_bIsPickedUp = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bIsPickedUp"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bIsPickedUp, AShowerRoomKey), 0x0040000000000005, CPP_BOOL_PROPERTY_BITMASK(bIsPickedUp, AShowerRoomKey), sizeof(bool), true);
				UProperty* NewProp_pickupSound = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("pickupSound"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(pickupSound, AShowerRoomKey), 0x00400000000a0009, Z_Construct_UClass_UAudioComponent_NoRegister());
				UProperty* NewProp_interactionZone = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("interactionZone"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(interactionZone, AShowerRoomKey), 0x00400000000a0009, Z_Construct_UClass_UBoxComponent_NoRegister());
				UProperty* NewProp_showerRoomKey = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("showerRoomKey"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(showerRoomKey, AShowerRoomKey), 0x00400000000a0009, Z_Construct_UClass_UStaticMeshComponent_NoRegister());
				UProperty* NewProp_sceneComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("sceneComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(sceneComponent, AShowerRoomKey), 0x00400000000a0009, Z_Construct_UClass_USceneComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AShowerRoomKey_IsPickedUp(), "IsPickedUp"); // 3106694031
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AShowerRoomKey_SetPickedUp(), "SetPickedUp"); // 133831620
				static TCppClassTypeInfo<TCppClassTypeTraits<AShowerRoomKey> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("ShowerRoomKey.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("ShowerRoomKey.h"));
				MetaData->SetValue(NewProp_bIsPickedUp, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_bIsPickedUp, TEXT("Category"), TEXT("ShowerRoomKey"));
				MetaData->SetValue(NewProp_bIsPickedUp, TEXT("ModuleRelativePath"), TEXT("ShowerRoomKey.h"));
				MetaData->SetValue(NewProp_pickupSound, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_pickupSound, TEXT("Category"), TEXT("ShowerRoomKey"));
				MetaData->SetValue(NewProp_pickupSound, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_pickupSound, TEXT("ModuleRelativePath"), TEXT("ShowerRoomKey.h"));
				MetaData->SetValue(NewProp_interactionZone, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_interactionZone, TEXT("Category"), TEXT("ShowerRoomKey"));
				MetaData->SetValue(NewProp_interactionZone, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_interactionZone, TEXT("ModuleRelativePath"), TEXT("ShowerRoomKey.h"));
				MetaData->SetValue(NewProp_showerRoomKey, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_showerRoomKey, TEXT("Category"), TEXT("ShowerRoomKey"));
				MetaData->SetValue(NewProp_showerRoomKey, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_showerRoomKey, TEXT("ModuleRelativePath"), TEXT("ShowerRoomKey.h"));
				MetaData->SetValue(NewProp_sceneComponent, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_sceneComponent, TEXT("Category"), TEXT("ShowerRoomKey"));
				MetaData->SetValue(NewProp_sceneComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_sceneComponent, TEXT("ModuleRelativePath"), TEXT("ShowerRoomKey.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShowerRoomKey, 1019049311);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShowerRoomKey(Z_Construct_UClass_AShowerRoomKey, &AShowerRoomKey::StaticClass, TEXT("/Script/MyProject"), TEXT("AShowerRoomKey"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShowerRoomKey);
	UPackage* Z_Construct_UPackage__Script_MyProject()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/MyProject")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x2899CD50;
			Guid.B = 0x535DBC73;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
