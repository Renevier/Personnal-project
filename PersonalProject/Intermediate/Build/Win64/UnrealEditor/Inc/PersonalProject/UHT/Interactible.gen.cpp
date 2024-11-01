// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PersonalProject/Interactible.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractible() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
PERSONALPROJECT_API UClass* Z_Construct_UClass_UInteractible();
PERSONALPROJECT_API UClass* Z_Construct_UClass_UInteractible_NoRegister();
UPackage* Z_Construct_UPackage__Script_PersonalProject();
// End Cross Module References

// Begin Interface UInteractible
void UInteractible::StaticRegisterNativesUInteractible()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractible);
UClass* Z_Construct_UClass_UInteractible_NoRegister()
{
	return UInteractible::StaticClass();
}
struct Z_Construct_UClass_UInteractible_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interactible.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInteractible>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInteractible_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_PersonalProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractible_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractible_Statics::ClassParams = {
	&UInteractible::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractible_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteractible_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInteractible()
{
	if (!Z_Registration_Info_UClass_UInteractible.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractible.OuterSingleton, Z_Construct_UClass_UInteractible_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInteractible.OuterSingleton;
}
template<> PERSONALPROJECT_API UClass* StaticClass<UInteractible>()
{
	return UInteractible::StaticClass();
}
UInteractible::UInteractible(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractible);
UInteractible::~UInteractible() {}
// End Interface UInteractible

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Moi_Documents_Unreal_Projects_PersonalProject_Source_PersonalProject_Interactible_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInteractible, UInteractible::StaticClass, TEXT("UInteractible"), &Z_Registration_Info_UClass_UInteractible, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractible), 3849296441U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Moi_Documents_Unreal_Projects_PersonalProject_Source_PersonalProject_Interactible_h_1752082257(TEXT("/Script/PersonalProject"),
	Z_CompiledInDeferFile_FID_Users_Moi_Documents_Unreal_Projects_PersonalProject_Source_PersonalProject_Interactible_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Moi_Documents_Unreal_Projects_PersonalProject_Source_PersonalProject_Interactible_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
