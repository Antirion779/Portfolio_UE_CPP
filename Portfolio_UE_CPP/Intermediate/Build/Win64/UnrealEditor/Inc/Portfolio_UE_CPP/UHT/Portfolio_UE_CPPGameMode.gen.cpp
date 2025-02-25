// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Portfolio_UE_CPP/Portfolio_UE_CPPGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePortfolio_UE_CPPGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
PORTFOLIO_UE_CPP_API UClass* Z_Construct_UClass_APortfolio_UE_CPPGameMode();
PORTFOLIO_UE_CPP_API UClass* Z_Construct_UClass_APortfolio_UE_CPPGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Portfolio_UE_CPP();
// End Cross Module References

// Begin Class APortfolio_UE_CPPGameMode
void APortfolio_UE_CPPGameMode::StaticRegisterNativesAPortfolio_UE_CPPGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APortfolio_UE_CPPGameMode);
UClass* Z_Construct_UClass_APortfolio_UE_CPPGameMode_NoRegister()
{
	return APortfolio_UE_CPPGameMode::StaticClass();
}
struct Z_Construct_UClass_APortfolio_UE_CPPGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Portfolio_UE_CPPGameMode.h" },
		{ "ModuleRelativePath", "Portfolio_UE_CPPGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APortfolio_UE_CPPGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APortfolio_UE_CPPGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Portfolio_UE_CPP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APortfolio_UE_CPPGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APortfolio_UE_CPPGameMode_Statics::ClassParams = {
	&APortfolio_UE_CPPGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APortfolio_UE_CPPGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_APortfolio_UE_CPPGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APortfolio_UE_CPPGameMode()
{
	if (!Z_Registration_Info_UClass_APortfolio_UE_CPPGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APortfolio_UE_CPPGameMode.OuterSingleton, Z_Construct_UClass_APortfolio_UE_CPPGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APortfolio_UE_CPPGameMode.OuterSingleton;
}
template<> PORTFOLIO_UE_CPP_API UClass* StaticClass<APortfolio_UE_CPPGameMode>()
{
	return APortfolio_UE_CPPGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APortfolio_UE_CPPGameMode);
APortfolio_UE_CPPGameMode::~APortfolio_UE_CPPGameMode() {}
// End Class APortfolio_UE_CPPGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_Portfolio_UE_CPP_Portfolio_UE_CPP_Source_Portfolio_UE_CPP_Portfolio_UE_CPPGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APortfolio_UE_CPPGameMode, APortfolio_UE_CPPGameMode::StaticClass, TEXT("APortfolio_UE_CPPGameMode"), &Z_Registration_Info_UClass_APortfolio_UE_CPPGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APortfolio_UE_CPPGameMode), 2263197561U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Portfolio_UE_CPP_Portfolio_UE_CPP_Source_Portfolio_UE_CPP_Portfolio_UE_CPPGameMode_h_875663543(TEXT("/Script/Portfolio_UE_CPP"),
	Z_CompiledInDeferFile_FID_Github_Portfolio_UE_CPP_Portfolio_UE_CPP_Source_Portfolio_UE_CPP_Portfolio_UE_CPPGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Portfolio_UE_CPP_Portfolio_UE_CPP_Source_Portfolio_UE_CPP_Portfolio_UE_CPPGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
