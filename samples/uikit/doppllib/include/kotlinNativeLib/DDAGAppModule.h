//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_DDAGAppModule")
#ifdef RESTRICT_DDAGAppModule
#define INCLUDE_ALL_DDAGAppModule 0
#else
#define INCLUDE_ALL_DDAGAppModule 1
#endif
#undef RESTRICT_DDAGAppModule

#if !defined (DDAGAppModule_) && (INCLUDE_ALL_DDAGAppModule || defined(INCLUDE_DDAGAppModule))
#define DDAGAppModule_

@class AndroidAppApplication;
@class DDATDroidconDatabase;

@interface DDAGAppModule : NSObject

#pragma mark Public

- (instancetype)initWithAndroidAppApplication:(AndroidAppApplication *)application;

#pragma mark Package-Private

- (AndroidAppApplication *)providesApplication;

- (DDATDroidconDatabase *)providesDroidconDatabaseWithAndroidAppApplication:(AndroidAppApplication *)application;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(DDAGAppModule)

FOUNDATION_EXPORT void DDAGAppModule_initWithAndroidAppApplication_(DDAGAppModule *self, AndroidAppApplication *application);

FOUNDATION_EXPORT DDAGAppModule *new_DDAGAppModule_initWithAndroidAppApplication_(AndroidAppApplication *application) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DDAGAppModule *create_DDAGAppModule_initWithAndroidAppApplication_(AndroidAppApplication *application);

J2OBJC_TYPE_LITERAL_HEADER(DDAGAppModule)

@compatibility_alias CoTouchlabDroidconandroidSharedDaggerAppModule DDAGAppModule;

#endif

#pragma pop_macro("INCLUDE_ALL_DDAGAppModule")