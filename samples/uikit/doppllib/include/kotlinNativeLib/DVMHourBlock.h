//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_DVMHourBlock")
#ifdef RESTRICT_DVMHourBlock
#define INCLUDE_ALL_DVMHourBlock 0
#else
#define INCLUDE_ALL_DVMHourBlock 1
#endif
#undef RESTRICT_DVMHourBlock

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DVMHourBlock_) && (INCLUDE_ALL_DVMHourBlock || defined(INCLUDE_DVMHourBlock))
#define DVMHourBlock_

@class DDATBlock;
@class DDATEvent;
@protocol DDATTimeBlock;

@interface DVMHourBlock : NSObject

#pragma mark Public

- (instancetype)initWithNSString:(NSString *)hourStringDisplay
               withDDATTimeBlock:(id<DDATTimeBlock>)timeBlock;

- (DDATBlock *)getBlock;

- (DDATEvent *)getEvent;

- (NSString *)getHourStringDisplay;

- (NSString * __nonnull)getName;

- (NSString * __nonnull)getSpeakers;

- (id<DDATTimeBlock>)getTimeBlock;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(DVMHourBlock)

FOUNDATION_EXPORT void DVMHourBlock_initWithNSString_withDDATTimeBlock_(DVMHourBlock *self, NSString *hourStringDisplay, id<DDATTimeBlock> timeBlock);

FOUNDATION_EXPORT DVMHourBlock *new_DVMHourBlock_initWithNSString_withDDATTimeBlock_(NSString *hourStringDisplay, id<DDATTimeBlock> timeBlock) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DVMHourBlock *create_DVMHourBlock_initWithNSString_withDDATTimeBlock_(NSString *hourStringDisplay, id<DDATTimeBlock> timeBlock);

J2OBJC_TYPE_LITERAL_HEADER(DVMHourBlock)

@compatibility_alias CoTouchlabDroidconandroidSharedViewmodelHourBlock DVMHourBlock;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_DVMHourBlock")