//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_DINTEventDetailInteractor_Factory")
#ifdef RESTRICT_DINTEventDetailInteractor_Factory
#define INCLUDE_ALL_DINTEventDetailInteractor_Factory 0
#else
#define INCLUDE_ALL_DINTEventDetailInteractor_Factory 1
#endif
#undef RESTRICT_DINTEventDetailInteractor_Factory

#if !defined (DINTEventDetailInteractor_Factory_) && (INCLUDE_ALL_DINTEventDetailInteractor_Factory || defined(INCLUDE_DINTEventDetailInteractor_Factory))
#define DINTEventDetailInteractor_Factory_

#define RESTRICT_DaggerInternalFactory 1
#define INCLUDE_DaggerInternalFactory 1
#include "DaggerInternalFactory.h"

@class DINTEventDetailInteractor;
@protocol JavaxInjectProvider;

@interface DINTEventDetailInteractor_Factory : NSObject < DaggerInternalFactory >

#pragma mark Public

- (instancetype)initWithJavaxInjectProvider:(id<JavaxInjectProvider>)helperProvider;

+ (id<DaggerInternalFactory>)createWithJavaxInjectProvider:(id<JavaxInjectProvider>)helperProvider;

- (DINTEventDetailInteractor *)get;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(DINTEventDetailInteractor_Factory)

FOUNDATION_EXPORT void DINTEventDetailInteractor_Factory_initWithJavaxInjectProvider_(DINTEventDetailInteractor_Factory *self, id<JavaxInjectProvider> helperProvider);

FOUNDATION_EXPORT DINTEventDetailInteractor_Factory *new_DINTEventDetailInteractor_Factory_initWithJavaxInjectProvider_(id<JavaxInjectProvider> helperProvider) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DINTEventDetailInteractor_Factory *create_DINTEventDetailInteractor_Factory_initWithJavaxInjectProvider_(id<JavaxInjectProvider> helperProvider);

FOUNDATION_EXPORT id<DaggerInternalFactory> DINTEventDetailInteractor_Factory_createWithJavaxInjectProvider_(id<JavaxInjectProvider> helperProvider);

J2OBJC_TYPE_LITERAL_HEADER(DINTEventDetailInteractor_Factory)

@compatibility_alias CoTouchlabDroidconandroidSharedInteractorsEventDetailInteractor_Factory DINTEventDetailInteractor_Factory;

#endif

#pragma pop_macro("INCLUDE_ALL_DINTEventDetailInteractor_Factory")