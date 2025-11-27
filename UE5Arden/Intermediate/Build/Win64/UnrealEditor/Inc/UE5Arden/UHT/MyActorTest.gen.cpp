// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE5Arden/MyActorTest.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMyActorTest() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
UE5ARDEN_API UClass* Z_Construct_UClass_AMyActorTest();
UE5ARDEN_API UClass* Z_Construct_UClass_AMyActorTest_NoRegister();
UPackage* Z_Construct_UPackage__Script_UE5Arden();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMyActorTest Function DemostrateFundamentals *****************************
struct Z_Construct_UFunction_AMyActorTest_DemostrateFundamentals_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MyActorTest" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Ejemplo de una funcion publica\n" },
#endif
		{ "ModuleRelativePath", "MyActorTest.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ejemplo de una funcion publica" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyActorTest_DemostrateFundamentals_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMyActorTest, nullptr, "DemostrateFundamentals", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActorTest_DemostrateFundamentals_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyActorTest_DemostrateFundamentals_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AMyActorTest_DemostrateFundamentals()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyActorTest_DemostrateFundamentals_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyActorTest::execDemostrateFundamentals)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DemostrateFundamentals();
	P_NATIVE_END;
}
// ********** End Class AMyActorTest Function DemostrateFundamentals *******************************

// ********** Begin Class AMyActorTest *************************************************************
void AMyActorTest::StaticRegisterNativesAMyActorTest()
{
	UClass* Class = AMyActorTest::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DemostrateFundamentals", &AMyActorTest::execDemostrateFundamentals },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMyActorTest;
UClass* AMyActorTest::GetPrivateStaticClass()
{
	using TClass = AMyActorTest;
	if (!Z_Registration_Info_UClass_AMyActorTest.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MyActorTest"),
			Z_Registration_Info_UClass_AMyActorTest.InnerSingleton,
			StaticRegisterNativesAMyActorTest,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AMyActorTest.InnerSingleton;
}
UClass* Z_Construct_UClass_AMyActorTest_NoRegister()
{
	return AMyActorTest::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMyActorTest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MyActorTest.h" },
		{ "ModuleRelativePath", "MyActorTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyFloatVariable_MetaData[] = {
		{ "Category", "MyActorTest" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Ejemplo de variable de instancia publica\n" },
#endif
		{ "ModuleRelativePath", "MyActorTest.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ejemplo de variable de instancia publica" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_edad_MetaData[] = {
		{ "Category", "MyActorTest" },
		{ "ModuleRelativePath", "MyActorTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_esInstructor_MetaData[] = {
		{ "Category", "MyActorTest" },
		{ "ModuleRelativePath", "MyActorTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_nombre_MetaData[] = {
		{ "Category", "MyActorTest" },
		{ "ModuleRelativePath", "MyActorTest.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MyFloatVariable;
	static const UECodeGen_Private::FIntPropertyParams NewProp_edad;
	static void NewProp_esInstructor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_esInstructor;
	static const UECodeGen_Private::FStrPropertyParams NewProp_nombre;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyActorTest_DemostrateFundamentals, "DemostrateFundamentals" }, // 2979438884
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyActorTest>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyActorTest_Statics::NewProp_MyFloatVariable = { "MyFloatVariable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyActorTest, MyFloatVariable), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyFloatVariable_MetaData), NewProp_MyFloatVariable_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyActorTest_Statics::NewProp_edad = { "edad", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyActorTest, edad), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_edad_MetaData), NewProp_edad_MetaData) };
void Z_Construct_UClass_AMyActorTest_Statics::NewProp_esInstructor_SetBit(void* Obj)
{
	((AMyActorTest*)Obj)->esInstructor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyActorTest_Statics::NewProp_esInstructor = { "esInstructor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMyActorTest), &Z_Construct_UClass_AMyActorTest_Statics::NewProp_esInstructor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_esInstructor_MetaData), NewProp_esInstructor_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AMyActorTest_Statics::NewProp_nombre = { "nombre", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyActorTest, nombre), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_nombre_MetaData), NewProp_nombre_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyActorTest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActorTest_Statics::NewProp_MyFloatVariable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActorTest_Statics::NewProp_edad,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActorTest_Statics::NewProp_esInstructor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActorTest_Statics::NewProp_nombre,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyActorTest_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyActorTest_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_UE5Arden,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyActorTest_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyActorTest_Statics::ClassParams = {
	&AMyActorTest::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMyActorTest_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyActorTest_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyActorTest_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyActorTest_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyActorTest()
{
	if (!Z_Registration_Info_UClass_AMyActorTest.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyActorTest.OuterSingleton, Z_Construct_UClass_AMyActorTest_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyActorTest.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyActorTest);
AMyActorTest::~AMyActorTest() {}
// ********** End Class AMyActorTest ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_conta_OneDrive_Escritorio_Fundamentos_Unreal_Repo_Fabian_UE5ArdenCurso_UE5Arden_Source_UE5Arden_MyActorTest_h__Script_UE5Arden_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyActorTest, AMyActorTest::StaticClass, TEXT("AMyActorTest"), &Z_Registration_Info_UClass_AMyActorTest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyActorTest), 5994262U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_conta_OneDrive_Escritorio_Fundamentos_Unreal_Repo_Fabian_UE5ArdenCurso_UE5Arden_Source_UE5Arden_MyActorTest_h__Script_UE5Arden_3761041104(TEXT("/Script/UE5Arden"),
	Z_CompiledInDeferFile_FID_Users_conta_OneDrive_Escritorio_Fundamentos_Unreal_Repo_Fabian_UE5ArdenCurso_UE5Arden_Source_UE5Arden_MyActorTest_h__Script_UE5Arden_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_conta_OneDrive_Escritorio_Fundamentos_Unreal_Repo_Fabian_UE5ArdenCurso_UE5Arden_Source_UE5Arden_MyActorTest_h__Script_UE5Arden_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
