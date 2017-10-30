//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_DIOSIosPlatformClient")
#ifdef RESTRICT_DIOSIosPlatformClient
#define INCLUDE_ALL_DIOSIosPlatformClient 0
#else
#define INCLUDE_ALL_DIOSIosPlatformClient 1
#endif
#undef RESTRICT_DIOSIosPlatformClient

#if !defined (DCIosPlatformClient_) && (INCLUDE_ALL_DIOSIosPlatformClient || defined(INCLUDE_DCIosPlatformClient))
#define DCIosPlatformClient_

#define RESTRICT_DVMPlatformClient 1
#define INCLUDE_DVMPlatformClient 1
#include "DVMPlatformClient.h"

@class IOSObjectArray;
@class JavaLangInteger;
@class JavaLangThrowable;
@protocol DCIosFirebase;

@interface DCIosPlatformClient : NSObject < DVMPlatformClient >

+ (NSString *)TAG;

#pragma mark Public

- (instancetype)initWithDCIosFirebase:(id<DCIosFirebase>)iosFirebase;

- (NSString *)baseUrl;

- (JavaLangInteger *)getConventionId;

- (NSString *)getStringWithNSString:(NSString *)id_;

- (void)logWithNSString:(NSString *)s;

- (void)logEventWithNSString:(NSString *)name
           withNSStringArray:(IOSObjectArray *)params;

- (void)logExceptionWithJavaLangThrowable:(JavaLangThrowable *)t;

#pragma mark Package-Private

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(DCIosPlatformClient)

inline NSString *DCIosPlatformClient_get_TAG();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *DCIosPlatformClient_TAG;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DCIosPlatformClient, TAG, NSString *)

FOUNDATION_EXPORT void DCIosPlatformClient_initWithDCIosFirebase_(DCIosPlatformClient *self, id<DCIosFirebase> iosFirebase);

FOUNDATION_EXPORT DCIosPlatformClient *new_DCIosPlatformClient_initWithDCIosFirebase_(id<DCIosFirebase> iosFirebase) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DCIosPlatformClient *create_DCIosPlatformClient_initWithDCIosFirebase_(id<DCIosFirebase> iosFirebase);

J2OBJC_TYPE_LITERAL_HEADER(DCIosPlatformClient)

@compatibility_alias CoTouchlabDroidconandroidSharedIosIosPlatformClient DCIosPlatformClient;

#endif

#pragma pop_macro("INCLUDE_ALL_DIOSIosPlatformClient")