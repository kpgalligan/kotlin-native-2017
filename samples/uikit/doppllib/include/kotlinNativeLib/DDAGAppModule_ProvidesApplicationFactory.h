//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_DDAGAppModule_ProvidesApplicationFactory")
#ifdef RESTRICT_DDAGAppModule_ProvidesApplicationFactory
#define INCLUDE_ALL_DDAGAppModule_ProvidesApplicationFactory 0
#else
#define INCLUDE_ALL_DDAGAppModule_ProvidesApplicationFactory 1
#endif
#undef RESTRICT_DDAGAppModule_ProvidesApplicationFactory

#if !defined (DDAGAppModule_ProvidesApplicationFactory_) && (INCLUDE_ALL_DDAGAppModule_ProvidesApplicationFactory || defined(INCLUDE_DDAGAppModule_ProvidesApplicationFactory))
#define DDAGAppModule_ProvidesApplicationFactory_

#define RESTRICT_DaggerInternalFactory 1
#define INCLUDE_DaggerInternalFactory 1
#include "DaggerInternalFactory.h"

@class AndroidAppApplication;
@class DDAGAppModule;

@interface DDAGAppModule_ProvidesApplicationFactory : NSObject < DaggerInternalFactory >

#pragma mark Public

- (instancetype)initWithDDAGAppModule:(DDAGAppModule *)module;

+ (id<DaggerInternalFactory>)createWithDDAGAppModule:(DDAGAppModule *)module;

- (AndroidAppApplication *)get;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(DDAGAppModule_ProvidesApplicationFactory)

FOUNDATION_EXPORT void DDAGAppModule_ProvidesApplicationFactory_initWithDDAGAppModule_(DDAGAppModule_ProvidesApplicationFactory *self, DDAGAppModule *module);

FOUNDATION_EXPORT DDAGAppModule_ProvidesApplicationFactory *new_DDAGAppModule_ProvidesApplicationFactory_initWithDDAGAppModule_(DDAGAppModule *module) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DDAGAppModule_ProvidesApplicationFactory *create_DDAGAppModule_ProvidesApplicationFactory_initWithDDAGAppModule_(DDAGAppModule *module);

FOUNDATION_EXPORT id<DaggerInternalFactory> DDAGAppModule_ProvidesApplicationFactory_createWithDDAGAppModule_(DDAGAppModule *module);

J2OBJC_TYPE_LITERAL_HEADER(DDAGAppModule_ProvidesApplicationFactory)

@compatibility_alias CoTouchlabDroidconandroidSharedDaggerAppModule_ProvidesApplicationFactory DDAGAppModule_ProvidesApplicationFactory;

#endif

#pragma pop_macro("INCLUDE_ALL_DDAGAppModule_ProvidesApplicationFactory")