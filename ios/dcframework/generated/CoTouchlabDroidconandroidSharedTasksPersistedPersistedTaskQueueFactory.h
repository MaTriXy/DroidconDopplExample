//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_CoTouchlabDroidconandroidSharedTasksPersistedPersistedTaskQueueFactory")
#ifdef RESTRICT_CoTouchlabDroidconandroidSharedTasksPersistedPersistedTaskQueueFactory
#define INCLUDE_ALL_CoTouchlabDroidconandroidSharedTasksPersistedPersistedTaskQueueFactory 0
#else
#define INCLUDE_ALL_CoTouchlabDroidconandroidSharedTasksPersistedPersistedTaskQueueFactory 1
#endif
#undef RESTRICT_CoTouchlabDroidconandroidSharedTasksPersistedPersistedTaskQueueFactory

#if !defined (CoTouchlabDroidconandroidSharedTasksPersistedPersistedTaskQueueFactory_) && (INCLUDE_ALL_CoTouchlabDroidconandroidSharedTasksPersistedPersistedTaskQueueFactory || defined(INCLUDE_CoTouchlabDroidconandroidSharedTasksPersistedPersistedTaskQueueFactory))
#define CoTouchlabDroidconandroidSharedTasksPersistedPersistedTaskQueueFactory_

@class AndroidContentContext;
@class CoTouchlabAndroidThreadingTasksPersistedPersistedTaskQueue;

@interface CoTouchlabDroidconandroidSharedTasksPersistedPersistedTaskQueueFactory : NSObject

#pragma mark Public

- (instancetype)init;

+ (CoTouchlabAndroidThreadingTasksPersistedPersistedTaskQueue *)getInstanceWithAndroidContentContext:(AndroidContentContext *)context;

@end

J2OBJC_EMPTY_STATIC_INIT(CoTouchlabDroidconandroidSharedTasksPersistedPersistedTaskQueueFactory)

FOUNDATION_EXPORT void CoTouchlabDroidconandroidSharedTasksPersistedPersistedTaskQueueFactory_init(CoTouchlabDroidconandroidSharedTasksPersistedPersistedTaskQueueFactory *self);

FOUNDATION_EXPORT CoTouchlabDroidconandroidSharedTasksPersistedPersistedTaskQueueFactory *new_CoTouchlabDroidconandroidSharedTasksPersistedPersistedTaskQueueFactory_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT CoTouchlabDroidconandroidSharedTasksPersistedPersistedTaskQueueFactory *create_CoTouchlabDroidconandroidSharedTasksPersistedPersistedTaskQueueFactory_init();

FOUNDATION_EXPORT CoTouchlabAndroidThreadingTasksPersistedPersistedTaskQueue *CoTouchlabDroidconandroidSharedTasksPersistedPersistedTaskQueueFactory_getInstanceWithAndroidContentContext_(AndroidContentContext *context);

J2OBJC_TYPE_LITERAL_HEADER(CoTouchlabDroidconandroidSharedTasksPersistedPersistedTaskQueueFactory)

#endif

#pragma pop_macro("INCLUDE_ALL_CoTouchlabDroidconandroidSharedTasksPersistedPersistedTaskQueueFactory")