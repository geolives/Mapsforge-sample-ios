//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./org/mapsforge/map/model/MapViewDimension.java
//

#ifndef _OrgMapsforgeMapModelMapViewDimension_H_
#define _OrgMapsforgeMapModelMapViewDimension_H_

#include "J2ObjC_header.h"
#include "org/mapsforge/map/model/common/Observable.h"

@class OrgMapsforgeCoreModelDimension;

@interface OrgMapsforgeMapModelMapViewDimension : OrgMapsforgeMapModelCommonObservable

#pragma mark Public

- (instancetype)init;

- (OrgMapsforgeCoreModelDimension *)getDimension;

- (void)setDimensionWithOrgMapsforgeCoreModelDimension:(OrgMapsforgeCoreModelDimension *)dimension;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMapsforgeMapModelMapViewDimension)

FOUNDATION_EXPORT void OrgMapsforgeMapModelMapViewDimension_init(OrgMapsforgeMapModelMapViewDimension *self);

FOUNDATION_EXPORT OrgMapsforgeMapModelMapViewDimension *new_OrgMapsforgeMapModelMapViewDimension_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMapsforgeMapModelMapViewDimension)

#endif // _OrgMapsforgeMapModelMapViewDimension_H_
