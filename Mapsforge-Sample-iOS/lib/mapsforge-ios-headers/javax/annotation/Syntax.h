//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/cbrasseur/Documents/j2objc-0.9.7/jsr305/build_result/java/javax/annotation/Syntax.java
//

#ifndef _JavaxAnnotationSyntax_H_
#define _JavaxAnnotationSyntax_H_

#include "J2ObjC_header.h"
#include "java/lang/annotation/Annotation.h"

@class JavaxAnnotationMetaWhenEnum;

@protocol JavaxAnnotationSyntax < JavaLangAnnotationAnnotation >

@property (readonly) NSString *value;
@property (readonly) JavaxAnnotationMetaWhenEnum *when;

@end

@interface JavaxAnnotationSyntax : NSObject < JavaxAnnotationSyntax > {
 @private
  NSString *value_;
  JavaxAnnotationMetaWhenEnum *when_;
}

- (instancetype)initWithValue:(NSString *)value__ withWhen:(JavaxAnnotationMetaWhenEnum *)when__;

+ (JavaxAnnotationMetaWhenEnum *)whenDefault;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxAnnotationSyntax)

J2OBJC_TYPE_LITERAL_HEADER(JavaxAnnotationSyntax)

#endif // _JavaxAnnotationSyntax_H_
