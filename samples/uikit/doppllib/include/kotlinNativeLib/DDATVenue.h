//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_DDATVenue")
#ifdef RESTRICT_DDATVenue
#define INCLUDE_ALL_DDATVenue 0
#else
#define INCLUDE_ALL_DDATVenue 1
#endif
#undef RESTRICT_DDATVenue

#if !defined (DDATVenue_) && (INCLUDE_ALL_DDATVenue || defined(INCLUDE_DDATVenue))
#define DDATVenue_

@interface DDATVenue : NSObject {
 @public
  NSString *name_;
  NSString *description__;
}

#pragma mark Public

- (instancetype)init;

- (NSString *)getDescription;

- (NSString *)getName;

- (void)setDescriptionWithNSString:(NSString *)description_;

- (void)setNameWithNSString:(NSString *)name;

@end

J2OBJC_EMPTY_STATIC_INIT(DDATVenue)

J2OBJC_FIELD_SETTER(DDATVenue, name_, NSString *)
J2OBJC_FIELD_SETTER(DDATVenue, description__, NSString *)

FOUNDATION_EXPORT void DDATVenue_init(DDATVenue *self);

FOUNDATION_EXPORT DDATVenue *new_DDATVenue_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DDATVenue *create_DDATVenue_init();

J2OBJC_TYPE_LITERAL_HEADER(DDATVenue)

@compatibility_alias CoTouchlabDroidconandroidSharedDataVenue DDATVenue;

#endif

#pragma pop_macro("INCLUDE_ALL_DDATVenue")