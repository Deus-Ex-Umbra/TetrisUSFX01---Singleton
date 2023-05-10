// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TETRISUSFX01_PieceStructure_generated_h
#error "PieceStructure.generated.h already included, missing '#pragma once' in PieceStructure.h"
#endif
#define TETRISUSFX01_PieceStructure_generated_h

#define TetrisUSFX01_master_Source_TetrisUSFX01_PieceStructure_h_13_SPARSE_DATA
#define TetrisUSFX01_master_Source_TetrisUSFX01_PieceStructure_h_13_RPC_WRAPPERS
#define TetrisUSFX01_master_Source_TetrisUSFX01_PieceStructure_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define TetrisUSFX01_master_Source_TetrisUSFX01_PieceStructure_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TETRISUSFX01_API UPieceStructure(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPieceStructure) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TETRISUSFX01_API, UPieceStructure); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPieceStructure); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TETRISUSFX01_API UPieceStructure(UPieceStructure&&); \
	TETRISUSFX01_API UPieceStructure(const UPieceStructure&); \
public:


#define TetrisUSFX01_master_Source_TetrisUSFX01_PieceStructure_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TETRISUSFX01_API UPieceStructure(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TETRISUSFX01_API UPieceStructure(UPieceStructure&&); \
	TETRISUSFX01_API UPieceStructure(const UPieceStructure&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TETRISUSFX01_API, UPieceStructure); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPieceStructure); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPieceStructure)


#define TetrisUSFX01_master_Source_TetrisUSFX01_PieceStructure_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPieceStructure(); \
	friend struct Z_Construct_UClass_UPieceStructure_Statics; \
public: \
	DECLARE_CLASS(UPieceStructure, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/TetrisUSFX01"), TETRISUSFX01_API) \
	DECLARE_SERIALIZER(UPieceStructure)


#define TetrisUSFX01_master_Source_TetrisUSFX01_PieceStructure_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	TetrisUSFX01_master_Source_TetrisUSFX01_PieceStructure_h_13_GENERATED_UINTERFACE_BODY() \
	TetrisUSFX01_master_Source_TetrisUSFX01_PieceStructure_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TetrisUSFX01_master_Source_TetrisUSFX01_PieceStructure_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	TetrisUSFX01_master_Source_TetrisUSFX01_PieceStructure_h_13_GENERATED_UINTERFACE_BODY() \
	TetrisUSFX01_master_Source_TetrisUSFX01_PieceStructure_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TetrisUSFX01_master_Source_TetrisUSFX01_PieceStructure_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPieceStructure() {} \
public: \
	typedef UPieceStructure UClassType; \
	typedef IPieceStructure ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define TetrisUSFX01_master_Source_TetrisUSFX01_PieceStructure_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IPieceStructure() {} \
public: \
	typedef UPieceStructure UClassType; \
	typedef IPieceStructure ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define TetrisUSFX01_master_Source_TetrisUSFX01_PieceStructure_h_10_PROLOG
#define TetrisUSFX01_master_Source_TetrisUSFX01_PieceStructure_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TetrisUSFX01_master_Source_TetrisUSFX01_PieceStructure_h_13_SPARSE_DATA \
	TetrisUSFX01_master_Source_TetrisUSFX01_PieceStructure_h_13_RPC_WRAPPERS \
	TetrisUSFX01_master_Source_TetrisUSFX01_PieceStructure_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TetrisUSFX01_master_Source_TetrisUSFX01_PieceStructure_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TetrisUSFX01_master_Source_TetrisUSFX01_PieceStructure_h_13_SPARSE_DATA \
	TetrisUSFX01_master_Source_TetrisUSFX01_PieceStructure_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	TetrisUSFX01_master_Source_TetrisUSFX01_PieceStructure_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TETRISUSFX01_API UClass* StaticClass<class UPieceStructure>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TetrisUSFX01_master_Source_TetrisUSFX01_PieceStructure_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
