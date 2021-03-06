/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDLayoutGeometry : NSObject <NSCopying, NSMutableCopying> {
    struct CGSize { 
        float width; 
        float height; 
    }  mSize;
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    }  mTransform;
}

@property (nonatomic, readonly) struct CGSize { float x1; float x2; } size;
@property (nonatomic, readonly) struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; } transform;

+ (id)geometryFromFullTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;

- (struct CGPoint { float x1; float x2; })center;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (BOOL)differsInMoreThanTranslationFrom:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frame;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })fullTransform;
- (id)geometryByOutsettingBy:(struct CGSize { float x1; float x2; })arg1;
- (id)geometryByTransformingBy:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (id)geometryByTranslatingBy:(struct CGPoint { float x1; float x2; })arg1;
- (unsigned int)hash;
- (id)infoGeometry;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithInfoGeometry:(id)arg1;
- (id)initWithSize:(struct CGSize { float x1; float x2; })arg1 transform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg2;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })inverseTransform;
- (BOOL)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (struct CGSize { float x1; float x2; })size;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transform;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transformByConcatenatingTransformTo:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;

@end
