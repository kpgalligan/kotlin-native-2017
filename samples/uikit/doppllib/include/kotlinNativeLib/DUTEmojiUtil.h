//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_DUTEmojiUtil")
#ifdef RESTRICT_DUTEmojiUtil
#define INCLUDE_ALL_DUTEmojiUtil 0
#else
#define INCLUDE_ALL_DUTEmojiUtil 1
#endif
#undef RESTRICT_DUTEmojiUtil

#if !defined (DUTEmojiUtil_) && (INCLUDE_ALL_DUTEmojiUtil || defined(INCLUDE_DUTEmojiUtil))
#define DUTEmojiUtil_

@class IOSIntArray;

@interface DUTEmojiUtil : NSObject

+ (jint)DECIMAL_VALUE_A;

+ (void)setDECIMAL_VALUE_A:(jint)value;

+ (IOSIntArray *)EMOJI_ABC;

+ (void)setEMOJI_ABC:(IOSIntArray *)value;

#pragma mark Public

- (instancetype)init;

+ (NSString *)getEmojiForUserWithNSString:(NSString *)displayName;

@end

J2OBJC_STATIC_INIT(DUTEmojiUtil)

inline jint DUTEmojiUtil_get_DECIMAL_VALUE_A();
inline jint DUTEmojiUtil_set_DECIMAL_VALUE_A(jint value);
inline jint *DUTEmojiUtil_getRef_DECIMAL_VALUE_A();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT jint DUTEmojiUtil_DECIMAL_VALUE_A;
J2OBJC_STATIC_FIELD_PRIMITIVE(DUTEmojiUtil, DECIMAL_VALUE_A, jint)

inline IOSIntArray *DUTEmojiUtil_get_EMOJI_ABC();
inline IOSIntArray *DUTEmojiUtil_set_EMOJI_ABC(IOSIntArray *value);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT IOSIntArray *DUTEmojiUtil_EMOJI_ABC;
J2OBJC_STATIC_FIELD_OBJ(DUTEmojiUtil, EMOJI_ABC, IOSIntArray *)

FOUNDATION_EXPORT void DUTEmojiUtil_init(DUTEmojiUtil *self);

FOUNDATION_EXPORT DUTEmojiUtil *new_DUTEmojiUtil_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DUTEmojiUtil *create_DUTEmojiUtil_init();

FOUNDATION_EXPORT NSString *DUTEmojiUtil_getEmojiForUserWithNSString_(NSString *displayName);

J2OBJC_TYPE_LITERAL_HEADER(DUTEmojiUtil)

@compatibility_alias CoTouchlabDroidconandroidSharedUtilsEmojiUtil DUTEmojiUtil;

#endif

#pragma pop_macro("INCLUDE_ALL_DUTEmojiUtil")