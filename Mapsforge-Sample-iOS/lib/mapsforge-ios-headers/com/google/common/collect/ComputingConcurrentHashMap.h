//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/cbrasseur/Documents/j2objc-0.9.7/guava/sources/com/google/common/collect/ComputingConcurrentHashMap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectComputingConcurrentHashMap_INCLUDE_ALL")
#if ComGoogleCommonCollectComputingConcurrentHashMap_RESTRICT
#define ComGoogleCommonCollectComputingConcurrentHashMap_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectComputingConcurrentHashMap_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectComputingConcurrentHashMap_RESTRICT

#if !defined (_ComGoogleCommonCollectComputingConcurrentHashMap_) && (ComGoogleCommonCollectComputingConcurrentHashMap_INCLUDE_ALL || ComGoogleCommonCollectComputingConcurrentHashMap_INCLUDE)
#define _ComGoogleCommonCollectComputingConcurrentHashMap_

#define ComGoogleCommonCollectMapMakerInternalMap_RESTRICT 1
#define ComGoogleCommonCollectMapMakerInternalMap_INCLUDE 1
#include "com/google/common/collect/MapMakerInternalMap.h"

@class ComGoogleCommonCollectComputingConcurrentHashMap_ComputingSegment;
@class ComGoogleCommonCollectMapMaker;
@class ComGoogleCommonCollectMapMakerInternalMap_Segment;
@protocol ComGoogleCommonBaseFunction;

@interface ComGoogleCommonCollectComputingConcurrentHashMap : ComGoogleCommonCollectMapMakerInternalMap {
 @public
  id<ComGoogleCommonBaseFunction> computingFunction_;
}

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectMapMaker:(ComGoogleCommonCollectMapMaker *)builder
                       withComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction>)computingFunction;

- (ComGoogleCommonCollectMapMakerInternalMap_Segment *)createSegmentWithInt:(jint)initialCapacity
                                                                    withInt:(jint)maxSegmentSize;

- (id)getOrComputeWithId:(id)key;

- (ComGoogleCommonCollectComputingConcurrentHashMap_ComputingSegment *)segmentForWithInt:(jint)hash_;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectComputingConcurrentHashMap)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectComputingConcurrentHashMap, computingFunction_, id<ComGoogleCommonBaseFunction>)

FOUNDATION_EXPORT void ComGoogleCommonCollectComputingConcurrentHashMap_initWithComGoogleCommonCollectMapMaker_withComGoogleCommonBaseFunction_(ComGoogleCommonCollectComputingConcurrentHashMap *self, ComGoogleCommonCollectMapMaker *builder, id<ComGoogleCommonBaseFunction> computingFunction);

FOUNDATION_EXPORT ComGoogleCommonCollectComputingConcurrentHashMap *new_ComGoogleCommonCollectComputingConcurrentHashMap_initWithComGoogleCommonCollectMapMaker_withComGoogleCommonBaseFunction_(ComGoogleCommonCollectMapMaker *builder, id<ComGoogleCommonBaseFunction> computingFunction) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectComputingConcurrentHashMap)

#endif

#if !defined (_ComGoogleCommonCollectComputingConcurrentHashMap_ComputingSegment_) && (ComGoogleCommonCollectComputingConcurrentHashMap_INCLUDE_ALL || ComGoogleCommonCollectComputingConcurrentHashMap_ComputingSegment_INCLUDE)
#define _ComGoogleCommonCollectComputingConcurrentHashMap_ComputingSegment_

#define ComGoogleCommonCollectMapMakerInternalMap_RESTRICT 1
#define ComGoogleCommonCollectMapMakerInternalMap_Segment_INCLUDE 1
#include "com/google/common/collect/MapMakerInternalMap.h"

@class ComGoogleCommonCollectComputingConcurrentHashMap_ComputingValueReference;
@class ComGoogleCommonCollectMapMakerInternalMap;
@protocol ComGoogleCommonBaseFunction;
@protocol ComGoogleCommonCollectMapMakerInternalMap_ReferenceEntry;

@interface ComGoogleCommonCollectComputingConcurrentHashMap_ComputingSegment : ComGoogleCommonCollectMapMakerInternalMap_Segment

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectMapMakerInternalMap:(ComGoogleCommonCollectMapMakerInternalMap *)map
                                                          withInt:(jint)initialCapacity
                                                          withInt:(jint)maxSegmentSize;

- (id)computeWithId:(id)key
            withInt:(jint)hash_
withComGoogleCommonCollectMapMakerInternalMap_ReferenceEntry:(id<ComGoogleCommonCollectMapMakerInternalMap_ReferenceEntry>)e
withComGoogleCommonCollectComputingConcurrentHashMap_ComputingValueReference:(ComGoogleCommonCollectComputingConcurrentHashMap_ComputingValueReference *)computingValueReference;

- (id)getOrComputeWithId:(id)key
                 withInt:(jint)hash_
withComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction>)computingFunction;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectComputingConcurrentHashMap_ComputingSegment)

FOUNDATION_EXPORT void ComGoogleCommonCollectComputingConcurrentHashMap_ComputingSegment_initWithComGoogleCommonCollectMapMakerInternalMap_withInt_withInt_(ComGoogleCommonCollectComputingConcurrentHashMap_ComputingSegment *self, ComGoogleCommonCollectMapMakerInternalMap *map, jint initialCapacity, jint maxSegmentSize);

FOUNDATION_EXPORT ComGoogleCommonCollectComputingConcurrentHashMap_ComputingSegment *new_ComGoogleCommonCollectComputingConcurrentHashMap_ComputingSegment_initWithComGoogleCommonCollectMapMakerInternalMap_withInt_withInt_(ComGoogleCommonCollectMapMakerInternalMap *map, jint initialCapacity, jint maxSegmentSize) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectComputingConcurrentHashMap_ComputingSegment)

#endif

#if !defined (_ComGoogleCommonCollectComputingConcurrentHashMap_ComputationExceptionReference_) && (ComGoogleCommonCollectComputingConcurrentHashMap_INCLUDE_ALL || ComGoogleCommonCollectComputingConcurrentHashMap_ComputationExceptionReference_INCLUDE)
#define _ComGoogleCommonCollectComputingConcurrentHashMap_ComputationExceptionReference_

#endif

#if !defined (_ComGoogleCommonCollectComputingConcurrentHashMap_ComputedReference_) && (ComGoogleCommonCollectComputingConcurrentHashMap_INCLUDE_ALL || ComGoogleCommonCollectComputingConcurrentHashMap_ComputedReference_INCLUDE)
#define _ComGoogleCommonCollectComputingConcurrentHashMap_ComputedReference_

#endif

#if !defined (_ComGoogleCommonCollectComputingConcurrentHashMap_ComputingValueReference_) && (ComGoogleCommonCollectComputingConcurrentHashMap_INCLUDE_ALL || ComGoogleCommonCollectComputingConcurrentHashMap_ComputingValueReference_INCLUDE)
#define _ComGoogleCommonCollectComputingConcurrentHashMap_ComputingValueReference_

#endif
#pragma pop_macro("ComGoogleCommonCollectComputingConcurrentHashMap_INCLUDE_ALL")
