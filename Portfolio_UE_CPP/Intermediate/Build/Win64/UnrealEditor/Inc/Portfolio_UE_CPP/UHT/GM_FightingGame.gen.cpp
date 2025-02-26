// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Portfolio_UE_CPP/GM_FightingGame.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGM_FightingGame() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameMode();
PORTFOLIO_UE_CPP_API UClass* Z_Construct_UClass_AGM_FightingGame();
PORTFOLIO_UE_CPP_API UClass* Z_Construct_UClass_AGM_FightingGame_NoRegister();
UPackage* Z_Construct_UPackage__Script_Portfolio_UE_CPP();
// End Cross Module References

// Begin Class AGM_FightingGame
void AGM_FightingGame::StaticRegisterNativesAGM_FightingGame()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGM_FightingGame);
UClass* Z_Construct_UClass_AGM_FightingGame_NoRegister()
{
	return AGM_FightingGame::StaticClass();
}
struct Z_Construct_UClass_AGM_FightingGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GM_FightingGame.h" },
		{ "ModuleRelativePath", "GM_FightingGame.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGM_FightingGame>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AGM_FightingGame_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameMode,
	(UObject* (*)())Z_Construct_UPackage__Script_Portfolio_UE_CPP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGM_FightingGame_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGM_FightingGame_Statics::ClassParams = {
	&AGM_FightingGame::StaticClass,
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
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGM_FightingGame_Statics::Class_MetaDataParams), Z_Construct_UClass_AGM_FightingGame_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGM_FightingGame()
{
	if (!Z_Registration_Info_UClass_AGM_FightingGame.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGM_FightingGame.OuterSingleton, Z_Construct_UClass_AGM_FightingGame_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGM_FightingGame.OuterSingleton;
}
template<> PORTFOLIO_UE_CPP_API UClass* StaticClass<AGM_FightingGame>()
{
	return AGM_FightingGame::StaticClass();
}
AGM_FightingGame::AGM_FightingGame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGM_FightingGame);
AGM_FightingGame::~AGM_FightingGame() {}
// End Class AGM_FightingGame

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_Portfolio_UE_CPP_Portfolio_UE_CPP_Source_Portfolio_UE_CPP_GM_FightingGame_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGM_FightingGame, AGM_FightingGame::StaticClass, TEXT("AGM_FightingGame"), &Z_Registration_Info_UClass_AGM_FightingGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGM_FightingGame), 3580153174U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Portfolio_UE_CPP_Portfolio_UE_CPP_Source_Portfolio_UE_CPP_GM_FightingGame_h_2039674060(TEXT("/Script/Portfolio_UE_CPP"),
	Z_CompiledInDeferFile_FID_Github_Portfolio_UE_CPP_Portfolio_UE_CPP_Source_Portfolio_UE_CPP_GM_FightingGame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Portfolio_UE_CPP_Portfolio_UE_CPP_Source_Portfolio_UE_CPP_GM_FightingGame_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
