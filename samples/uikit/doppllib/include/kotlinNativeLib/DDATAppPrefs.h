//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_DDATAppPrefs")
#ifdef RESTRICT_DDATAppPrefs
#define INCLUDE_ALL_DDATAppPrefs 0
#else
#define INCLUDE_ALL_DDATAppPrefs 1
#endif
#undef RESTRICT_DDATAppPrefs

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DDATAppPrefs_) && (INCLUDE_ALL_DDATAppPrefs || defined(INCLUDE_DDATAppPrefs))
#define DDATAppPrefs_

@class AndroidAppApplication;
@class IoReactivexObservable;

@interface DDATAppPrefs : NSObject

+ (NSString *)SEEN_WELCOME;

+ (NSString *)CONVENTION_START;

+ (NSString *)CONVENTION_END;

+ (NSString *)REFRESH_TIME;

+ (NSString *)ALLOW_NOTIFS;

+ (NSString *)SHOW_NOTIF_CARD;

+ (NSString *)USER_UNIQUE_UUID;

+ (NSString *)DOG_CLICKED;

#pragma mark Public

- (instancetype)initWithAndroidAppApplication:(AndroidAppApplication *)context;

- (jboolean)getAllowNotificationsUi;

- (jboolean)getDogClicked;

- (jboolean)getHasSeenWelcome;

- (jlong)getRefreshTime;

- (jboolean)getShowNotifCard;

- (NSString *)getUserUniqueUuid;

- (IoReactivexObservable *)observeAllowNotifications;

- (IoReactivexObservable *)observeConventionDates;

- (IoReactivexObservable *)observeShowNotifCard;

- (jboolean)onceWithNSString:(NSString *)key;

- (void)setAllowNotificationsWithBoolean:(jboolean)allow;

- (void)setConventionDatesWithNSString:(NSString * __nonnull)startDate
                          withNSString:(NSString * __nonnull)endDate;

- (void)setDogClickedWithBoolean:(jboolean)b;

- (void)setHasSeenWelcome;

- (void)setRefreshTimeWithLong:(jlong)time;

- (void)setShowNotifCardWithBoolean:(jboolean)show;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(DDATAppPrefs)

inline NSString *DDATAppPrefs_get_SEEN_WELCOME();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *DDATAppPrefs_SEEN_WELCOME;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DDATAppPrefs, SEEN_WELCOME, NSString *)

inline NSString *DDATAppPrefs_get_CONVENTION_START();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *DDATAppPrefs_CONVENTION_START;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DDATAppPrefs, CONVENTION_START, NSString *)

inline NSString *DDATAppPrefs_get_CONVENTION_END();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *DDATAppPrefs_CONVENTION_END;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DDATAppPrefs, CONVENTION_END, NSString *)

inline NSString *DDATAppPrefs_get_REFRESH_TIME();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *DDATAppPrefs_REFRESH_TIME;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DDATAppPrefs, REFRESH_TIME, NSString *)

inline NSString *DDATAppPrefs_get_ALLOW_NOTIFS();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *DDATAppPrefs_ALLOW_NOTIFS;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DDATAppPrefs, ALLOW_NOTIFS, NSString *)

inline NSString *DDATAppPrefs_get_SHOW_NOTIF_CARD();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *DDATAppPrefs_SHOW_NOTIF_CARD;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DDATAppPrefs, SHOW_NOTIF_CARD, NSString *)

inline NSString *DDATAppPrefs_get_USER_UNIQUE_UUID();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *DDATAppPrefs_USER_UNIQUE_UUID;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DDATAppPrefs, USER_UNIQUE_UUID, NSString *)

inline NSString *DDATAppPrefs_get_DOG_CLICKED();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *DDATAppPrefs_DOG_CLICKED;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DDATAppPrefs, DOG_CLICKED, NSString *)

FOUNDATION_EXPORT void DDATAppPrefs_initWithAndroidAppApplication_(DDATAppPrefs *self, AndroidAppApplication *context);

FOUNDATION_EXPORT DDATAppPrefs *new_DDATAppPrefs_initWithAndroidAppApplication_(AndroidAppApplication *context) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DDATAppPrefs *create_DDATAppPrefs_initWithAndroidAppApplication_(AndroidAppApplication *context);

J2OBJC_TYPE_LITERAL_HEADER(DDATAppPrefs)

@compatibility_alias CoTouchlabDroidconandroidSharedDataAppPrefs DDATAppPrefs;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_DDATAppPrefs")