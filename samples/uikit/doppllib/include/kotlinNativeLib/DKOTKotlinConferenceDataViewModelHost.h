//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_DKOTKotlinConferenceDataViewModelHost")
#ifdef RESTRICT_DKOTKotlinConferenceDataViewModelHost
#define INCLUDE_ALL_DKOTKotlinConferenceDataViewModelHost 0
#else
#define INCLUDE_ALL_DKOTKotlinConferenceDataViewModelHost 1
#endif
#undef RESTRICT_DKOTKotlinConferenceDataViewModelHost

#if !defined (DKOTKotlinConferenceDataViewModelHost_) && (INCLUDE_ALL_DKOTKotlinConferenceDataViewModelHost || defined(INCLUDE_DKOTKotlinConferenceDataViewModelHost))
#define DKOTKotlinConferenceDataViewModelHost_

#define RESTRICT_DVMConferenceDataViewModel 1
#define INCLUDE_DVMConferenceDataViewModel_Host 1
#include "DVMConferenceDataViewModel.h"

@class IOSLongArray;
@protocol JavaUtilList;

@interface DKOTKotlinConferenceDataViewModelHost : NSObject < DVMConferenceDataViewModel_Host >

#pragma mark Public

- (instancetype)init;

- (void)updateConferenceDatesWithJavaUtilList:(id<JavaUtilList>)dates;

- (void)updateConferenceDatesWithLongArray:(IOSLongArray *)dates;

@end

J2OBJC_EMPTY_STATIC_INIT(DKOTKotlinConferenceDataViewModelHost)

FOUNDATION_EXPORT void DKOTKotlinConferenceDataViewModelHost_init(DKOTKotlinConferenceDataViewModelHost *self);

J2OBJC_TYPE_LITERAL_HEADER(DKOTKotlinConferenceDataViewModelHost)

@compatibility_alias CoTouchlabDroidconandroidSharedKotlinnativeKotlinConferenceDataViewModelHost DKOTKotlinConferenceDataViewModelHost;

#endif

#pragma pop_macro("INCLUDE_ALL_DKOTKotlinConferenceDataViewModelHost")