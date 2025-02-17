//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/zip/InflaterInputStream.java
//

#ifndef _JavaUtilZipInflaterInputStream_H_
#define _JavaUtilZipInflaterInputStream_H_

#include "J2ObjC_header.h"
#include "java/io/FilterInputStream.h"

@class IOSByteArray;
@class JavaIoInputStream;
@class JavaUtilZipInflater;

#define JavaUtilZipInflaterInputStream_BUF_SIZE 512

@interface JavaUtilZipInflaterInputStream : JavaIoFilterInputStream {
 @public
  JavaUtilZipInflater *inf_;
  IOSByteArray *buf_;
  jint len_;
  jboolean closed_;
  jboolean eof_;
  jint nativeEndBufSize_;
}

#pragma mark Public

- (instancetype)initWithJavaIoInputStream:(JavaIoInputStream *)is;

- (instancetype)initWithJavaIoInputStream:(JavaIoInputStream *)is
                  withJavaUtilZipInflater:(JavaUtilZipInflater *)inflater;

- (instancetype)initWithJavaIoInputStream:(JavaIoInputStream *)is
                  withJavaUtilZipInflater:(JavaUtilZipInflater *)inflater
                                  withInt:(jint)bufferSize;

- (jint)available;

- (void)close;

- (void)markWithInt:(jint)readlimit;

- (jboolean)markSupported;

- (jint)read;

- (jint)readWithByteArray:(IOSByteArray *)buffer
                  withInt:(jint)byteOffset
                  withInt:(jint)byteCount;

- (void)reset;

- (jlong)skipWithLong:(jlong)byteCount;

#pragma mark Protected

- (void)fill;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilZipInflaterInputStream)

J2OBJC_FIELD_SETTER(JavaUtilZipInflaterInputStream, inf_, JavaUtilZipInflater *)
J2OBJC_FIELD_SETTER(JavaUtilZipInflaterInputStream, buf_, IOSByteArray *)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilZipInflaterInputStream, BUF_SIZE, jint)

FOUNDATION_EXPORT void JavaUtilZipInflaterInputStream_initWithJavaIoInputStream_(JavaUtilZipInflaterInputStream *self, JavaIoInputStream *is);

FOUNDATION_EXPORT JavaUtilZipInflaterInputStream *new_JavaUtilZipInflaterInputStream_initWithJavaIoInputStream_(JavaIoInputStream *is) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilZipInflaterInputStream_initWithJavaIoInputStream_withJavaUtilZipInflater_(JavaUtilZipInflaterInputStream *self, JavaIoInputStream *is, JavaUtilZipInflater *inflater);

FOUNDATION_EXPORT JavaUtilZipInflaterInputStream *new_JavaUtilZipInflaterInputStream_initWithJavaIoInputStream_withJavaUtilZipInflater_(JavaIoInputStream *is, JavaUtilZipInflater *inflater) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilZipInflaterInputStream_initWithJavaIoInputStream_withJavaUtilZipInflater_withInt_(JavaUtilZipInflaterInputStream *self, JavaIoInputStream *is, JavaUtilZipInflater *inflater, jint bufferSize);

FOUNDATION_EXPORT JavaUtilZipInflaterInputStream *new_JavaUtilZipInflaterInputStream_initWithJavaIoInputStream_withJavaUtilZipInflater_withInt_(JavaIoInputStream *is, JavaUtilZipInflater *inflater, jint bufferSize) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilZipInflaterInputStream)

#endif // _JavaUtilZipInflaterInputStream_H_
