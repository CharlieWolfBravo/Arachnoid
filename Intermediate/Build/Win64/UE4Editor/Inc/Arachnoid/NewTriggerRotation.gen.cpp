// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "NewTriggerRotation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNewTriggerRotation() {}
// Cross Module References
	ARACHNOID_API UClass* Z_Construct_UClass_UNewTriggerRotation_NoRegister();
	ARACHNOID_API UClass* Z_Construct_UClass_UNewTriggerRotation();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Arachnoid();
// End Cross Module References
	void UNewTriggerRotation::StaticRegisterNativesUNewTriggerRotation()
	{
	}
	UClass* Z_Construct_UClass_UNewTriggerRotation_NoRegister()
	{
		return UNewTriggerRotation::StaticClass();
	}
	UClass* Z_Construct_UClass_UNewTriggerRotation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UActorComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Arachnoid,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Custom" },
				{ "IncludePath", "NewTriggerRotation.h" },
				{ "ModuleRelativePath", "NewTriggerRotation.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UNewTriggerRotation>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UNewTriggerRotation::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNewTriggerRotation, 3412653028);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNewTriggerRotation(Z_Construct_UClass_UNewTriggerRotation, &UNewTriggerRotation::StaticClass, TEXT("/Script/Arachnoid"), TEXT("UNewTriggerRotation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNewTriggerRotation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
