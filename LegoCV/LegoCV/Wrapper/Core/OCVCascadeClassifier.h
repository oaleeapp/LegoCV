//
//  OCVCascadeClassifier.h
//  LegoCV
//
//  Created by Dal Rupnik on 24/01/2017.
//  Copyright © 2017 Unified Sense. All rights reserved.
//

#import "OCVPointerObject.h"
#import "OCVInputArrayable.h"
#import "OCVRect.h"

@interface OCVCascadeClassifier : OCVPointerObject

- (instancetype)initWithURL:(NSURL *)url;
- (instancetype)initWithPath:(NSString *)path;

/*!
 *  Needs to be absolute path to the XML model for classifier: Bundle.main.bundlePath + relativePath
 */
- (void)loadPath:(NSString *)path;
- (void)loadURL:(NSURL *)url;

//
// TODO: Add Swift wrapper method to return OCVRect directly.
//
- (NSArray<OCVRectValue *>*)detectMultiscaleWith:(id<OCVInputArrayable>)image;
- (NSArray<OCVRectValue *>*)detectMultiscaleWith:(id<OCVInputArrayable>)image scaleFactor:(double)scaleFactor;
- (NSArray<OCVRectValue *>*)detectMultiscaleWith:(id<OCVInputArrayable>)image scaleFactor:(double)scaleFactor minNeighbours:(NSInteger)minNeighbours;
- (NSArray<OCVRectValue *>*)detectMultiscaleWith:(id<OCVInputArrayable>)image scaleFactor:(double)scaleFactor minNeighbours:(NSInteger)minNeighbours flags:(NSInteger)flags;
- (NSArray<OCVRectValue *>*)detectMultiscaleWith:(id<OCVInputArrayable>)image scaleFactor:(double)scaleFactor minNeighbours:(NSInteger)minNeighbours flags:(NSInteger)flags minSize:(OCVSize)minSize;
- (NSArray<OCVRectValue *>*)detectMultiscaleWith:(id<OCVInputArrayable>)image scaleFactor:(double)scaleFactor minNeighbours:(NSInteger)minNeighbours flags:(NSInteger)flags minSize:(OCVSize)minSize maxSize:(OCVSize)maxSize;
- (NSArray<OCVRectValue *>*)detectMultiscaleWith:(id<OCVInputArrayable>)image scaleFactor:(double)scaleFactor minNeighbours:(NSInteger)minNeighbours flags:(NSInteger)flags minSize:(OCVSize)minSize maxSize:(OCVSize)maxSize outputRejectLevels:(BOOL)outputRejectLevels;

@end
