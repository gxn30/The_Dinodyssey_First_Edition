// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class UObject;
class AActor;
struct FVector;
struct FDateTime;
struct FVector2D;
class USkeletalMeshComponent;
class ASceneCapture2D;
struct FLinearColor;
class USceneCaptureComponent2D;
class UTexture2D;
class UWidget;
class UUserWidget;
#ifdef VICTORYBPLIBRARY_VictoryBPFunctionLibrary_generated_h
#error "VictoryBPFunctionLibrary.generated.h already included, missing '#pragma once' in VictoryBPFunctionLibrary.h"
#endif
#define VICTORYBPLIBRARY_VictoryBPFunctionLibrary_generated_h

#define HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_40_SPARSE_DATA
#define HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_40_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFlashGameOnTaskBar); \
	DECLARE_FUNCTION(execGetClosestActorOfClassInRadiusOfActor); \
	DECLARE_FUNCTION(execGetClosestActorOfClassInRadiusOfLocation); \
	DECLARE_FUNCTION(execVictoryCreateProc); \
	DECLARE_FUNCTION(execClientWindow__GameWindowIsForeGroundInOS); \
	DECLARE_FUNCTION(execVictory_SaveStringToOSClipboard); \
	DECLARE_FUNCTION(execVictory_GetStringFromOSClipboard); \
	DECLARE_FUNCTION(execVictory_GetFilesInRootAndAllSubFolders); \
	DECLARE_FUNCTION(execVictory_GetFiles); \
	DECLARE_FUNCTION(execVictory_SetTimeStamp); \
	DECLARE_FUNCTION(execVictory_GetFileTimeStamp); \
	DECLARE_FUNCTION(execViewportPositionDeproject); \
	DECLARE_FUNCTION(execAppendMultiple); \
	DECLARE_FUNCTION(execGetAllBoneNamesBelowBone); \
	DECLARE_FUNCTION(execCapture2D_SaveImage); \
	DECLARE_FUNCTION(execCaptureComponent2D_SaveImage); \
	DECLARE_FUNCTION(execCapture2D_Project); \
	DECLARE_FUNCTION(execCaptureComponent2D_Project); \
	DECLARE_FUNCTION(execVictory_LoadTexture2D_FromFileByExtension); \
	DECLARE_FUNCTION(execVictory_LoadTexture2D_FromFile); \
	DECLARE_FUNCTION(execWidgetGetParentOfClass); \
	DECLARE_FUNCTION(execWidgetGetChildrenOfClass); \
	DECLARE_FUNCTION(execGetFirstWidgetOfClass); \
	DECLARE_FUNCTION(execVictorySortStringArray); \
	DECLARE_FUNCTION(execVictorySortFloatArray); \
	DECLARE_FUNCTION(execVictorySortIntArray); \
	DECLARE_FUNCTION(execVictoryFloatMinusEquals); \
	DECLARE_FUNCTION(execVictoryFloatPlusEquals); \
	DECLARE_FUNCTION(execVictoryIntMinusEquals); \
	DECLARE_FUNCTION(execVictoryIntPlusEquals); \
	DECLARE_FUNCTION(execGetObjectPath); \
	DECLARE_FUNCTION(execLoadObjectFromAssetPath);


#define HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFlashGameOnTaskBar); \
	DECLARE_FUNCTION(execGetClosestActorOfClassInRadiusOfActor); \
	DECLARE_FUNCTION(execGetClosestActorOfClassInRadiusOfLocation); \
	DECLARE_FUNCTION(execVictoryCreateProc); \
	DECLARE_FUNCTION(execClientWindow__GameWindowIsForeGroundInOS); \
	DECLARE_FUNCTION(execVictory_SaveStringToOSClipboard); \
	DECLARE_FUNCTION(execVictory_GetStringFromOSClipboard); \
	DECLARE_FUNCTION(execVictory_GetFilesInRootAndAllSubFolders); \
	DECLARE_FUNCTION(execVictory_GetFiles); \
	DECLARE_FUNCTION(execVictory_SetTimeStamp); \
	DECLARE_FUNCTION(execVictory_GetFileTimeStamp); \
	DECLARE_FUNCTION(execViewportPositionDeproject); \
	DECLARE_FUNCTION(execAppendMultiple); \
	DECLARE_FUNCTION(execGetAllBoneNamesBelowBone); \
	DECLARE_FUNCTION(execCapture2D_SaveImage); \
	DECLARE_FUNCTION(execCaptureComponent2D_SaveImage); \
	DECLARE_FUNCTION(execCapture2D_Project); \
	DECLARE_FUNCTION(execCaptureComponent2D_Project); \
	DECLARE_FUNCTION(execVictory_LoadTexture2D_FromFileByExtension); \
	DECLARE_FUNCTION(execVictory_LoadTexture2D_FromFile); \
	DECLARE_FUNCTION(execWidgetGetParentOfClass); \
	DECLARE_FUNCTION(execWidgetGetChildrenOfClass); \
	DECLARE_FUNCTION(execGetFirstWidgetOfClass); \
	DECLARE_FUNCTION(execVictorySortStringArray); \
	DECLARE_FUNCTION(execVictorySortFloatArray); \
	DECLARE_FUNCTION(execVictorySortIntArray); \
	DECLARE_FUNCTION(execVictoryFloatMinusEquals); \
	DECLARE_FUNCTION(execVictoryFloatPlusEquals); \
	DECLARE_FUNCTION(execVictoryIntMinusEquals); \
	DECLARE_FUNCTION(execVictoryIntPlusEquals); \
	DECLARE_FUNCTION(execGetObjectPath); \
	DECLARE_FUNCTION(execLoadObjectFromAssetPath);


#define HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVictoryBPFunctionLibrary(); \
	friend struct Z_Construct_UClass_UVictoryBPFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UVictoryBPFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VictoryBPLibrary"), NO_API) \
	DECLARE_SERIALIZER(UVictoryBPFunctionLibrary)


#define HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_40_INCLASS \
private: \
	static void StaticRegisterNativesUVictoryBPFunctionLibrary(); \
	friend struct Z_Construct_UClass_UVictoryBPFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UVictoryBPFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VictoryBPLibrary"), NO_API) \
	DECLARE_SERIALIZER(UVictoryBPFunctionLibrary)


#define HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVictoryBPFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVictoryBPFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVictoryBPFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVictoryBPFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVictoryBPFunctionLibrary(UVictoryBPFunctionLibrary&&); \
	NO_API UVictoryBPFunctionLibrary(const UVictoryBPFunctionLibrary&); \
public:


#define HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVictoryBPFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVictoryBPFunctionLibrary(UVictoryBPFunctionLibrary&&); \
	NO_API UVictoryBPFunctionLibrary(const UVictoryBPFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVictoryBPFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVictoryBPFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVictoryBPFunctionLibrary)


#define HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_40_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_37_PROLOG
#define HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_40_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_40_SPARSE_DATA \
	HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_40_RPC_WRAPPERS \
	HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_40_INCLASS \
	HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_40_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_40_SPARSE_DATA \
	HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_40_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_40_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class VictoryBPFunctionLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VICTORYBPLIBRARY_API UClass* StaticClass<class UVictoryBPFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h


#define FOREACH_ENUM_EJOYIMAGEFORMATS(op) \
	op(JPG) \
	op(PNG) \
	op(BMP) \
	op(ICO) \
	op(EXR) \
	op(ICNS) \
	op(JoyImageFormats_Max) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
