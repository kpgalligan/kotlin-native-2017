//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_DDAGAppModule_ProvidesDroidconDatabaseFactory")
#ifdef RESTRICT_DDAGAppModule_ProvidesDroidconDatabaseFactory
#define INCLUDE_ALL_DDAGAppModule_ProvidesDroidconDatabaseFactory 0
#else
#define INCLUDE_ALL_DDAGAppModule_ProvidesDroidconDatabaseFactory 1
#endif
#undef RESTRICT_DDAGAppModule_ProvidesDroidconDatabaseFactory

#if !defined (DDAGAppModule_ProvidesDroidconDatabaseFactory_) && (INCLUDE_ALL_DDAGAppModule_ProvidesDroidconDatabaseFactory || defined(INCLUDE_DDAGAppModule_ProvidesDroidconDatabaseFactory))
#define DDAGAppModule_ProvidesDroidconDatabaseFactory_

#define RESTRICT_DaggerInternalFactory 1
#define INCLUDE_DaggerInternalFactory 1
#include "DaggerInternalFactory.h"

@class DDAGAppModule;
@class DDATDroidconDatabase;
@protocol JavaxInjectProvider;

@interface DDAGAppModule_ProvidesDroidconDatabaseFactory : NSObject < DaggerInternalFactory >

#pragma mark Public

- (instancetype)initWithDDAGAppModule:(DDAGAppModule *)module
              withJavaxInjectProvider:(id<JavaxInjectProvider>)applicationProvider;

+ (id<DaggerInternalFactory>)createWithDDAGAppModule:(DDAGAppModule *)module
                             withJavaxInjectProvider:(id<JavaxInjectProvider>)applicationProvider;

- (DDATDroidconDatabase *)get;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(DDAGAppModule_ProvidesDroidconDatabaseFactory)

FOUNDATION_EXPORT void DDAGAppModule_ProvidesDroidconDatabaseFactory_initWithDDAGAppModule_withJavaxInjectProvider_(DDAGAppModule_ProvidesDroidconDatabaseFactory *self, DDAGAppModule *module, id<JavaxInjectProvider> applicationProvider);

FOUNDATION_EXPORT DDAGAppModule_ProvidesDroidconDatabaseFactory *new_DDAGAppModule_ProvidesDroidconDatabaseFactory_initWithDDAGAppModule_withJavaxInjectProvider_(DDAGAppModule *module, id<JavaxInjectProvider> applicationProvider) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DDAGAppModule_ProvidesDroidconDatabaseFactory *create_DDAGAppModule_ProvidesDroidconDatabaseFactory_initWithDDAGAppModule_withJavaxInjectProvider_(DDAGAppModule *module, id<JavaxInjectProvider> applicationProvider);

FOUNDATION_EXPORT id<DaggerInternalFactory> DDAGAppModule_ProvidesDroidconDatabaseFactory_createWithDDAGAppModule_withJavaxInjectProvider_(DDAGAppModule *module, id<JavaxInjectProvider> applicationProvider);

J2OBJC_TYPE_LITERAL_HEADER(DDAGAppModule_ProvidesDroidconDatabaseFactory)

@compatibility_alias CoTouchlabDroidconandroidSharedDaggerAppModule_ProvidesDroidconDatabaseFactory DDAGAppModule_ProvidesDroidconDatabaseFactory;

#endif

#pragma pop_macro("INCLUDE_ALL_DDAGAppModule_ProvidesDroidconDatabaseFactory")