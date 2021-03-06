// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNeuron;
#ifdef MACHINELEARNING_Neuron_generated_h
#error "Neuron.generated.h already included, missing '#pragma once' in Neuron.h"
#endif
#define MACHINELEARNING_Neuron_generated_h

#define cppTestProject_Plugins_MachineLearning_Source_MachineLearning_Public_Neuron_h_49_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetWeight) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetWeight(Z_Param_index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetWeight) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_newWeight); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetWeight(Z_Param_index,Z_Param_newWeight); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateInputWeights) \
	{ \
		P_GET_TARRAY_REF(UNeuron*,Z_Param_Out_PreviousLayer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->UpdateInputWeights(Z_Param_Out_PreviousLayer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalculateHiddenGradients) \
	{ \
		P_GET_TARRAY_REF(UNeuron*,Z_Param_Out_NextLayer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->CalculateHiddenGradients(Z_Param_Out_NextLayer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalculateOutputGradients) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_IncomingValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->CalculateOutputGradients(Z_Param_IncomingValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFeedForward) \
	{ \
		P_GET_TARRAY_REF(UNeuron*,Z_Param_Out_PreviousLayer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->FeedForward(Z_Param_Out_PreviousLayer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOutput) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetOutput(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOutput) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_IncomingValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetOutput(Z_Param_IncomingValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetup) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumberOfOutputs); \
		P_GET_PROPERTY(UIntProperty,Z_Param_IncomingIndex); \
		P_GET_PROPERTY(UByteProperty,Z_Param_IncomingTransferType); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_IncomingNetRate); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_IncomingNetMomentum); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Setup(Z_Param_NumberOfOutputs,Z_Param_IncomingIndex,ETransferType(Z_Param_IncomingTransferType),Z_Param_IncomingNetRate,Z_Param_IncomingNetMomentum); \
		P_NATIVE_END; \
	}


#define cppTestProject_Plugins_MachineLearning_Source_MachineLearning_Public_Neuron_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetWeight) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetWeight(Z_Param_index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetWeight) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_newWeight); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetWeight(Z_Param_index,Z_Param_newWeight); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateInputWeights) \
	{ \
		P_GET_TARRAY_REF(UNeuron*,Z_Param_Out_PreviousLayer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->UpdateInputWeights(Z_Param_Out_PreviousLayer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalculateHiddenGradients) \
	{ \
		P_GET_TARRAY_REF(UNeuron*,Z_Param_Out_NextLayer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->CalculateHiddenGradients(Z_Param_Out_NextLayer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalculateOutputGradients) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_IncomingValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->CalculateOutputGradients(Z_Param_IncomingValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFeedForward) \
	{ \
		P_GET_TARRAY_REF(UNeuron*,Z_Param_Out_PreviousLayer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->FeedForward(Z_Param_Out_PreviousLayer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOutput) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetOutput(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOutput) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_IncomingValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetOutput(Z_Param_IncomingValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetup) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumberOfOutputs); \
		P_GET_PROPERTY(UIntProperty,Z_Param_IncomingIndex); \
		P_GET_PROPERTY(UByteProperty,Z_Param_IncomingTransferType); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_IncomingNetRate); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_IncomingNetMomentum); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Setup(Z_Param_NumberOfOutputs,Z_Param_IncomingIndex,ETransferType(Z_Param_IncomingTransferType),Z_Param_IncomingNetRate,Z_Param_IncomingNetMomentum); \
		P_NATIVE_END; \
	}


#define cppTestProject_Plugins_MachineLearning_Source_MachineLearning_Public_Neuron_h_49_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUNeuron(); \
	friend MACHINELEARNING_API class UClass* Z_Construct_UClass_UNeuron(); \
	public: \
	DECLARE_CLASS(UNeuron, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MachineLearning"), NO_API) \
	DECLARE_SERIALIZER(UNeuron) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define cppTestProject_Plugins_MachineLearning_Source_MachineLearning_Public_Neuron_h_49_INCLASS \
	private: \
	static void StaticRegisterNativesUNeuron(); \
	friend MACHINELEARNING_API class UClass* Z_Construct_UClass_UNeuron(); \
	public: \
	DECLARE_CLASS(UNeuron, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MachineLearning"), NO_API) \
	DECLARE_SERIALIZER(UNeuron) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define cppTestProject_Plugins_MachineLearning_Source_MachineLearning_Public_Neuron_h_49_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNeuron(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNeuron) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNeuron); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNeuron); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UNeuron(const UNeuron& InCopy); \
public:


#define cppTestProject_Plugins_MachineLearning_Source_MachineLearning_Public_Neuron_h_49_ENHANCED_CONSTRUCTORS \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UNeuron(const UNeuron& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNeuron); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNeuron); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNeuron)


#define cppTestProject_Plugins_MachineLearning_Source_MachineLearning_Public_Neuron_h_46_PROLOG
#define cppTestProject_Plugins_MachineLearning_Source_MachineLearning_Public_Neuron_h_49_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	cppTestProject_Plugins_MachineLearning_Source_MachineLearning_Public_Neuron_h_49_RPC_WRAPPERS \
	cppTestProject_Plugins_MachineLearning_Source_MachineLearning_Public_Neuron_h_49_INCLASS \
	cppTestProject_Plugins_MachineLearning_Source_MachineLearning_Public_Neuron_h_49_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define cppTestProject_Plugins_MachineLearning_Source_MachineLearning_Public_Neuron_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	cppTestProject_Plugins_MachineLearning_Source_MachineLearning_Public_Neuron_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	cppTestProject_Plugins_MachineLearning_Source_MachineLearning_Public_Neuron_h_49_INCLASS_NO_PURE_DECLS \
	cppTestProject_Plugins_MachineLearning_Source_MachineLearning_Public_Neuron_h_49_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID cppTestProject_Plugins_MachineLearning_Source_MachineLearning_Public_Neuron_h


#define FOREACH_ENUM_ETRANSFERTYPE(op) \
	op(ETransferType::TT_Ramp) \
	op(ETransferType::TT_Gaussian) \
	op(ETransferType::TT_Tanh) \
	op(ETransferType::TT_Logistic) \
	op(ETransferType::TT_SoftPlus) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
