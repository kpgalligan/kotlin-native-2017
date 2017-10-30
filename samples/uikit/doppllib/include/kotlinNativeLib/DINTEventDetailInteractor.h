//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_DINTEventDetailInteractor")
#ifdef RESTRICT_DINTEventDetailInteractor
#define INCLUDE_ALL_DINTEventDetailInteractor 0
#else
#define INCLUDE_ALL_DINTEventDetailInteractor 1
#endif
#undef RESTRICT_DINTEventDetailInteractor

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DINTEventDetailInteractor_) && (INCLUDE_ALL_DINTEventDetailInteractor || defined(INCLUDE_DINTEventDetailInteractor))
#define DINTEventDetailInteractor_

@class DDATDatabaseHelper;
@class IoReactivexSingle;

@interface DINTEventDetailInteractor : NSObject

#pragma mark Public

- (instancetype)initWithDDATDatabaseHelper:(DDATDatabaseHelper *)helper;

- (IoReactivexSingle *)getEventInfoWithLong:(jlong)eventId;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(DINTEventDetailInteractor)

FOUNDATION_EXPORT void DINTEventDetailInteractor_initWithDDATDatabaseHelper_(DINTEventDetailInteractor *self, DDATDatabaseHelper *helper);

FOUNDATION_EXPORT DINTEventDetailInteractor *new_DINTEventDetailInteractor_initWithDDATDatabaseHelper_(DDATDatabaseHelper *helper) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DINTEventDetailInteractor *create_DINTEventDetailInteractor_initWithDDATDatabaseHelper_(DDATDatabaseHelper *helper);

J2OBJC_TYPE_LITERAL_HEADER(DINTEventDetailInteractor)

@compatibility_alias CoTouchlabDroidconandroidSharedInteractorsEventDetailInteractor DINTEventDetailInteractor;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_DINTEventDetailInteractor")