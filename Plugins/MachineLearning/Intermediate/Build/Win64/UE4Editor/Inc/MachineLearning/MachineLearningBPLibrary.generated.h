// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MACHINELEARNING_MachineLearningBPLibrary_generated_h
#error "MachineLearningBPLibrary.generated.h already included, missing '#pragma once' in MachineLearningBPLibrary.h"
#endif
#define MACHINELEARNING_MachineLearningBPLibrary_generated_h

#define cppTestProject_Plugins_MachineLearning_Source_MachineLearning_Public_MachineLearningBPLibrary_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMachineLearningSampleFunction) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Param); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UMachineLearningBPLibrary::MachineLearningSampleFunction(Z_Param_Param); \
		P_NATIVE_END; \
	}


#define cppTestProject_Plugins_MachineLearning_Source_MachineLearning_Public_MachineLearningBPLibrary_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMachineLearningSampleFunction) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Param); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UMachineLearningBPLibrary::MachineLearningSampleFunction(Z_Param_Param); \
		P_NATIVE_END; \
	}


#define cppTestProject_Plugins_MachineLearning_Source_MachineLearning_Public_MachineLearningBPLibrary_h_28_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUMachineLearningBPLibrary(); \
	friend MACHINELEARNING_API class UClass* Z_Construct_UClass_UMachineLearningBPLibrary(); \
	public: \
	DECLARE_CLASS(UMachineLearningBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MachineLearning"), NO_API) \
	DECLARE_SERIALIZER(UMachineLearningBPLibrary) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define cppTestProject_Plugins_MachineLearning_Source_MachineLearning_Public_MachineLearningBPLibrary_h_28_INCLASS \
	private: \
	static void StaticRegisterNativesUMachineLearningBPLibrary(); \
	friend MACHINELEARNING_API class UClass* Z_Construct_UClass_UMachineLearningBPLibrary(); \
	public: \
	DECLARE_CLASS(UMachineLearningBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MachineLearning"), NO_API) \
	DECLARE_SERIALIZER(UMachineLearningBPLibrary) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define cppTestProject_Plugins_MachineLearning_Source_MachineLearning_Public_MachineLearningBPLibrary_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMachineLearningBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMachineLearningBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMachineLearningBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMachineLearningBPLibrary); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UMachineLearningBPLibrary(const UMachineLearningBPLibrary& InCopy); \
public:


#define cppTestProject_Plugins_MachineLearning_Source_MachineLearning_Public_MachineLearningBPLibrary_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMachineLearningBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UMachineLearningBPLibrary(const UMachineLearningBPLibrary& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMachineLearningBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMachineLearningBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMachineLearningBPLibrary)


#define cppTestProject_Plugins_MachineLearning_Source_MachineLearning_Public_MachineLearningBPLibrary_h_25_PROLOG
#define cppTestProject_Plugins_MachineLearning_Source_MachineLearning_Public_MachineLearningBPLibrary_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	cppTestProject_Plugins_MachineLearning_Source_MachineLearning_Public_MachineLearningBPLibrary_h_28_RPC_WRAPPERS \
	cppTestProject_Plugins_MachineLearning_Source_MachineLearning_Public_MachineLearningBPLibrary_h_28_INCLASS \
	cppTestProject_Plugins_MachineLearning_Source_MachineLearning_Public_MachineLearningBPLibrary_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define cppTestProject_Plugins_MachineLearning_Source_MachineLearning_Public_MachineLearningBPLibrary_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	cppTestProject_Plugins_MachineLearning_Source_MachineLearning_Public_MachineLearningBPLibrary_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	cppTestProject_Plugins_MachineLearning_Source_MachineLearning_Public_MachineLearningBPLibrary_h_28_INCLASS_NO_PURE_DECLS \
	cppTestProject_Plugins_MachineLearning_Source_MachineLearning_Public_MachineLearningBPLibrary_h_28_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MachineLearningBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID cppTestProject_Plugins_MachineLearning_Source_MachineLearning_Public_MachineLearningBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
