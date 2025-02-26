// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Portfolio_UE_CPP/Paladin_Character.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaladin_Character() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
PORTFOLIO_UE_CPP_API UClass* Z_Construct_UClass_APaladin_Character();
PORTFOLIO_UE_CPP_API UClass* Z_Construct_UClass_APaladin_Character_NoRegister();
PORTFOLIO_UE_CPP_API UClass* Z_Construct_UClass_APortfolio_UE_CPPCharacter();
PORTFOLIO_UE_CPP_API UClass* Z_Construct_UClass_UAttackSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_Portfolio_UE_CPP();
// End Cross Module References

// Begin Class APaladin_Character
void APaladin_Character::StaticRegisterNativesAPaladin_Character()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APaladin_Character);
UClass* Z_Construct_UClass_APaladin_Character_NoRegister()
{
	return APaladin_Character::StaticClass();
}
struct Z_Construct_UClass_APaladin_Character_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Paladin_Character.h" },
		{ "ModuleRelativePath", "Paladin_Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Paladin_Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackSystem_MetaData[] = {
		{ "Category", "Attack" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Paladin_Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackCombo_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Paladin_Character.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackSystem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackCombo_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AttackCombo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APaladin_Character>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APaladin_Character_Statics::NewProp_AttackAction = { "AttackAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APaladin_Character, AttackAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackAction_MetaData), NewProp_AttackAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APaladin_Character_Statics::NewProp_AttackSystem = { "AttackSystem", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APaladin_Character, AttackSystem), Z_Construct_UClass_UAttackSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackSystem_MetaData), NewProp_AttackSystem_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APaladin_Character_Statics::NewProp_AttackCombo_Inner = { "AttackCombo", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APaladin_Character_Statics::NewProp_AttackCombo = { "AttackCombo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APaladin_Character, AttackCombo), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackCombo_MetaData), NewProp_AttackCombo_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APaladin_Character_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APaladin_Character_Statics::NewProp_AttackAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APaladin_Character_Statics::NewProp_AttackSystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APaladin_Character_Statics::NewProp_AttackCombo_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APaladin_Character_Statics::NewProp_AttackCombo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APaladin_Character_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APaladin_Character_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APortfolio_UE_CPPCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Portfolio_UE_CPP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APaladin_Character_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APaladin_Character_Statics::ClassParams = {
	&APaladin_Character::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APaladin_Character_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APaladin_Character_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APaladin_Character_Statics::Class_MetaDataParams), Z_Construct_UClass_APaladin_Character_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APaladin_Character()
{
	if (!Z_Registration_Info_UClass_APaladin_Character.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APaladin_Character.OuterSingleton, Z_Construct_UClass_APaladin_Character_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APaladin_Character.OuterSingleton;
}
template<> PORTFOLIO_UE_CPP_API UClass* StaticClass<APaladin_Character>()
{
	return APaladin_Character::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APaladin_Character);
APaladin_Character::~APaladin_Character() {}
// End Class APaladin_Character

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_Portfolio_UE_CPP_Portfolio_UE_CPP_Source_Portfolio_UE_CPP_Paladin_Character_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APaladin_Character, APaladin_Character::StaticClass, TEXT("APaladin_Character"), &Z_Registration_Info_UClass_APaladin_Character, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APaladin_Character), 1943429485U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Portfolio_UE_CPP_Portfolio_UE_CPP_Source_Portfolio_UE_CPP_Paladin_Character_h_2223992066(TEXT("/Script/Portfolio_UE_CPP"),
	Z_CompiledInDeferFile_FID_Github_Portfolio_UE_CPP_Portfolio_UE_CPP_Source_Portfolio_UE_CPP_Paladin_Character_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Portfolio_UE_CPP_Portfolio_UE_CPP_Source_Portfolio_UE_CPP_Paladin_Character_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
