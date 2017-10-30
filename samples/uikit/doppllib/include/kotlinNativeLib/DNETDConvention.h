//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_DNETDConvention")
#ifdef RESTRICT_DNETDConvention
#define INCLUDE_ALL_DNETDConvention 0
#else
#define INCLUDE_ALL_DNETDConvention 1
#endif
#undef RESTRICT_DNETDConvention

#if !defined (DNETDConvention_) && (INCLUDE_ALL_DNETDConvention || defined(INCLUDE_DNETDConvention))
#define DNETDConvention_

@class JavaLangLong;
@protocol JavaUtilList;

@interface DNETDConvention : NSObject {
 @public
  JavaLangLong *id__;
  NSString *description__;
  NSString *locationName_;
  NSString *startDate_;
  NSString *endDate_;
  id<JavaUtilList> venues_;
  id<JavaUtilList> blocks_;
}

#pragma mark Public

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(DNETDConvention)

J2OBJC_FIELD_SETTER(DNETDConvention, id__, JavaLangLong *)
J2OBJC_FIELD_SETTER(DNETDConvention, description__, NSString *)
J2OBJC_FIELD_SETTER(DNETDConvention, locationName_, NSString *)
J2OBJC_FIELD_SETTER(DNETDConvention, startDate_, NSString *)
J2OBJC_FIELD_SETTER(DNETDConvention, endDate_, NSString *)
J2OBJC_FIELD_SETTER(DNETDConvention, venues_, id<JavaUtilList>)
J2OBJC_FIELD_SETTER(DNETDConvention, blocks_, id<JavaUtilList>)

FOUNDATION_EXPORT void DNETDConvention_init(DNETDConvention *self);

FOUNDATION_EXPORT DNETDConvention *new_DNETDConvention_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DNETDConvention *create_DNETDConvention_init();

J2OBJC_TYPE_LITERAL_HEADER(DNETDConvention)

@compatibility_alias CoTouchlabDroidconandroidSharedNetworkDaoConvention DNETDConvention;

#endif

#pragma pop_macro("INCLUDE_ALL_DNETDConvention")