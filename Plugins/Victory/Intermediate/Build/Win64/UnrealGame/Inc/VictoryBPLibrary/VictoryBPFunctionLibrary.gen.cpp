// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VictoryBPLibrary/Public/VictoryBPFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVictoryBPFunctionLibrary() {}
// Cross Module References
	VICTORYBPLIBRARY_API UEnum* Z_Construct_UEnum_VictoryBPLibrary_EJoyImageFormats();
	UPackage* Z_Construct_UPackage__Script_VictoryBPLibrary();
	VICTORYBPLIBRARY_API UClass* Z_Construct_UClass_UVictoryBPFunctionLibrary_NoRegister();
	VICTORYBPLIBRARY_API UClass* Z_Construct_UClass_UVictoryBPFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_ASceneCapture2D_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
// End Cross Module References
	static UEnum* EJoyImageFormats_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VictoryBPLibrary_EJoyImageFormats, Z_Construct_UPackage__Script_VictoryBPLibrary(), TEXT("EJoyImageFormats"));
		}
		return Singleton;
	}
	template<> VICTORYBPLIBRARY_API UEnum* StaticEnum<EJoyImageFormats>()
	{
		return EJoyImageFormats_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EJoyImageFormats(EJoyImageFormats_StaticEnum, TEXT("/Script/VictoryBPLibrary"), TEXT("EJoyImageFormats"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VictoryBPLibrary_EJoyImageFormats_Hash() { return 3701086139U; }
	UEnum* Z_Construct_UEnum_VictoryBPLibrary_EJoyImageFormats()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VictoryBPLibrary();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EJoyImageFormats"), 0, Get_Z_Construct_UEnum_VictoryBPLibrary_EJoyImageFormats_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UECodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "JPG", (int64)JPG },
				{ "PNG", (int64)PNG },
				{ "BMP", (int64)BMP },
				{ "ICO", (int64)ICO },
				{ "EXR", (int64)EXR },
				{ "ICNS", (int64)ICNS },
				{ "JoyImageFormats_Max", (int64)JoyImageFormats_Max },
			};
#if WITH_METADATA
			const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "BMP.DisplayName", "BMP        " },
				{ "BMP.Name", "BMP" },
				{ "EXR.DisplayName", "EXR        " },
				{ "EXR.Name", "EXR" },
				{ "ICNS.DisplayName", "ICNS        " },
				{ "ICNS.Name", "ICNS" },
				{ "ICO.DisplayName", "ICO        " },
				{ "ICO.Name", "ICO" },
				{ "JoyImageFormats_Max.Hidden", "" },
				{ "JoyImageFormats_Max.Name", "JoyImageFormats_Max" },
				{ "JPG.Comment", "/**\n\x09 * Example of a comment inside a custom enum <3 Rama\n\x09 * @see FWalkableSlopeOverride::WalkableSlopeAngle\n\x09 */" },
				{ "JPG.DisplayName", "JPG        " },
				{ "JPG.Name", "JPG" },
				{ "JPG.ToolTip", "Example of a comment inside a custom enum <3 Rama\n@see FWalkableSlopeOverride::WalkableSlopeAngle" },
				{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
				{ "PNG.DisplayName", "PNG        " },
				{ "PNG.Name", "PNG" },
			};
#endif
			static const UECodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VictoryBPLibrary,
				nullptr,
				"EJoyImageFormats",
				"EJoyImageFormats",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UECodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UECodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execFlashGameOnTaskBar)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PC);
		P_GET_UBOOL(Z_Param_FlashContinuous);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxFlashCount);
		P_GET_PROPERTY(FIntProperty,Z_Param_FlashFrequencyMilliseconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVictoryBPFunctionLibrary::FlashGameOnTaskBar(Z_Param_PC,Z_Param_FlashContinuous,Z_Param_MaxFlashCount,Z_Param_FlashFrequencyMilliseconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execGetClosestActorOfClassInRadiusOfActor)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UClass,Z_Param_ActorClass);
		P_GET_OBJECT(AActor,Z_Param_ActorCenter);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_UBOOL_REF(Z_Param_Out_IsValid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=UVictoryBPFunctionLibrary::GetClosestActorOfClassInRadiusOfActor(Z_Param_WorldContextObject,Z_Param_ActorClass,Z_Param_ActorCenter,Z_Param_Radius,Z_Param_Out_IsValid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execGetClosestActorOfClassInRadiusOfLocation)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UClass,Z_Param_ActorClass);
		P_GET_STRUCT(FVector,Z_Param_Center);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_UBOOL_REF(Z_Param_Out_IsValid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=UVictoryBPFunctionLibrary::GetClosestActorOfClassInRadiusOfLocation(Z_Param_WorldContextObject,Z_Param_ActorClass,Z_Param_Center,Z_Param_Radius,Z_Param_Out_IsValid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execVictoryCreateProc)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_ProcessId);
		P_GET_PROPERTY(FStrProperty,Z_Param_FullPathOfProgramToRun);
		P_GET_TARRAY(FString,Z_Param_CommandlineArgs);
		P_GET_UBOOL(Z_Param_Detach);
		P_GET_UBOOL(Z_Param_Hidden);
		P_GET_PROPERTY(FIntProperty,Z_Param_Priority);
		P_GET_PROPERTY(FStrProperty,Z_Param_OptionalWorkingDirectory);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVictoryBPFunctionLibrary::VictoryCreateProc(Z_Param_Out_ProcessId,Z_Param_FullPathOfProgramToRun,Z_Param_CommandlineArgs,Z_Param_Detach,Z_Param_Hidden,Z_Param_Priority,Z_Param_OptionalWorkingDirectory);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execClientWindow__GameWindowIsForeGroundInOS)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::ClientWindow__GameWindowIsForeGroundInOS();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execVictory_SaveStringToOSClipboard)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ToClipboard);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVictoryBPFunctionLibrary::Victory_SaveStringToOSClipboard(Z_Param_ToClipboard);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execVictory_GetStringFromOSClipboard)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_FromClipboard);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVictoryBPFunctionLibrary::Victory_GetStringFromOSClipboard(Z_Param_Out_FromClipboard);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execVictory_GetFilesInRootAndAllSubFolders)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_Files);
		P_GET_PROPERTY(FStrProperty,Z_Param_RootFolderFullPath);
		P_GET_PROPERTY(FStrProperty,Z_Param_Ext);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::Victory_GetFilesInRootAndAllSubFolders(Z_Param_Out_Files,Z_Param_RootFolderFullPath,Z_Param_Ext);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execVictory_GetFiles)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_Files);
		P_GET_PROPERTY(FStrProperty,Z_Param_RootFolderFullPath);
		P_GET_PROPERTY(FStrProperty,Z_Param_Ext);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::Victory_GetFiles(Z_Param_Out_Files,Z_Param_RootFolderFullPath,Z_Param_Ext);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execVictory_SetTimeStamp)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_File);
		P_GET_STRUCT_REF(FDateTime,Z_Param_Out_TimeStamp);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVictoryBPFunctionLibrary::Victory_SetTimeStamp(Z_Param_File,Z_Param_Out_TimeStamp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execVictory_GetFileTimeStamp)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_File);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDateTime*)Z_Param__Result=UVictoryBPFunctionLibrary::Victory_GetFileTimeStamp(Z_Param_File);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execViewportPositionDeproject)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_ViewportPosition);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutWorldOrigin);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutWorldDirection);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::ViewportPositionDeproject(Z_Param_WorldContextObject,Z_Param_Out_ViewportPosition,Z_Param_Out_OutWorldOrigin,Z_Param_Out_OutWorldDirection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execAppendMultiple)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_A);
		P_GET_PROPERTY(FStrProperty,Z_Param_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UVictoryBPFunctionLibrary::AppendMultiple(Z_Param_A,Z_Param_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execGetAllBoneNamesBelowBone)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_SkeletalMeshComp);
		P_GET_PROPERTY(FNameProperty,Z_Param_StartingBoneName);
		P_GET_TARRAY_REF(FName,Z_Param_Out_BoneNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UVictoryBPFunctionLibrary::GetAllBoneNamesBelowBone(Z_Param_SkeletalMeshComp,Z_Param_StartingBoneName,Z_Param_Out_BoneNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execCapture2D_SaveImage)
	{
		P_GET_OBJECT(ASceneCapture2D,Z_Param_Target);
		P_GET_PROPERTY(FStrProperty,Z_Param_ImagePath);
		P_GET_STRUCT(FLinearColor,Z_Param_ClearColour);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::Capture2D_SaveImage(Z_Param_Target,Z_Param_ImagePath,Z_Param_ClearColour);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execCaptureComponent2D_SaveImage)
	{
		P_GET_OBJECT(USceneCaptureComponent2D,Z_Param_Target);
		P_GET_PROPERTY(FStrProperty,Z_Param_ImagePath);
		P_GET_STRUCT(FLinearColor,Z_Param_ClearColour);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::CaptureComponent2D_SaveImage(Z_Param_Target,Z_Param_ImagePath,Z_Param_ClearColour);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execCapture2D_Project)
	{
		P_GET_OBJECT(ASceneCapture2D,Z_Param_Target);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_OutPixelLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::Capture2D_Project(Z_Param_Target,Z_Param_Location,Z_Param_Out_OutPixelLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execCaptureComponent2D_Project)
	{
		P_GET_OBJECT(USceneCaptureComponent2D,Z_Param_Target);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_OutPixelLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::CaptureComponent2D_Project(Z_Param_Target,Z_Param_Location,Z_Param_Out_OutPixelLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execVictory_LoadTexture2D_FromFileByExtension)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FullFilePath);
		P_GET_UBOOL_REF(Z_Param_Out_IsValid);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Width);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Height);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=UVictoryBPFunctionLibrary::Victory_LoadTexture2D_FromFileByExtension(Z_Param_FullFilePath,Z_Param_Out_IsValid,Z_Param_Out_Width,Z_Param_Out_Height);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execVictory_LoadTexture2D_FromFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FullFilePath);
		P_GET_PROPERTY(FByteProperty,Z_Param_ImageFormat);
		P_GET_UBOOL_REF(Z_Param_Out_IsValid);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Width);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Height);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=UVictoryBPFunctionLibrary::Victory_LoadTexture2D_FromFile(Z_Param_FullFilePath,EJoyImageFormats(Z_Param_ImageFormat),Z_Param_Out_IsValid,Z_Param_Out_Width,Z_Param_Out_Height);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execWidgetGetParentOfClass)
	{
		P_GET_OBJECT(UWidget,Z_Param_ChildWidget);
		P_GET_OBJECT(UClass,Z_Param_WidgetClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUserWidget**)Z_Param__Result=UVictoryBPFunctionLibrary::WidgetGetParentOfClass(Z_Param_ChildWidget,Z_Param_WidgetClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execWidgetGetChildrenOfClass)
	{
		P_GET_OBJECT(UWidget,Z_Param_ParentWidget);
		P_GET_TARRAY_REF(UUserWidget*,Z_Param_Out_ChildWidgets);
		P_GET_OBJECT(UClass,Z_Param_WidgetClass);
		P_GET_UBOOL(Z_Param_bImmediateOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVictoryBPFunctionLibrary::WidgetGetChildrenOfClass(Z_Param_ParentWidget,Z_Param_Out_ChildWidgets,Z_Param_WidgetClass,Z_Param_bImmediateOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execGetFirstWidgetOfClass)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UClass,Z_Param_WidgetClass);
		P_GET_UBOOL(Z_Param_TopLevelOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUserWidget**)Z_Param__Result=UVictoryBPFunctionLibrary::GetFirstWidgetOfClass(Z_Param_WorldContextObject,Z_Param_WidgetClass,Z_Param_TopLevelOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execVictorySortStringArray)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_StringArray);
		P_GET_TARRAY_REF(FString,Z_Param_Out_StringArrayRef);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVictoryBPFunctionLibrary::VictorySortStringArray(Z_Param_Out_StringArray,Z_Param_Out_StringArrayRef);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execVictorySortFloatArray)
	{
		P_GET_TARRAY_REF(float,Z_Param_Out_FloatArray);
		P_GET_TARRAY_REF(float,Z_Param_Out_FloatArrayRef);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVictoryBPFunctionLibrary::VictorySortFloatArray(Z_Param_Out_FloatArray,Z_Param_Out_FloatArrayRef);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execVictorySortIntArray)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_IntArray);
		P_GET_TARRAY_REF(int32,Z_Param_Out_IntArrayRef);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVictoryBPFunctionLibrary::VictorySortIntArray(Z_Param_Out_IntArray,Z_Param_Out_IntArrayRef);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execVictoryFloatMinusEquals)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Float);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Sub);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_FloatOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVictoryBPFunctionLibrary::VictoryFloatMinusEquals(Z_Param_Out_Float,Z_Param_Sub,Z_Param_Out_FloatOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execVictoryFloatPlusEquals)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Float);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Add);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_FloatOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVictoryBPFunctionLibrary::VictoryFloatPlusEquals(Z_Param_Out_Float,Z_Param_Add,Z_Param_Out_FloatOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execVictoryIntMinusEquals)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Int);
		P_GET_PROPERTY(FIntProperty,Z_Param_Sub);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_IntOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVictoryBPFunctionLibrary::VictoryIntMinusEquals(Z_Param_Out_Int,Z_Param_Sub,Z_Param_Out_IntOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execVictoryIntPlusEquals)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Int);
		P_GET_PROPERTY(FIntProperty,Z_Param_Add);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_IntOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVictoryBPFunctionLibrary::VictoryIntPlusEquals(Z_Param_Out_Int,Z_Param_Add,Z_Param_Out_IntOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execGetObjectPath)
	{
		P_GET_OBJECT(UObject,Z_Param_Obj);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UVictoryBPFunctionLibrary::GetObjectPath(Z_Param_Obj);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execLoadObjectFromAssetPath)
	{
		P_GET_OBJECT(UClass,Z_Param_ObjectClass);
		P_GET_PROPERTY(FNameProperty,Z_Param_Path);
		P_GET_UBOOL_REF(Z_Param_Out_IsValid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=UVictoryBPFunctionLibrary::LoadObjectFromAssetPath(Z_Param_ObjectClass,Z_Param_Path,Z_Param_Out_IsValid);
		P_NATIVE_END;
	}
	void UVictoryBPFunctionLibrary::StaticRegisterNativesUVictoryBPFunctionLibrary()
	{
		UClass* Class = UVictoryBPFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AppendMultiple", &UVictoryBPFunctionLibrary::execAppendMultiple },
			{ "Capture2D_Project", &UVictoryBPFunctionLibrary::execCapture2D_Project },
			{ "Capture2D_SaveImage", &UVictoryBPFunctionLibrary::execCapture2D_SaveImage },
			{ "CaptureComponent2D_Project", &UVictoryBPFunctionLibrary::execCaptureComponent2D_Project },
			{ "CaptureComponent2D_SaveImage", &UVictoryBPFunctionLibrary::execCaptureComponent2D_SaveImage },
			{ "ClientWindow__GameWindowIsForeGroundInOS", &UVictoryBPFunctionLibrary::execClientWindow__GameWindowIsForeGroundInOS },
			{ "FlashGameOnTaskBar", &UVictoryBPFunctionLibrary::execFlashGameOnTaskBar },
			{ "GetAllBoneNamesBelowBone", &UVictoryBPFunctionLibrary::execGetAllBoneNamesBelowBone },
			{ "GetClosestActorOfClassInRadiusOfActor", &UVictoryBPFunctionLibrary::execGetClosestActorOfClassInRadiusOfActor },
			{ "GetClosestActorOfClassInRadiusOfLocation", &UVictoryBPFunctionLibrary::execGetClosestActorOfClassInRadiusOfLocation },
			{ "GetFirstWidgetOfClass", &UVictoryBPFunctionLibrary::execGetFirstWidgetOfClass },
			{ "GetObjectPath", &UVictoryBPFunctionLibrary::execGetObjectPath },
			{ "LoadObjectFromAssetPath", &UVictoryBPFunctionLibrary::execLoadObjectFromAssetPath },
			{ "Victory_GetFiles", &UVictoryBPFunctionLibrary::execVictory_GetFiles },
			{ "Victory_GetFilesInRootAndAllSubFolders", &UVictoryBPFunctionLibrary::execVictory_GetFilesInRootAndAllSubFolders },
			{ "Victory_GetFileTimeStamp", &UVictoryBPFunctionLibrary::execVictory_GetFileTimeStamp },
			{ "Victory_GetStringFromOSClipboard", &UVictoryBPFunctionLibrary::execVictory_GetStringFromOSClipboard },
			{ "Victory_LoadTexture2D_FromFile", &UVictoryBPFunctionLibrary::execVictory_LoadTexture2D_FromFile },
			{ "Victory_LoadTexture2D_FromFileByExtension", &UVictoryBPFunctionLibrary::execVictory_LoadTexture2D_FromFileByExtension },
			{ "Victory_SaveStringToOSClipboard", &UVictoryBPFunctionLibrary::execVictory_SaveStringToOSClipboard },
			{ "Victory_SetTimeStamp", &UVictoryBPFunctionLibrary::execVictory_SetTimeStamp },
			{ "VictoryCreateProc", &UVictoryBPFunctionLibrary::execVictoryCreateProc },
			{ "VictoryFloatMinusEquals", &UVictoryBPFunctionLibrary::execVictoryFloatMinusEquals },
			{ "VictoryFloatPlusEquals", &UVictoryBPFunctionLibrary::execVictoryFloatPlusEquals },
			{ "VictoryIntMinusEquals", &UVictoryBPFunctionLibrary::execVictoryIntMinusEquals },
			{ "VictoryIntPlusEquals", &UVictoryBPFunctionLibrary::execVictoryIntPlusEquals },
			{ "VictorySortFloatArray", &UVictoryBPFunctionLibrary::execVictorySortFloatArray },
			{ "VictorySortIntArray", &UVictoryBPFunctionLibrary::execVictorySortIntArray },
			{ "VictorySortStringArray", &UVictoryBPFunctionLibrary::execVictorySortStringArray },
			{ "ViewportPositionDeproject", &UVictoryBPFunctionLibrary::execViewportPositionDeproject },
			{ "WidgetGetChildrenOfClass", &UVictoryBPFunctionLibrary::execWidgetGetChildrenOfClass },
			{ "WidgetGetParentOfClass", &UVictoryBPFunctionLibrary::execWidgetGetParentOfClass },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_AppendMultiple_Statics
	{
		struct VictoryBPFunctionLibrary_eventAppendMultiple_Parms
		{
			FString A;
			FString B;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_A;
		static const UECodeGen_Private::FStrPropertyParams NewProp_B;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_AppendMultiple_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventAppendMultiple_Parms, A), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_AppendMultiple_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventAppendMultiple_Parms, B), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_AppendMultiple_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventAppendMultiple_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_AppendMultiple_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_AppendMultiple_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_AppendMultiple_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_AppendMultiple_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_AppendMultiple_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|String" },
		{ "Comment", "/* Addition of strings (A + B) with pins. Contributed by KeyToTruth */" },
		{ "CommutativeAssociativeBinaryOperator", "true" },
		{ "DisplayName", "Append Multiple" },
		{ "Keywords", "concatenate combine append strings" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "Addition of strings (A + B) with pins. Contributed by KeyToTruth" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_AppendMultiple_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "AppendMultiple", nullptr, nullptr, sizeof(VictoryBPFunctionLibrary_eventAppendMultiple_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_AppendMultiple_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_AppendMultiple_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_AppendMultiple_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_AppendMultiple_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_AppendMultiple()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_AppendMultiple_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_Project_Statics
	{
		struct VictoryBPFunctionLibrary_eventCapture2D_Project_Parms
		{
			ASceneCapture2D* Target;
			FVector Location;
			FVector2D OutPixelLocation;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPixelLocation;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_Project_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventCapture2D_Project_Parms, Target), Z_Construct_UClass_ASceneCapture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_Project_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventCapture2D_Project_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_Project_Statics::NewProp_OutPixelLocation = { "OutPixelLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventCapture2D_Project_Parms, OutPixelLocation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_Project_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VictoryBPFunctionLibrary_eventCapture2D_Project_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_Project_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VictoryBPFunctionLibrary_eventCapture2D_Project_Parms), &Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_Project_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_Project_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_Project_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_Project_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_Project_Statics::NewProp_OutPixelLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_Project_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_Project_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|SceneCapture" },
		{ "Comment", "/** Contributed by Community Member Kris! */" },
		{ "DefaultToSelf", "Target" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "Contributed by Community Member Kris!" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_Project_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "Capture2D_Project", nullptr, nullptr, sizeof(VictoryBPFunctionLibrary_eventCapture2D_Project_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_Project_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_Project_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_Project_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_Project_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_Project()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_Project_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_SaveImage_Statics
	{
		struct VictoryBPFunctionLibrary_eventCapture2D_SaveImage_Parms
		{
			ASceneCapture2D* Target;
			FString ImagePath;
			FLinearColor ClearColour;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImagePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ImagePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClearColour_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClearColour;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_SaveImage_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventCapture2D_SaveImage_Parms, Target), Z_Construct_UClass_ASceneCapture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_SaveImage_Statics::NewProp_ImagePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_SaveImage_Statics::NewProp_ImagePath = { "ImagePath", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventCapture2D_SaveImage_Parms, ImagePath), METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_SaveImage_Statics::NewProp_ImagePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_SaveImage_Statics::NewProp_ImagePath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_SaveImage_Statics::NewProp_ClearColour_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_SaveImage_Statics::NewProp_ClearColour = { "ClearColour", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventCapture2D_SaveImage_Parms, ClearColour), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_SaveImage_Statics::NewProp_ClearColour_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_SaveImage_Statics::NewProp_ClearColour_MetaData)) };
	void Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_SaveImage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VictoryBPFunctionLibrary_eventCapture2D_SaveImage_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_SaveImage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VictoryBPFunctionLibrary_eventCapture2D_SaveImage_Parms), &Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_SaveImage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_SaveImage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_SaveImage_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_SaveImage_Statics::NewProp_ImagePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_SaveImage_Statics::NewProp_ClearColour,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_SaveImage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_SaveImage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|SceneCapture" },
		{ "Comment", "/** \n\x09\x09I highly recommend that your Texture Render Target Format be \"RTF RGB8 SRGB\" both so it is compatible, and so it looks the same as in-game \n\x09\x09\x09<3 Rama. \n\x09\x09\x09\n\x09\x09Make sure to include the appropriate image extension in your file path! Recommended: .bmp, .jpg, .png. Contributed by Community Member Kris! \n\x09*/" },
		{ "DefaultToSelf", "Target" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "I highly recommend that your Texture Render Target Format be \"RTF RGB8 SRGB\" both so it is compatible, and so it looks the same as in-game\n        <3 Rama.\n\nMake sure to include the appropriate image extension in your file path! Recommended: .bmp, .jpg, .png. Contributed by Community Member Kris!" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_SaveImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "Capture2D_SaveImage", nullptr, nullptr, sizeof(VictoryBPFunctionLibrary_eventCapture2D_SaveImage_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_SaveImage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_SaveImage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_SaveImage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_SaveImage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_SaveImage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_SaveImage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_Project_Statics
	{
		struct VictoryBPFunctionLibrary_eventCaptureComponent2D_Project_Parms
		{
			USceneCaptureComponent2D* Target;
			FVector Location;
			FVector2D OutPixelLocation;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPixelLocation;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_Project_Statics::NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_Project_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventCaptureComponent2D_Project_Parms, Target), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_Project_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_Project_Statics::NewProp_Target_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_Project_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventCaptureComponent2D_Project_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_Project_Statics::NewProp_OutPixelLocation = { "OutPixelLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventCaptureComponent2D_Project_Parms, OutPixelLocation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_Project_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VictoryBPFunctionLibrary_eventCaptureComponent2D_Project_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_Project_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VictoryBPFunctionLibrary_eventCaptureComponent2D_Project_Parms), &Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_Project_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_Project_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_Project_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_Project_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_Project_Statics::NewProp_OutPixelLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_Project_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_Project_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|SceneCapture" },
		{ "Comment", "/** Contributed by Community Member Kris! */" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "Contributed by Community Member Kris!" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_Project_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "CaptureComponent2D_Project", nullptr, nullptr, sizeof(VictoryBPFunctionLibrary_eventCaptureComponent2D_Project_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_Project_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_Project_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_Project_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_Project_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_Project()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_Project_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_SaveImage_Statics
	{
		struct VictoryBPFunctionLibrary_eventCaptureComponent2D_SaveImage_Parms
		{
			USceneCaptureComponent2D* Target;
			FString ImagePath;
			FLinearColor ClearColour;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImagePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ImagePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClearColour_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClearColour;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_SaveImage_Statics::NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_SaveImage_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventCaptureComponent2D_SaveImage_Parms, Target), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_SaveImage_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_SaveImage_Statics::NewProp_Target_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_SaveImage_Statics::NewProp_ImagePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_SaveImage_Statics::NewProp_ImagePath = { "ImagePath", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventCaptureComponent2D_SaveImage_Parms, ImagePath), METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_SaveImage_Statics::NewProp_ImagePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_SaveImage_Statics::NewProp_ImagePath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_SaveImage_Statics::NewProp_ClearColour_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_SaveImage_Statics::NewProp_ClearColour = { "ClearColour", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventCaptureComponent2D_SaveImage_Parms, ClearColour), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_SaveImage_Statics::NewProp_ClearColour_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_SaveImage_Statics::NewProp_ClearColour_MetaData)) };
	void Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_SaveImage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VictoryBPFunctionLibrary_eventCaptureComponent2D_SaveImage_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_SaveImage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VictoryBPFunctionLibrary_eventCaptureComponent2D_SaveImage_Parms), &Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_SaveImage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_SaveImage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_SaveImage_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_SaveImage_Statics::NewProp_ImagePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_SaveImage_Statics::NewProp_ClearColour,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_SaveImage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_SaveImage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|SceneCapture" },
		{ "Comment", "/** \n\x09\x09I highly recommend that your Texture Render Target Format be \"RTF RGB8 SRGB\" both so it is compatible, and so it looks the same as in-game \n\x09\x09\x09<3 Rama. \n\x09\x09\x09\n\x09\x09Make sure to include the appropriate image extension in your file path! Recommended: .bmp, .jpg, .png. Contributed by Community Member Kris! \n\x09*/" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "I highly recommend that your Texture Render Target Format be \"RTF RGB8 SRGB\" both so it is compatible, and so it looks the same as in-game\n        <3 Rama.\n\nMake sure to include the appropriate image extension in your file path! Recommended: .bmp, .jpg, .png. Contributed by Community Member Kris!" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_SaveImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "CaptureComponent2D_SaveImage", nullptr, nullptr, sizeof(VictoryBPFunctionLibrary_eventCaptureComponent2D_SaveImage_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_SaveImage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_SaveImage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_SaveImage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_SaveImage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_SaveImage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_SaveImage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_ClientWindow__GameWindowIsForeGroundInOS_Statics
	{
		struct VictoryBPFunctionLibrary_eventClientWindow__GameWindowIsForeGroundInOS_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVictoryBPFunctionLibrary_ClientWindow__GameWindowIsForeGroundInOS_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VictoryBPFunctionLibrary_eventClientWindow__GameWindowIsForeGroundInOS_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_ClientWindow__GameWindowIsForeGroundInOS_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VictoryBPFunctionLibrary_eventClientWindow__GameWindowIsForeGroundInOS_Parms), &Z_Construct_UFunction_UVictoryBPFunctionLibrary_ClientWindow__GameWindowIsForeGroundInOS_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_ClientWindow__GameWindowIsForeGroundInOS_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_ClientWindow__GameWindowIsForeGroundInOS_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_ClientWindow__GameWindowIsForeGroundInOS_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|Game Window" },
		{ "Comment", "/** Is the Current Game Window the Foreground window in the OS, or in the Editor? This will be accurate in standalone running of the game as well as in the editor PIE */" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "Is the Current Game Window the Foreground window in the OS, or in the Editor? This will be accurate in standalone running of the game as well as in the editor PIE" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_ClientWindow__GameWindowIsForeGroundInOS_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "ClientWindow__GameWindowIsForeGroundInOS", nullptr, nullptr, sizeof(VictoryBPFunctionLibrary_eventClientWindow__GameWindowIsForeGroundInOS_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_ClientWindow__GameWindowIsForeGroundInOS_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_ClientWindow__GameWindowIsForeGroundInOS_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_ClientWindow__GameWindowIsForeGroundInOS_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_ClientWindow__GameWindowIsForeGroundInOS_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_ClientWindow__GameWindowIsForeGroundInOS()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_ClientWindow__GameWindowIsForeGroundInOS_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_FlashGameOnTaskBar_Statics
	{
		struct VictoryBPFunctionLibrary_eventFlashGameOnTaskBar_Parms
		{
			APlayerController* PC;
			bool FlashContinuous;
			int32 MaxFlashCount;
			int32 FlashFrequencyMilliseconds;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PC;
		static void NewProp_FlashContinuous_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_FlashContinuous;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxFlashCount;
		static const UECodeGen_Private::FIntPropertyParams NewProp_FlashFrequencyMilliseconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_FlashGameOnTaskBar_Statics::NewProp_PC = { "PC", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventFlashGameOnTaskBar_Parms, PC), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVictoryBPFunctionLibrary_FlashGameOnTaskBar_Statics::NewProp_FlashContinuous_SetBit(void* Obj)
	{
		((VictoryBPFunctionLibrary_eventFlashGameOnTaskBar_Parms*)Obj)->FlashContinuous = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_FlashGameOnTaskBar_Statics::NewProp_FlashContinuous = { "FlashContinuous", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VictoryBPFunctionLibrary_eventFlashGameOnTaskBar_Parms), &Z_Construct_UFunction_UVictoryBPFunctionLibrary_FlashGameOnTaskBar_Statics::NewProp_FlashContinuous_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_FlashGameOnTaskBar_Statics::NewProp_MaxFlashCount = { "MaxFlashCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventFlashGameOnTaskBar_Parms, MaxFlashCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_FlashGameOnTaskBar_Statics::NewProp_FlashFrequencyMilliseconds = { "FlashFrequencyMilliseconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventFlashGameOnTaskBar_Parms, FlashFrequencyMilliseconds), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_FlashGameOnTaskBar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_FlashGameOnTaskBar_Statics::NewProp_PC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_FlashGameOnTaskBar_Statics::NewProp_FlashContinuous,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_FlashGameOnTaskBar_Statics::NewProp_MaxFlashCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_FlashGameOnTaskBar_Statics::NewProp_FlashFrequencyMilliseconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_FlashGameOnTaskBar_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|Game Window" },
		{ "Comment", "/** Flashes the game on the windows OS task bar! Please note this won't look the best in PIE, flashing is smoother in Standalone or packaged game. You can use GameWindowIsForeGroundInOS to see if there is a need to get the user's attention! <3 Rama */" },
		{ "CPP_Default_FlashContinuous", "false" },
		{ "CPP_Default_FlashFrequencyMilliseconds", "500" },
		{ "CPP_Default_MaxFlashCount", "3" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "Flashes the game on the windows OS task bar! Please note this won't look the best in PIE, flashing is smoother in Standalone or packaged game. You can use GameWindowIsForeGroundInOS to see if there is a need to get the user's attention! <3 Rama" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_FlashGameOnTaskBar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "FlashGameOnTaskBar", nullptr, nullptr, sizeof(VictoryBPFunctionLibrary_eventFlashGameOnTaskBar_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_FlashGameOnTaskBar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_FlashGameOnTaskBar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_FlashGameOnTaskBar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_FlashGameOnTaskBar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_FlashGameOnTaskBar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_FlashGameOnTaskBar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetAllBoneNamesBelowBone_Statics
	{
		struct VictoryBPFunctionLibrary_eventGetAllBoneNamesBelowBone_Parms
		{
			USkeletalMeshComponent* SkeletalMeshComp;
			FName StartingBoneName;
			TArray<FName> BoneNames;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_StartingBoneName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneNames_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneNames;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetAllBoneNamesBelowBone_Statics::NewProp_SkeletalMeshComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetAllBoneNamesBelowBone_Statics::NewProp_SkeletalMeshComp = { "SkeletalMeshComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventGetAllBoneNamesBelowBone_Parms, SkeletalMeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetAllBoneNamesBelowBone_Statics::NewProp_SkeletalMeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetAllBoneNamesBelowBone_Statics::NewProp_SkeletalMeshComp_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetAllBoneNamesBelowBone_Statics::NewProp_StartingBoneName = { "StartingBoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventGetAllBoneNamesBelowBone_Parms, StartingBoneName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetAllBoneNamesBelowBone_Statics::NewProp_BoneNames_Inner = { "BoneNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetAllBoneNamesBelowBone_Statics::NewProp_BoneNames = { "BoneNames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventGetAllBoneNamesBelowBone_Parms, BoneNames), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetAllBoneNamesBelowBone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventGetAllBoneNamesBelowBone_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetAllBoneNamesBelowBone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetAllBoneNamesBelowBone_Statics::NewProp_SkeletalMeshComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetAllBoneNamesBelowBone_Statics::NewProp_StartingBoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetAllBoneNamesBelowBone_Statics::NewProp_BoneNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetAllBoneNamesBelowBone_Statics::NewProp_BoneNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetAllBoneNamesBelowBone_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetAllBoneNamesBelowBone_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|Components|SkinnedMesh" },
		{ "Comment", "/**\n\x09 * Get All Bone Names Below Bone, requires a physics asset, by Rama\n\x09 *\n\x09 * @param StartingBoneName The name of the bone to find all bones below.\n\x09 *\n\x09 * @param BoneNames , all of the bone names below the starting bone.\n\x09 *\n\x09 * @return total number of bones found\n\x09 */" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "Get All Bone Names Below Bone, requires a physics asset, by Rama\n\n@param StartingBoneName The name of the bone to find all bones below.\n\n@param BoneNames , all of the bone names below the starting bone.\n\n@return total number of bones found" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetAllBoneNamesBelowBone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "GetAllBoneNamesBelowBone", nullptr, nullptr, sizeof(VictoryBPFunctionLibrary_eventGetAllBoneNamesBelowBone_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetAllBoneNamesBelowBone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetAllBoneNamesBelowBone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetAllBoneNamesBelowBone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetAllBoneNamesBelowBone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetAllBoneNamesBelowBone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetAllBoneNamesBelowBone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfActor_Statics
	{
		struct VictoryBPFunctionLibrary_eventGetClosestActorOfClassInRadiusOfActor_Parms
		{
			UObject* WorldContextObject;
			TSubclassOf<AActor>  ActorClass;
			AActor* ActorCenter;
			float Radius;
			bool IsValid;
			AActor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorCenter;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static void NewProp_IsValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsValid;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfActor_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventGetClosestActorOfClassInRadiusOfActor_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfActor_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventGetClosestActorOfClassInRadiusOfActor_Parms, ActorClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfActor_Statics::NewProp_ActorCenter = { "ActorCenter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventGetClosestActorOfClassInRadiusOfActor_Parms, ActorCenter), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfActor_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventGetClosestActorOfClassInRadiusOfActor_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfActor_Statics::NewProp_IsValid_SetBit(void* Obj)
	{
		((VictoryBPFunctionLibrary_eventGetClosestActorOfClassInRadiusOfActor_Parms*)Obj)->IsValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfActor_Statics::NewProp_IsValid = { "IsValid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VictoryBPFunctionLibrary_eventGetClosestActorOfClassInRadiusOfActor_Parms), &Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfActor_Statics::NewProp_IsValid_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventGetClosestActorOfClassInRadiusOfActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfActor_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfActor_Statics::NewProp_ActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfActor_Statics::NewProp_ActorCenter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfActor_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfActor_Statics::NewProp_IsValid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|AI" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "GetClosestActorOfClassInRadiusOfActor", nullptr, nullptr, sizeof(VictoryBPFunctionLibrary_eventGetClosestActorOfClassInRadiusOfActor_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfLocation_Statics
	{
		struct VictoryBPFunctionLibrary_eventGetClosestActorOfClassInRadiusOfLocation_Parms
		{
			UObject* WorldContextObject;
			TSubclassOf<AActor>  ActorClass;
			FVector Center;
			float Radius;
			bool IsValid;
			AActor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static void NewProp_IsValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsValid;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfLocation_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventGetClosestActorOfClassInRadiusOfLocation_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfLocation_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventGetClosestActorOfClassInRadiusOfLocation_Parms, ActorClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfLocation_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventGetClosestActorOfClassInRadiusOfLocation_Parms, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfLocation_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventGetClosestActorOfClassInRadiusOfLocation_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfLocation_Statics::NewProp_IsValid_SetBit(void* Obj)
	{
		((VictoryBPFunctionLibrary_eventGetClosestActorOfClassInRadiusOfLocation_Parms*)Obj)->IsValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfLocation_Statics::NewProp_IsValid = { "IsValid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VictoryBPFunctionLibrary_eventGetClosestActorOfClassInRadiusOfLocation_Parms), &Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfLocation_Statics::NewProp_IsValid_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventGetClosestActorOfClassInRadiusOfLocation_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfLocation_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfLocation_Statics::NewProp_ActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfLocation_Statics::NewProp_Center,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfLocation_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfLocation_Statics::NewProp_IsValid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|AI" },
		{ "Comment", "//~~~~~~~~~~~~~~\n// \x09    AI\n//~~~~~~~~~~~~~~\n" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "AI" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "GetClosestActorOfClassInRadiusOfLocation", nullptr, nullptr, sizeof(VictoryBPFunctionLibrary_eventGetClosestActorOfClassInRadiusOfLocation_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetFirstWidgetOfClass_Statics
	{
		struct VictoryBPFunctionLibrary_eventGetFirstWidgetOfClass_Parms
		{
			UObject* WorldContextObject;
			TSubclassOf<UUserWidget>  WidgetClass;
			bool TopLevelOnly;
			UUserWidget* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FClassPropertyParams NewProp_WidgetClass;
		static void NewProp_TopLevelOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_TopLevelOnly;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetFirstWidgetOfClass_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventGetFirstWidgetOfClass_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetFirstWidgetOfClass_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventGetFirstWidgetOfClass_Parms, WidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetFirstWidgetOfClass_Statics::NewProp_TopLevelOnly_SetBit(void* Obj)
	{
		((VictoryBPFunctionLibrary_eventGetFirstWidgetOfClass_Parms*)Obj)->TopLevelOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetFirstWidgetOfClass_Statics::NewProp_TopLevelOnly = { "TopLevelOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VictoryBPFunctionLibrary_eventGetFirstWidgetOfClass_Parms), &Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetFirstWidgetOfClass_Statics::NewProp_TopLevelOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetFirstWidgetOfClass_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetFirstWidgetOfClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventGetFirstWidgetOfClass_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetFirstWidgetOfClass_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetFirstWidgetOfClass_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetFirstWidgetOfClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetFirstWidgetOfClass_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetFirstWidgetOfClass_Statics::NewProp_WidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetFirstWidgetOfClass_Statics::NewProp_TopLevelOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetFirstWidgetOfClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetFirstWidgetOfClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|UMG" },
		{ "Comment", "/**\n\x09 * Find first widget of a certain class and return it.\n\x09 * @param WidgetClass The widget class to filter by.\n\x09 * @param TopLevelOnly Only a widget that is a direct child of the viewport will be returned.\n\x09 */" },
		{ "DeterminesOutputType", "WidgetClass" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "Find first widget of a certain class and return it.\n@param WidgetClass The widget class to filter by.\n@param TopLevelOnly Only a widget that is a direct child of the viewport will be returned." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetFirstWidgetOfClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "GetFirstWidgetOfClass", nullptr, nullptr, sizeof(VictoryBPFunctionLibrary_eventGetFirstWidgetOfClass_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetFirstWidgetOfClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetFirstWidgetOfClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetFirstWidgetOfClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetFirstWidgetOfClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetFirstWidgetOfClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetFirstWidgetOfClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetObjectPath_Statics
	{
		struct VictoryBPFunctionLibrary_eventGetObjectPath_Parms
		{
			UObject* Obj;
			FName ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Obj;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetObjectPath_Statics::NewProp_Obj = { "Obj", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventGetObjectPath_Parms, Obj), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetObjectPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventGetObjectPath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetObjectPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetObjectPath_Statics::NewProp_Obj,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetObjectPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetObjectPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|Misc" },
		{ "Comment", "/** Uses the same format as I use for LoadObjectFromAssetPath! Use this node to get the asset path of objects in the world! -Rama */" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "Uses the same format as I use for LoadObjectFromAssetPath! Use this node to get the asset path of objects in the world! -Rama" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetObjectPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "GetObjectPath", nullptr, nullptr, sizeof(VictoryBPFunctionLibrary_eventGetObjectPath_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetObjectPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetObjectPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetObjectPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetObjectPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetObjectPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetObjectPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadObjectFromAssetPath_Statics
	{
		struct VictoryBPFunctionLibrary_eventLoadObjectFromAssetPath_Parms
		{
			TSubclassOf<UObject>  ObjectClass;
			FName Path;
			bool IsValid;
			UObject* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_ObjectClass;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Path;
		static void NewProp_IsValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsValid;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadObjectFromAssetPath_Statics::NewProp_ObjectClass = { "ObjectClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventLoadObjectFromAssetPath_Parms, ObjectClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadObjectFromAssetPath_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventLoadObjectFromAssetPath_Parms, Path), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadObjectFromAssetPath_Statics::NewProp_IsValid_SetBit(void* Obj)
	{
		((VictoryBPFunctionLibrary_eventLoadObjectFromAssetPath_Parms*)Obj)->IsValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadObjectFromAssetPath_Statics::NewProp_IsValid = { "IsValid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VictoryBPFunctionLibrary_eventLoadObjectFromAssetPath_Parms), &Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadObjectFromAssetPath_Statics::NewProp_IsValid_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadObjectFromAssetPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventLoadObjectFromAssetPath_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadObjectFromAssetPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadObjectFromAssetPath_Statics::NewProp_ObjectClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadObjectFromAssetPath_Statics::NewProp_Path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadObjectFromAssetPath_Statics::NewProp_IsValid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadObjectFromAssetPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadObjectFromAssetPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|Misc" },
		{ "Comment", "/** The FName that is expected is the exact same format as when you right click on asset -> Copy Reference! You can directly paste copied references into this node! IsValid lets you know if the path was correct or not and I was able to load the object. MAKE SURE TO SAVE THE RETURNED OBJECT AS A VARIABLE. Otherwise your shiny new asset will get garbage collected. I recommend you cast the return value to the appropriate object and then promote it to a variable :)  -Rama */" },
		{ "DeterminesOutputType", "ObjectClass" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "The FName that is expected is the exact same format as when you right click on asset -> Copy Reference! You can directly paste copied references into this node! IsValid lets you know if the path was correct or not and I was able to load the object. MAKE SURE TO SAVE THE RETURNED OBJECT AS A VARIABLE. Otherwise your shiny new asset will get garbage collected. I recommend you cast the return value to the appropriate object and then promote it to a variable :)  -Rama" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadObjectFromAssetPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "LoadObjectFromAssetPath", nullptr, nullptr, sizeof(VictoryBPFunctionLibrary_eventLoadObjectFromAssetPath_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadObjectFromAssetPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadObjectFromAssetPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadObjectFromAssetPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadObjectFromAssetPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadObjectFromAssetPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadObjectFromAssetPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFiles_Statics
	{
		struct VictoryBPFunctionLibrary_eventVictory_GetFiles_Parms
		{
			TArray<FString> Files;
			FString RootFolderFullPath;
			FString Ext;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Files_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Files;
		static const UECodeGen_Private::FStrPropertyParams NewProp_RootFolderFullPath;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Ext;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFiles_Statics::NewProp_Files_Inner = { "Files", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFiles_Statics::NewProp_Files = { "Files", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictory_GetFiles_Parms, Files), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFiles_Statics::NewProp_RootFolderFullPath = { "RootFolderFullPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictory_GetFiles_Parms, RootFolderFullPath), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFiles_Statics::NewProp_Ext = { "Ext", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictory_GetFiles_Parms, Ext), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFiles_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VictoryBPFunctionLibrary_eventVictory_GetFiles_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFiles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VictoryBPFunctionLibrary_eventVictory_GetFiles_Parms), &Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFiles_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFiles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFiles_Statics::NewProp_Files_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFiles_Statics::NewProp_Files,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFiles_Statics::NewProp_RootFolderFullPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFiles_Statics::NewProp_Ext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFiles_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFiles_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|File IO" },
		{ "Comment", "/** Obtain all files in a provided directory, with optional extension filter. All files are returned if Ext is left blank. Returns false if operation could not occur. */" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "Obtain all files in a provided directory, with optional extension filter. All files are returned if Ext is left blank. Returns false if operation could not occur." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "Victory_GetFiles", nullptr, nullptr, sizeof(VictoryBPFunctionLibrary_eventVictory_GetFiles_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFiles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFiles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFiles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFilesInRootAndAllSubFolders_Statics
	{
		struct VictoryBPFunctionLibrary_eventVictory_GetFilesInRootAndAllSubFolders_Parms
		{
			TArray<FString> Files;
			FString RootFolderFullPath;
			FString Ext;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Files_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Files;
		static const UECodeGen_Private::FStrPropertyParams NewProp_RootFolderFullPath;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Ext;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFilesInRootAndAllSubFolders_Statics::NewProp_Files_Inner = { "Files", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFilesInRootAndAllSubFolders_Statics::NewProp_Files = { "Files", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictory_GetFilesInRootAndAllSubFolders_Parms, Files), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFilesInRootAndAllSubFolders_Statics::NewProp_RootFolderFullPath = { "RootFolderFullPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictory_GetFilesInRootAndAllSubFolders_Parms, RootFolderFullPath), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFilesInRootAndAllSubFolders_Statics::NewProp_Ext = { "Ext", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictory_GetFilesInRootAndAllSubFolders_Parms, Ext), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFilesInRootAndAllSubFolders_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VictoryBPFunctionLibrary_eventVictory_GetFilesInRootAndAllSubFolders_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFilesInRootAndAllSubFolders_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VictoryBPFunctionLibrary_eventVictory_GetFilesInRootAndAllSubFolders_Parms), &Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFilesInRootAndAllSubFolders_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFilesInRootAndAllSubFolders_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFilesInRootAndAllSubFolders_Statics::NewProp_Files_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFilesInRootAndAllSubFolders_Statics::NewProp_Files,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFilesInRootAndAllSubFolders_Statics::NewProp_RootFolderFullPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFilesInRootAndAllSubFolders_Statics::NewProp_Ext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFilesInRootAndAllSubFolders_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFilesInRootAndAllSubFolders_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|File IO" },
		{ "Comment", "/** Obtain all files in a provided root directory, including all subdirectories, with optional extension filter. All files are returned if Ext is left blank. The full file path is returned because the file could be in any subdirectory. Returns false if operation could not occur. */" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "Obtain all files in a provided root directory, including all subdirectories, with optional extension filter. All files are returned if Ext is left blank. The full file path is returned because the file could be in any subdirectory. Returns false if operation could not occur." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFilesInRootAndAllSubFolders_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "Victory_GetFilesInRootAndAllSubFolders", nullptr, nullptr, sizeof(VictoryBPFunctionLibrary_eventVictory_GetFilesInRootAndAllSubFolders_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFilesInRootAndAllSubFolders_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFilesInRootAndAllSubFolders_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFilesInRootAndAllSubFolders_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFilesInRootAndAllSubFolders_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFilesInRootAndAllSubFolders()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFilesInRootAndAllSubFolders_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFileTimeStamp_Statics
	{
		struct VictoryBPFunctionLibrary_eventVictory_GetFileTimeStamp_Parms
		{
			FString File;
			FDateTime ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_File_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_File;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFileTimeStamp_Statics::NewProp_File_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFileTimeStamp_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictory_GetFileTimeStamp_Parms, File), METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFileTimeStamp_Statics::NewProp_File_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFileTimeStamp_Statics::NewProp_File_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFileTimeStamp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictory_GetFileTimeStamp_Parms, ReturnValue), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFileTimeStamp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFileTimeStamp_Statics::NewProp_File,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFileTimeStamp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFileTimeStamp_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|File IO" },
		{ "Comment", "//~~~~~~~~~~~~\n// \x09""File I/O\n//~~~~~~~~~~~~\n" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "File I/O" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFileTimeStamp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "Victory_GetFileTimeStamp", nullptr, nullptr, sizeof(VictoryBPFunctionLibrary_eventVictory_GetFileTimeStamp_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFileTimeStamp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFileTimeStamp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFileTimeStamp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFileTimeStamp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFileTimeStamp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFileTimeStamp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetStringFromOSClipboard_Statics
	{
		struct VictoryBPFunctionLibrary_eventVictory_GetStringFromOSClipboard_Parms
		{
			FString FromClipboard;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_FromClipboard;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetStringFromOSClipboard_Statics::NewProp_FromClipboard = { "FromClipboard", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictory_GetStringFromOSClipboard_Parms, FromClipboard), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetStringFromOSClipboard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetStringFromOSClipboard_Statics::NewProp_FromClipboard,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetStringFromOSClipboard_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|String" },
		{ "Comment", "//~~~~~~~~~~\n// \x09OS\n//~~~~~~~~~~\n" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "OS" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetStringFromOSClipboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "Victory_GetStringFromOSClipboard", nullptr, nullptr, sizeof(VictoryBPFunctionLibrary_eventVictory_GetStringFromOSClipboard_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetStringFromOSClipboard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetStringFromOSClipboard_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetStringFromOSClipboard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetStringFromOSClipboard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetStringFromOSClipboard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetStringFromOSClipboard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Statics
	{
		struct VictoryBPFunctionLibrary_eventVictory_LoadTexture2D_FromFile_Parms
		{
			FString FullFilePath;
			TEnumAsByte<EJoyImageFormats> ImageFormat;
			bool IsValid;
			int32 Width;
			int32 Height;
			UTexture2D* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FullFilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FullFilePath;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ImageFormat;
		static void NewProp_IsValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsValid;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Statics::NewProp_FullFilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Statics::NewProp_FullFilePath = { "FullFilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictory_LoadTexture2D_FromFile_Parms, FullFilePath), METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Statics::NewProp_FullFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Statics::NewProp_FullFilePath_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Statics::NewProp_ImageFormat = { "ImageFormat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictory_LoadTexture2D_FromFile_Parms, ImageFormat), Z_Construct_UEnum_VictoryBPLibrary_EJoyImageFormats, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Statics::NewProp_IsValid_SetBit(void* Obj)
	{
		((VictoryBPFunctionLibrary_eventVictory_LoadTexture2D_FromFile_Parms*)Obj)->IsValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Statics::NewProp_IsValid = { "IsValid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VictoryBPFunctionLibrary_eventVictory_LoadTexture2D_FromFile_Parms), &Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Statics::NewProp_IsValid_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictory_LoadTexture2D_FromFile_Parms, Width), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictory_LoadTexture2D_FromFile_Parms, Height), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictory_LoadTexture2D_FromFile_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Statics::NewProp_FullFilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Statics::NewProp_ImageFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Statics::NewProp_IsValid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Statics::NewProp_Width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Statics::NewProp_Height,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|Load Texture From File" },
		{ "Comment", "/** Load a Texture2D from a JPG,PNG,BMP,ICO,EXR,ICNS file! IsValid tells you if file path was valid or not. Enjoy! -Rama */" },
		{ "Keywords", "image png jpg jpeg bmp bitmap ico icon exr icns" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "Load a Texture2D from a JPG,PNG,BMP,ICO,EXR,ICNS file! IsValid tells you if file path was valid or not. Enjoy! -Rama" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "Victory_LoadTexture2D_FromFile", nullptr, nullptr, sizeof(VictoryBPFunctionLibrary_eventVictory_LoadTexture2D_FromFile_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFileByExtension_Statics
	{
		struct VictoryBPFunctionLibrary_eventVictory_LoadTexture2D_FromFileByExtension_Parms
		{
			FString FullFilePath;
			bool IsValid;
			int32 Width;
			int32 Height;
			UTexture2D* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FullFilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FullFilePath;
		static void NewProp_IsValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsValid;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFileByExtension_Statics::NewProp_FullFilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFileByExtension_Statics::NewProp_FullFilePath = { "FullFilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictory_LoadTexture2D_FromFileByExtension_Parms, FullFilePath), METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFileByExtension_Statics::NewProp_FullFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFileByExtension_Statics::NewProp_FullFilePath_MetaData)) };
	void Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFileByExtension_Statics::NewProp_IsValid_SetBit(void* Obj)
	{
		((VictoryBPFunctionLibrary_eventVictory_LoadTexture2D_FromFileByExtension_Parms*)Obj)->IsValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFileByExtension_Statics::NewProp_IsValid = { "IsValid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VictoryBPFunctionLibrary_eventVictory_LoadTexture2D_FromFileByExtension_Parms), &Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFileByExtension_Statics::NewProp_IsValid_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFileByExtension_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictory_LoadTexture2D_FromFileByExtension_Parms, Width), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFileByExtension_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictory_LoadTexture2D_FromFileByExtension_Parms, Height), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFileByExtension_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictory_LoadTexture2D_FromFileByExtension_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFileByExtension_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFileByExtension_Statics::NewProp_FullFilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFileByExtension_Statics::NewProp_IsValid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFileByExtension_Statics::NewProp_Width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFileByExtension_Statics::NewProp_Height,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFileByExtension_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFileByExtension_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|Load Texture From File" },
		{ "Comment", "/** Load a Texture2D from a JPG,PNG,BMP,ICO,EXR,ICNS file! IsValid tells you if file path was valid or not. The image type is assumed from an extension such as .jpg, .png, .bmp. Enjoy! -Rama */" },
		{ "Keywords", "image png jpg jpeg bmp bitmap ico icon exr icns" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "Load a Texture2D from a JPG,PNG,BMP,ICO,EXR,ICNS file! IsValid tells you if file path was valid or not. The image type is assumed from an extension such as .jpg, .png, .bmp. Enjoy! -Rama" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFileByExtension_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "Victory_LoadTexture2D_FromFileByExtension", nullptr, nullptr, sizeof(VictoryBPFunctionLibrary_eventVictory_LoadTexture2D_FromFileByExtension_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFileByExtension_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFileByExtension_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFileByExtension_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFileByExtension_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFileByExtension()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFileByExtension_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SaveStringToOSClipboard_Statics
	{
		struct VictoryBPFunctionLibrary_eventVictory_SaveStringToOSClipboard_Parms
		{
			FString ToClipboard;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToClipboard_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ToClipboard;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SaveStringToOSClipboard_Statics::NewProp_ToClipboard_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SaveStringToOSClipboard_Statics::NewProp_ToClipboard = { "ToClipboard", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictory_SaveStringToOSClipboard_Parms, ToClipboard), METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SaveStringToOSClipboard_Statics::NewProp_ToClipboard_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SaveStringToOSClipboard_Statics::NewProp_ToClipboard_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SaveStringToOSClipboard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SaveStringToOSClipboard_Statics::NewProp_ToClipboard,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SaveStringToOSClipboard_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|String" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SaveStringToOSClipboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "Victory_SaveStringToOSClipboard", nullptr, nullptr, sizeof(VictoryBPFunctionLibrary_eventVictory_SaveStringToOSClipboard_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SaveStringToOSClipboard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SaveStringToOSClipboard_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SaveStringToOSClipboard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SaveStringToOSClipboard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SaveStringToOSClipboard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SaveStringToOSClipboard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SetTimeStamp_Statics
	{
		struct VictoryBPFunctionLibrary_eventVictory_SetTimeStamp_Parms
		{
			FString File;
			FDateTime TimeStamp;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_File_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_File;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeStamp_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TimeStamp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SetTimeStamp_Statics::NewProp_File_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SetTimeStamp_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictory_SetTimeStamp_Parms, File), METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SetTimeStamp_Statics::NewProp_File_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SetTimeStamp_Statics::NewProp_File_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SetTimeStamp_Statics::NewProp_TimeStamp_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SetTimeStamp_Statics::NewProp_TimeStamp = { "TimeStamp", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictory_SetTimeStamp_Parms, TimeStamp), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SetTimeStamp_Statics::NewProp_TimeStamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SetTimeStamp_Statics::NewProp_TimeStamp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SetTimeStamp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SetTimeStamp_Statics::NewProp_File,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SetTimeStamp_Statics::NewProp_TimeStamp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SetTimeStamp_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|File IO" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SetTimeStamp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "Victory_SetTimeStamp", nullptr, nullptr, sizeof(VictoryBPFunctionLibrary_eventVictory_SetTimeStamp_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SetTimeStamp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SetTimeStamp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SetTimeStamp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SetTimeStamp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SetTimeStamp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SetTimeStamp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryCreateProc_Statics
	{
		struct VictoryBPFunctionLibrary_eventVictoryCreateProc_Parms
		{
			int32 ProcessId;
			FString FullPathOfProgramToRun;
			TArray<FString> CommandlineArgs;
			bool Detach;
			bool Hidden;
			int32 Priority;
			FString OptionalWorkingDirectory;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ProcessId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FullPathOfProgramToRun;
		static const UECodeGen_Private::FStrPropertyParams NewProp_CommandlineArgs_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CommandlineArgs;
		static void NewProp_Detach_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Detach;
		static void NewProp_Hidden_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Hidden;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OptionalWorkingDirectory;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryCreateProc_Statics::NewProp_ProcessId = { "ProcessId", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictoryCreateProc_Parms, ProcessId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryCreateProc_Statics::NewProp_FullPathOfProgramToRun = { "FullPathOfProgramToRun", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictoryCreateProc_Parms, FullPathOfProgramToRun), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryCreateProc_Statics::NewProp_CommandlineArgs_Inner = { "CommandlineArgs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryCreateProc_Statics::NewProp_CommandlineArgs = { "CommandlineArgs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictoryCreateProc_Parms, CommandlineArgs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryCreateProc_Statics::NewProp_Detach_SetBit(void* Obj)
	{
		((VictoryBPFunctionLibrary_eventVictoryCreateProc_Parms*)Obj)->Detach = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryCreateProc_Statics::NewProp_Detach = { "Detach", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VictoryBPFunctionLibrary_eventVictoryCreateProc_Parms), &Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryCreateProc_Statics::NewProp_Detach_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryCreateProc_Statics::NewProp_Hidden_SetBit(void* Obj)
	{
		((VictoryBPFunctionLibrary_eventVictoryCreateProc_Parms*)Obj)->Hidden = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryCreateProc_Statics::NewProp_Hidden = { "Hidden", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VictoryBPFunctionLibrary_eventVictoryCreateProc_Parms), &Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryCreateProc_Statics::NewProp_Hidden_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryCreateProc_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictoryCreateProc_Parms, Priority), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryCreateProc_Statics::NewProp_OptionalWorkingDirectory = { "OptionalWorkingDirectory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictoryCreateProc_Parms, OptionalWorkingDirectory), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryCreateProc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryCreateProc_Statics::NewProp_ProcessId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryCreateProc_Statics::NewProp_FullPathOfProgramToRun,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryCreateProc_Statics::NewProp_CommandlineArgs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryCreateProc_Statics::NewProp_CommandlineArgs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryCreateProc_Statics::NewProp_Detach,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryCreateProc_Statics::NewProp_Hidden,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryCreateProc_Statics::NewProp_Priority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryCreateProc_Statics::NewProp_OptionalWorkingDirectory,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryCreateProc_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|System" },
		{ "Comment", "/**\n\x09\x09Launch a new process, if it is not set to be detached, UE4 will not fully close until the other process completes.\n\n\x09\x09The new process id is returned!\n\n\x09\x09Priority options: -2 idle, -1 low, 0 normal, 1 high, 2 higher\n\n\x09\x09\xe2\x99\xa5 Rama\n\x09*/" },
		{ "CPP_Default_OptionalWorkingDirectory", "" },
		{ "CPP_Default_Priority", "0" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "Launch a new process, if it is not set to be detached, UE4 will not fully close until the other process completes.\n\nThe new process id is returned!\n\nPriority options: -2 idle, -1 low, 0 normal, 1 high, 2 higher\n\n\xe2\x99\xa5 Rama" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryCreateProc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "VictoryCreateProc", nullptr, nullptr, sizeof(VictoryBPFunctionLibrary_eventVictoryCreateProc_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryCreateProc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryCreateProc_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryCreateProc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryCreateProc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryCreateProc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryCreateProc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryFloatMinusEquals_Statics
	{
		struct VictoryBPFunctionLibrary_eventVictoryFloatMinusEquals_Parms
		{
			float Float;
			float Sub;
			float FloatOut;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Float;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Sub;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatOut;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryFloatMinusEquals_Statics::NewProp_Float = { "Float", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictoryFloatMinusEquals_Parms, Float), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryFloatMinusEquals_Statics::NewProp_Sub = { "Sub", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictoryFloatMinusEquals_Parms, Sub), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryFloatMinusEquals_Statics::NewProp_FloatOut = { "FloatOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictoryFloatMinusEquals_Parms, FloatOut), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryFloatMinusEquals_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryFloatMinusEquals_Statics::NewProp_Float,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryFloatMinusEquals_Statics::NewProp_Sub,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryFloatMinusEquals_Statics::NewProp_FloatOut,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryFloatMinusEquals_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|Math|Float" },
		{ "Comment", "/** Easily subtract from a float! <3 Rama*/" },
		{ "CompactNodeTitle", "-=" },
		{ "Keywords", "decrement float" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "Easily subtract from a float! <3 Rama" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryFloatMinusEquals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "VictoryFloatMinusEquals", nullptr, nullptr, sizeof(VictoryBPFunctionLibrary_eventVictoryFloatMinusEquals_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryFloatMinusEquals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryFloatMinusEquals_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryFloatMinusEquals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryFloatMinusEquals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryFloatMinusEquals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryFloatMinusEquals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryFloatPlusEquals_Statics
	{
		struct VictoryBPFunctionLibrary_eventVictoryFloatPlusEquals_Parms
		{
			float Float;
			float Add;
			float FloatOut;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Float;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Add;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatOut;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryFloatPlusEquals_Statics::NewProp_Float = { "Float", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictoryFloatPlusEquals_Parms, Float), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryFloatPlusEquals_Statics::NewProp_Add = { "Add", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictoryFloatPlusEquals_Parms, Add), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryFloatPlusEquals_Statics::NewProp_FloatOut = { "FloatOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictoryFloatPlusEquals_Parms, FloatOut), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryFloatPlusEquals_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryFloatPlusEquals_Statics::NewProp_Float,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryFloatPlusEquals_Statics::NewProp_Add,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryFloatPlusEquals_Statics::NewProp_FloatOut,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryFloatPlusEquals_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|Math|Float" },
		{ "Comment", "/** Easily add to a float! <3 Rama*/" },
		{ "CompactNodeTitle", "+=" },
		{ "Keywords", "increment float" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "Easily add to a float! <3 Rama" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryFloatPlusEquals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "VictoryFloatPlusEquals", nullptr, nullptr, sizeof(VictoryBPFunctionLibrary_eventVictoryFloatPlusEquals_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryFloatPlusEquals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryFloatPlusEquals_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryFloatPlusEquals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryFloatPlusEquals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryFloatPlusEquals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryFloatPlusEquals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryIntMinusEquals_Statics
	{
		struct VictoryBPFunctionLibrary_eventVictoryIntMinusEquals_Parms
		{
			int32 Int;
			int32 Sub;
			int32 IntOut;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Int;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Sub;
		static const UECodeGen_Private::FIntPropertyParams NewProp_IntOut;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryIntMinusEquals_Statics::NewProp_Int = { "Int", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictoryIntMinusEquals_Parms, Int), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryIntMinusEquals_Statics::NewProp_Sub = { "Sub", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictoryIntMinusEquals_Parms, Sub), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryIntMinusEquals_Statics::NewProp_IntOut = { "IntOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictoryIntMinusEquals_Parms, IntOut), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryIntMinusEquals_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryIntMinusEquals_Statics::NewProp_Int,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryIntMinusEquals_Statics::NewProp_Sub,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryIntMinusEquals_Statics::NewProp_IntOut,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryIntMinusEquals_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|Math|Integer" },
		{ "Comment", "/** Easily subtract from an integer! <3 Rama*/" },
		{ "CompactNodeTitle", "-=" },
		{ "Keywords", "decrement integer" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "Easily subtract from an integer! <3 Rama" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryIntMinusEquals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "VictoryIntMinusEquals", nullptr, nullptr, sizeof(VictoryBPFunctionLibrary_eventVictoryIntMinusEquals_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryIntMinusEquals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryIntMinusEquals_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryIntMinusEquals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryIntMinusEquals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryIntMinusEquals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryIntMinusEquals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryIntPlusEquals_Statics
	{
		struct VictoryBPFunctionLibrary_eventVictoryIntPlusEquals_Parms
		{
			int32 Int;
			int32 Add;
			int32 IntOut;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Int;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Add;
		static const UECodeGen_Private::FIntPropertyParams NewProp_IntOut;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryIntPlusEquals_Statics::NewProp_Int = { "Int", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictoryIntPlusEquals_Parms, Int), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryIntPlusEquals_Statics::NewProp_Add = { "Add", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictoryIntPlusEquals_Parms, Add), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryIntPlusEquals_Statics::NewProp_IntOut = { "IntOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictoryIntPlusEquals_Parms, IntOut), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryIntPlusEquals_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryIntPlusEquals_Statics::NewProp_Int,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryIntPlusEquals_Statics::NewProp_Add,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryIntPlusEquals_Statics::NewProp_IntOut,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryIntPlusEquals_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|Math|Integer" },
		{ "Comment", "/** Easily add to an integer! <3 Rama*/" },
		{ "CompactNodeTitle", "+=" },
		{ "Keywords", "increment integer" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "Easily add to an integer! <3 Rama" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryIntPlusEquals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "VictoryIntPlusEquals", nullptr, nullptr, sizeof(VictoryBPFunctionLibrary_eventVictoryIntPlusEquals_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryIntPlusEquals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryIntPlusEquals_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryIntPlusEquals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryIntPlusEquals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryIntPlusEquals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryIntPlusEquals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortFloatArray_Statics
	{
		struct VictoryBPFunctionLibrary_eventVictorySortFloatArray_Parms
		{
			TArray<float> FloatArray;
			TArray<float> FloatArrayRef;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FloatArray;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatArrayRef_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FloatArrayRef;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortFloatArray_Statics::NewProp_FloatArray_Inner = { "FloatArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortFloatArray_Statics::NewProp_FloatArray = { "FloatArray", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictorySortFloatArray_Parms, FloatArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortFloatArray_Statics::NewProp_FloatArrayRef_Inner = { "FloatArrayRef", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortFloatArray_Statics::NewProp_FloatArrayRef = { "FloatArrayRef", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictorySortFloatArray_Parms, FloatArrayRef), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortFloatArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortFloatArray_Statics::NewProp_FloatArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortFloatArray_Statics::NewProp_FloatArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortFloatArray_Statics::NewProp_FloatArrayRef_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortFloatArray_Statics::NewProp_FloatArrayRef,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortFloatArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|Array" },
		{ "Comment", "/** Sort a float array, smallest value will be at index 0 after sorting. Modifies the input array, no new data created. */" },
		{ "Keywords", "sort float array" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "Sort a float array, smallest value will be at index 0 after sorting. Modifies the input array, no new data created." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortFloatArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "VictorySortFloatArray", nullptr, nullptr, sizeof(VictoryBPFunctionLibrary_eventVictorySortFloatArray_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortFloatArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortFloatArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortFloatArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortFloatArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortFloatArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortFloatArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortIntArray_Statics
	{
		struct VictoryBPFunctionLibrary_eventVictorySortIntArray_Parms
		{
			TArray<int32> IntArray;
			TArray<int32> IntArrayRef;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_IntArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IntArray;
		static const UECodeGen_Private::FIntPropertyParams NewProp_IntArrayRef_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IntArrayRef;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortIntArray_Statics::NewProp_IntArray_Inner = { "IntArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortIntArray_Statics::NewProp_IntArray = { "IntArray", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictorySortIntArray_Parms, IntArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortIntArray_Statics::NewProp_IntArrayRef_Inner = { "IntArrayRef", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortIntArray_Statics::NewProp_IntArrayRef = { "IntArrayRef", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictorySortIntArray_Parms, IntArrayRef), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortIntArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortIntArray_Statics::NewProp_IntArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortIntArray_Statics::NewProp_IntArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortIntArray_Statics::NewProp_IntArrayRef_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortIntArray_Statics::NewProp_IntArrayRef,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortIntArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|Array" },
		{ "Comment", "/** Sort an integer array, smallest value will be at index 0 after sorting. Modifies the input array, no new data created. <3 Rama */" },
		{ "Keywords", "sort integer array" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "Sort an integer array, smallest value will be at index 0 after sorting. Modifies the input array, no new data created. <3 Rama" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortIntArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "VictorySortIntArray", nullptr, nullptr, sizeof(VictoryBPFunctionLibrary_eventVictorySortIntArray_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortIntArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortIntArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortIntArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortIntArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortIntArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortIntArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortStringArray_Statics
	{
		struct VictoryBPFunctionLibrary_eventVictorySortStringArray_Parms
		{
			TArray<FString> StringArray;
			TArray<FString> StringArrayRef;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StringArray;
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringArrayRef_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StringArrayRef;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortStringArray_Statics::NewProp_StringArray_Inner = { "StringArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortStringArray_Statics::NewProp_StringArray = { "StringArray", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictorySortStringArray_Parms, StringArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortStringArray_Statics::NewProp_StringArrayRef_Inner = { "StringArrayRef", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortStringArray_Statics::NewProp_StringArrayRef = { "StringArrayRef", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictorySortStringArray_Parms, StringArrayRef), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortStringArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortStringArray_Statics::NewProp_StringArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortStringArray_Statics::NewProp_StringArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortStringArray_Statics::NewProp_StringArrayRef_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortStringArray_Statics::NewProp_StringArrayRef,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortStringArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|Array" },
		{ "Comment", "/** Sort a string array alphabetically! */" },
		{ "Keywords", "sort string array" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "Sort a string array alphabetically!" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortStringArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "VictorySortStringArray", nullptr, nullptr, sizeof(VictoryBPFunctionLibrary_eventVictorySortStringArray_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortStringArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortStringArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortStringArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortStringArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortStringArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortStringArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_ViewportPositionDeproject_Statics
	{
		struct VictoryBPFunctionLibrary_eventViewportPositionDeproject_Parms
		{
			UObject* WorldContextObject;
			FVector2D ViewportPosition;
			FVector OutWorldOrigin;
			FVector OutWorldDirection;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewportPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ViewportPosition;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutWorldOrigin;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutWorldDirection;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_ViewportPositionDeproject_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventViewportPositionDeproject_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_ViewportPositionDeproject_Statics::NewProp_ViewportPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_ViewportPositionDeproject_Statics::NewProp_ViewportPosition = { "ViewportPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventViewportPositionDeproject_Parms, ViewportPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_ViewportPositionDeproject_Statics::NewProp_ViewportPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_ViewportPositionDeproject_Statics::NewProp_ViewportPosition_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_ViewportPositionDeproject_Statics::NewProp_OutWorldOrigin = { "OutWorldOrigin", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventViewportPositionDeproject_Parms, OutWorldOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_ViewportPositionDeproject_Statics::NewProp_OutWorldDirection = { "OutWorldDirection", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventViewportPositionDeproject_Parms, OutWorldDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVictoryBPFunctionLibrary_ViewportPositionDeproject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VictoryBPFunctionLibrary_eventViewportPositionDeproject_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_ViewportPositionDeproject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VictoryBPFunctionLibrary_eventViewportPositionDeproject_Parms), &Z_Construct_UFunction_UVictoryBPFunctionLibrary_ViewportPositionDeproject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_ViewportPositionDeproject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_ViewportPositionDeproject_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_ViewportPositionDeproject_Statics::NewProp_ViewportPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_ViewportPositionDeproject_Statics::NewProp_OutWorldOrigin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_ViewportPositionDeproject_Statics::NewProp_OutWorldDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_ViewportPositionDeproject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_ViewportPositionDeproject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|Game|Viewport" },
		{ "Comment", "/**\n\x09 * Transforms the viewport position into a world space origin and direction.\n\x09 *\n\x09 * @param WorldContextObject\x09World context.\n\x09 * @param ViewportPosition\x09\x09Local space of viewport from GetViewportPosition() or similar.\n\x09 * @param OutWorldOrigin\x09\x09""Corresponding 3D location in world space.\n\x09 * @param OutWorldDirection\x09\x09World space direction vector away from the camera at the given 2d point.\n\x09 *\n\x09 * @return false if something went wrong during the deproject process.\n\x09 */" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "Transforms the viewport position into a world space origin and direction.\n\n@param WorldContextObject    World context.\n@param ViewportPosition              Local space of viewport from GetViewportPosition() or similar.\n@param OutWorldOrigin                Corresponding 3D location in world space.\n@param OutWorldDirection             World space direction vector away from the camera at the given 2d point.\n\n@return false if something went wrong during the deproject process." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_ViewportPositionDeproject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "ViewportPositionDeproject", nullptr, nullptr, sizeof(VictoryBPFunctionLibrary_eventViewportPositionDeproject_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_ViewportPositionDeproject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_ViewportPositionDeproject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_ViewportPositionDeproject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_ViewportPositionDeproject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_ViewportPositionDeproject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_ViewportPositionDeproject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetChildrenOfClass_Statics
	{
		struct VictoryBPFunctionLibrary_eventWidgetGetChildrenOfClass_Parms
		{
			UWidget* ParentWidget;
			TArray<UUserWidget*> ChildWidgets;
			TSubclassOf<UUserWidget>  WidgetClass;
			bool bImmediateOnly;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentWidget;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ChildWidgets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildWidgets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ChildWidgets;
		static const UECodeGen_Private::FClassPropertyParams NewProp_WidgetClass;
		static void NewProp_bImmediateOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImmediateOnly;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetChildrenOfClass_Statics::NewProp_ParentWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetChildrenOfClass_Statics::NewProp_ParentWidget = { "ParentWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventWidgetGetChildrenOfClass_Parms, ParentWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetChildrenOfClass_Statics::NewProp_ParentWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetChildrenOfClass_Statics::NewProp_ParentWidget_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetChildrenOfClass_Statics::NewProp_ChildWidgets_Inner = { "ChildWidgets", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetChildrenOfClass_Statics::NewProp_ChildWidgets_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetChildrenOfClass_Statics::NewProp_ChildWidgets = { "ChildWidgets", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventWidgetGetChildrenOfClass_Parms, ChildWidgets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetChildrenOfClass_Statics::NewProp_ChildWidgets_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetChildrenOfClass_Statics::NewProp_ChildWidgets_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetChildrenOfClass_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventWidgetGetChildrenOfClass_Parms, WidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetChildrenOfClass_Statics::NewProp_bImmediateOnly_SetBit(void* Obj)
	{
		((VictoryBPFunctionLibrary_eventWidgetGetChildrenOfClass_Parms*)Obj)->bImmediateOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetChildrenOfClass_Statics::NewProp_bImmediateOnly = { "bImmediateOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VictoryBPFunctionLibrary_eventWidgetGetChildrenOfClass_Parms), &Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetChildrenOfClass_Statics::NewProp_bImmediateOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetChildrenOfClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetChildrenOfClass_Statics::NewProp_ParentWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetChildrenOfClass_Statics::NewProp_ChildWidgets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetChildrenOfClass_Statics::NewProp_ChildWidgets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetChildrenOfClass_Statics::NewProp_WidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetChildrenOfClass_Statics::NewProp_bImmediateOnly,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetChildrenOfClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|UMG" },
		{ "DefaultToSelf", "ParentWidget" },
		{ "DeterminesOutputType", "WidgetClass" },
		{ "DynamicOutputParam", "ChildWidgets" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetChildrenOfClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "WidgetGetChildrenOfClass", nullptr, nullptr, sizeof(VictoryBPFunctionLibrary_eventWidgetGetChildrenOfClass_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetChildrenOfClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetChildrenOfClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetChildrenOfClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetChildrenOfClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetChildrenOfClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetChildrenOfClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetParentOfClass_Statics
	{
		struct VictoryBPFunctionLibrary_eventWidgetGetParentOfClass_Parms
		{
			UWidget* ChildWidget;
			TSubclassOf<UUserWidget>  WidgetClass;
			UUserWidget* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ChildWidget;
		static const UECodeGen_Private::FClassPropertyParams NewProp_WidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetParentOfClass_Statics::NewProp_ChildWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetParentOfClass_Statics::NewProp_ChildWidget = { "ChildWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventWidgetGetParentOfClass_Parms, ChildWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetParentOfClass_Statics::NewProp_ChildWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetParentOfClass_Statics::NewProp_ChildWidget_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetParentOfClass_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventWidgetGetParentOfClass_Parms, WidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetParentOfClass_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetParentOfClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventWidgetGetParentOfClass_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetParentOfClass_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetParentOfClass_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetParentOfClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetParentOfClass_Statics::NewProp_ChildWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetParentOfClass_Statics::NewProp_WidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetParentOfClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetParentOfClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|UMG" },
		{ "Comment", "/**\n\x09 * Recurses up the list of parents until it finds a widget of WidgetClass.\n\x09 * @return widget that is Parent of ChildWidget that matches WidgetClass.\n\x09 */" },
		{ "DefaultToSelf", "ChildWidget" },
		{ "DeterminesOutputType", "WidgetClass" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "Recurses up the list of parents until it finds a widget of WidgetClass.\n@return widget that is Parent of ChildWidget that matches WidgetClass." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetParentOfClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "WidgetGetParentOfClass", nullptr, nullptr, sizeof(VictoryBPFunctionLibrary_eventWidgetGetParentOfClass_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetParentOfClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetParentOfClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetParentOfClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetParentOfClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetParentOfClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetParentOfClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVictoryBPFunctionLibrary_NoRegister()
	{
		return UVictoryBPFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UVictoryBPFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVictoryBPFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_VictoryBPLibrary,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVictoryBPFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_AppendMultiple, "AppendMultiple" }, // 868357933
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_Project, "Capture2D_Project" }, // 3703890019
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_SaveImage, "Capture2D_SaveImage" }, // 3447402465
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_Project, "CaptureComponent2D_Project" }, // 3125097382
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_SaveImage, "CaptureComponent2D_SaveImage" }, // 2815636882
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_ClientWindow__GameWindowIsForeGroundInOS, "ClientWindow__GameWindowIsForeGroundInOS" }, // 1515937572
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_FlashGameOnTaskBar, "FlashGameOnTaskBar" }, // 2723845248
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetAllBoneNamesBelowBone, "GetAllBoneNamesBelowBone" }, // 3273372793
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfActor, "GetClosestActorOfClassInRadiusOfActor" }, // 550544126
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfLocation, "GetClosestActorOfClassInRadiusOfLocation" }, // 2918561289
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetFirstWidgetOfClass, "GetFirstWidgetOfClass" }, // 3208657453
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetObjectPath, "GetObjectPath" }, // 3332268906
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadObjectFromAssetPath, "LoadObjectFromAssetPath" }, // 3563975109
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFiles, "Victory_GetFiles" }, // 786912162
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFilesInRootAndAllSubFolders, "Victory_GetFilesInRootAndAllSubFolders" }, // 4258263002
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFileTimeStamp, "Victory_GetFileTimeStamp" }, // 1782676682
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetStringFromOSClipboard, "Victory_GetStringFromOSClipboard" }, // 1750434714
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile, "Victory_LoadTexture2D_FromFile" }, // 3886982384
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFileByExtension, "Victory_LoadTexture2D_FromFileByExtension" }, // 421321675
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SaveStringToOSClipboard, "Victory_SaveStringToOSClipboard" }, // 2495937059
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SetTimeStamp, "Victory_SetTimeStamp" }, // 3498140779
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryCreateProc, "VictoryCreateProc" }, // 2269827138
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryFloatMinusEquals, "VictoryFloatMinusEquals" }, // 1875524653
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryFloatPlusEquals, "VictoryFloatPlusEquals" }, // 897456625
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryIntMinusEquals, "VictoryIntMinusEquals" }, // 2324904182
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryIntPlusEquals, "VictoryIntPlusEquals" }, // 2644636265
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortFloatArray, "VictorySortFloatArray" }, // 4027139277
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortIntArray, "VictorySortIntArray" }, // 1308539780
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortStringArray, "VictorySortStringArray" }, // 2540032358
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_ViewportPositionDeproject, "ViewportPositionDeproject" }, // 2029557368
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetChildrenOfClass, "WidgetGetChildrenOfClass" }, // 3743710849
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetParentOfClass, "WidgetGetParentOfClass" }, // 442492125
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVictoryBPFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n\x09Victory to You! <3 Rama\n*/" },
		{ "IncludePath", "VictoryBPFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "Victory to You! <3 Rama" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVictoryBPFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVictoryBPFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVictoryBPFunctionLibrary_Statics::ClassParams = {
		&UVictoryBPFunctionLibrary::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVictoryBPFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVictoryBPFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVictoryBPFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVictoryBPFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVictoryBPFunctionLibrary, 1906114063);
	template<> VICTORYBPLIBRARY_API UClass* StaticClass<UVictoryBPFunctionLibrary>()
	{
		return UVictoryBPFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVictoryBPFunctionLibrary(Z_Construct_UClass_UVictoryBPFunctionLibrary, &UVictoryBPFunctionLibrary::StaticClass, TEXT("/Script/VictoryBPLibrary"), TEXT("UVictoryBPFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVictoryBPFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
