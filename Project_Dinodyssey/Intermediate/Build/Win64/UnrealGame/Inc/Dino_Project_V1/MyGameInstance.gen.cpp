// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dino_Project_V1/MyGameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyGameInstance() {}
// Cross Module References
	DINO_PROJECT_V1_API UClass* Z_Construct_UClass_UMyGameInstance_NoRegister();
	DINO_PROJECT_V1_API UClass* Z_Construct_UClass_UMyGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_Dino_Project_V1();
// End Cross Module References
	DEFINE_FUNCTION(UMyGameInstance::execTakeScreenShot)
	{
		P_GET_UBOOL(Z_Param_bCaptureUI);
		P_GET_UBOOL(Z_Param_bAddSuffix);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMyGameInstance::TakeScreenShot(Z_Param_bCaptureUI,Z_Param_bAddSuffix);
		P_NATIVE_END;
	}
	void UMyGameInstance::StaticRegisterNativesUMyGameInstance()
	{
		UClass* Class = UMyGameInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TakeScreenShot", &UMyGameInstance::execTakeScreenShot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMyGameInstance_TakeScreenShot_Statics
	{
		struct MyGameInstance_eventTakeScreenShot_Parms
		{
			bool bCaptureUI;
			bool bAddSuffix;
		};
		static void NewProp_bCaptureUI_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCaptureUI;
		static void NewProp_bAddSuffix_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddSuffix;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMyGameInstance_TakeScreenShot_Statics::NewProp_bCaptureUI_SetBit(void* Obj)
	{
		((MyGameInstance_eventTakeScreenShot_Parms*)Obj)->bCaptureUI = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMyGameInstance_TakeScreenShot_Statics::NewProp_bCaptureUI = { "bCaptureUI", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MyGameInstance_eventTakeScreenShot_Parms), &Z_Construct_UFunction_UMyGameInstance_TakeScreenShot_Statics::NewProp_bCaptureUI_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMyGameInstance_TakeScreenShot_Statics::NewProp_bAddSuffix_SetBit(void* Obj)
	{
		((MyGameInstance_eventTakeScreenShot_Parms*)Obj)->bAddSuffix = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMyGameInstance_TakeScreenShot_Statics::NewProp_bAddSuffix = { "bAddSuffix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MyGameInstance_eventTakeScreenShot_Parms), &Z_Construct_UFunction_UMyGameInstance_TakeScreenShot_Statics::NewProp_bAddSuffix_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyGameInstance_TakeScreenShot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyGameInstance_TakeScreenShot_Statics::NewProp_bCaptureUI,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyGameInstance_TakeScreenShot_Statics::NewProp_bAddSuffix,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyGameInstance_TakeScreenShot_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// foto test begin\n" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
		{ "ToolTip", "foto test begin" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyGameInstance_TakeScreenShot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyGameInstance, nullptr, "TakeScreenShot", nullptr, nullptr, sizeof(MyGameInstance_eventTakeScreenShot_Parms), Z_Construct_UFunction_UMyGameInstance_TakeScreenShot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_TakeScreenShot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyGameInstance_TakeScreenShot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_TakeScreenShot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyGameInstance_TakeScreenShot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyGameInstance_TakeScreenShot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMyGameInstance_NoRegister()
	{
		return UMyGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UMyGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Dino_Project_V1,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMyGameInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyGameInstance_TakeScreenShot, "TakeScreenShot" }, // 2059258931
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MyGameInstance.h" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyGameInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyGameInstance_Statics::ClassParams = {
		&UMyGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMyGameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyGameInstance, 980714179);
	template<> DINO_PROJECT_V1_API UClass* StaticClass<UMyGameInstance>()
	{
		return UMyGameInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyGameInstance(Z_Construct_UClass_UMyGameInstance, &UMyGameInstance::StaticClass, TEXT("/Script/Dino_Project_V1"), TEXT("UMyGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
