// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PersonalProject/Tree.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTree() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
PERSONALPROJECT_API UClass* Z_Construct_UClass_ATree();
PERSONALPROJECT_API UClass* Z_Construct_UClass_ATree_NoRegister();
UPackage* Z_Construct_UPackage__Script_PersonalProject();
// End Cross Module References

// Begin Class ATree
void ATree::StaticRegisterNativesATree()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATree);
UClass* Z_Construct_UClass_ATree_NoRegister()
{
	return ATree::StaticClass();
}
struct Z_Construct_UClass_ATree_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tree.h" },
		{ "ModuleRelativePath", "Tree.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATree>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATree_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_PersonalProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATree_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATree_Statics::ClassParams = {
	&ATree::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATree_Statics::Class_MetaDataParams), Z_Construct_UClass_ATree_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATree()
{
	if (!Z_Registration_Info_UClass_ATree.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATree.OuterSingleton, Z_Construct_UClass_ATree_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATree.OuterSingleton;
}
template<> PERSONALPROJECT_API UClass* StaticClass<ATree>()
{
	return ATree::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATree);
ATree::~ATree() {}
// End Class ATree

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Moi_Documents_Unreal_Projects_PersonalProject_Source_PersonalProject_Tree_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATree, ATree::StaticClass, TEXT("ATree"), &Z_Registration_Info_UClass_ATree, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATree), 315487155U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Moi_Documents_Unreal_Projects_PersonalProject_Source_PersonalProject_Tree_h_2333722115(TEXT("/Script/PersonalProject"),
	Z_CompiledInDeferFile_FID_Users_Moi_Documents_Unreal_Projects_PersonalProject_Source_PersonalProject_Tree_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Moi_Documents_Unreal_Projects_PersonalProject_Source_PersonalProject_Tree_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
