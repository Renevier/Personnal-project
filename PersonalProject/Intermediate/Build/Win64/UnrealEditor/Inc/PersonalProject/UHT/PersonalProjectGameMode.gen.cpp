// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PersonalProject/PersonalProjectGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePersonalProjectGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
PERSONALPROJECT_API UClass* Z_Construct_UClass_APersonalProjectGameMode();
PERSONALPROJECT_API UClass* Z_Construct_UClass_APersonalProjectGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_PersonalProject();
// End Cross Module References

// Begin Class APersonalProjectGameMode
void APersonalProjectGameMode::StaticRegisterNativesAPersonalProjectGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APersonalProjectGameMode);
UClass* Z_Construct_UClass_APersonalProjectGameMode_NoRegister()
{
	return APersonalProjectGameMode::StaticClass();
}
struct Z_Construct_UClass_APersonalProjectGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PersonalProjectGameMode.h" },
		{ "ModuleRelativePath", "PersonalProjectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APersonalProjectGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APersonalProjectGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_PersonalProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APersonalProjectGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APersonalProjectGameMode_Statics::ClassParams = {
	&APersonalProjectGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APersonalProjectGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_APersonalProjectGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APersonalProjectGameMode()
{
	if (!Z_Registration_Info_UClass_APersonalProjectGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APersonalProjectGameMode.OuterSingleton, Z_Construct_UClass_APersonalProjectGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APersonalProjectGameMode.OuterSingleton;
}
template<> PERSONALPROJECT_API UClass* StaticClass<APersonalProjectGameMode>()
{
	return APersonalProjectGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APersonalProjectGameMode);
APersonalProjectGameMode::~APersonalProjectGameMode() {}
// End Class APersonalProjectGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Moi_Documents_GitHub_Personnal_project_PersonalProject_Source_PersonalProject_PersonalProjectGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APersonalProjectGameMode, APersonalProjectGameMode::StaticClass, TEXT("APersonalProjectGameMode"), &Z_Registration_Info_UClass_APersonalProjectGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APersonalProjectGameMode), 2695235695U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Moi_Documents_GitHub_Personnal_project_PersonalProject_Source_PersonalProject_PersonalProjectGameMode_h_416816941(TEXT("/Script/PersonalProject"),
	Z_CompiledInDeferFile_FID_Users_Moi_Documents_GitHub_Personnal_project_PersonalProject_Source_PersonalProject_PersonalProjectGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Moi_Documents_GitHub_Personnal_project_PersonalProject_Source_PersonalProject_PersonalProjectGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
