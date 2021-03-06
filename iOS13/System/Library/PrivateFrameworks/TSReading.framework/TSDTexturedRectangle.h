/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CALayer, TSDTextureSet, NSMutableDictionary, NSMutableArray;

@interface TSDTexturedRectangle : NSObject <NSCopying> {

	CGPoint mOffset;
	CGPoint mOriginalPosition;
	CGSize mSize;
	CGRect mContentRect;
	CGRect mOriginalFrame;
	CALayer* mLayer;
	/*^block*/id mRenderBlock;
	CGImageRef mSourceImage;
	CGImageRef mBakedImage;
	TSDTextureSet* mParent;
	int mTextureType;
	double mTextureOpacity;
	unsigned mSingleTextureName;
	BOOL mSingleTextureContainsMipmaps;
	BOOL mIsFlattened;
	NSMutableDictionary* mAttributes;
	NSMutableArray* mTags;
	CGColorSpaceRef mColorSpace;
	CGRect mFrameOnCanvas;

}

@property (nonatomic,readonly) unsigned singleTextureName; 
@property (nonatomic,readonly) unsigned singleTextureTarget; 
@property (assign,nonatomic) CGPoint originalPosition; 
@property (assign,nonatomic) CGPoint offset; 
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) CGRect frame; 
@property (assign,nonatomic) CGRect contentRect; 
@property (assign,nonatomic) TSDTextureSet * parent; 
@property (nonatomic,readonly) CALayer * layer; 
@property (nonatomic,readonly) CGImageRef image; 
@property (nonatomic,readonly) float opacityFromAttributes; 
@property (nonatomic,readonly) CATransform3D transformFromAttributes; 
@property (nonatomic,retain) NSMutableDictionary * attributes; 
@property (nonatomic,retain) NSMutableArray * tags; 
@property (assign,nonatomic) int textureType; 
@property (assign,nonatomic) double textureOpacity; 
@property (nonatomic,readonly) double singleTextureOpacity; 
@property (assign,nonatomic) BOOL isFlattened; 
@property (assign,nonatomic) CGColorSpaceRef colorSpace; 
@property (nonatomic,readonly) BOOL isRenderable; 
@property (nonatomic,readonly) BOOL isBackgroundTexture; 
@property (nonatomic,readonly) CALayer * parentLayer; 
@property (assign,nonatomic) CGRect frameOnCanvas; 
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(TSDTextureSet *)parent;
-(void)setParent:(TSDTextureSet *)arg1 ;
-(CGSize)size;
-(NSMutableDictionary *)attributes;
-(void)setAttributes:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)tags;
-(CGImageRef)image;
-(CGColorSpaceRef)colorSpace;
-(void)setColorSpace:(CGColorSpaceRef)arg1 ;
-(int)textureType;
-(void)setOffset:(CGPoint)arg1 ;
-(CGRect)frame;
-(id)initWithCGImage:(CGImageRef)arg1 ;
-(void)setTextureType:(int)arg1 ;
-(CGPoint)offset;
-(void)setTags:(NSMutableArray *)arg1 ;
-(void)teardown;
-(CALayer *)layer;
-(id)initWithLayer:(id)arg1 ;
-(CGRect)contentRect;
-(void)setContentRect:(CGRect)arg1 ;
-(id)initWithSize:(CGSize)arg1 offset:(CGPoint)arg2 renderBlock:(/*^block*/id)arg3 ;
-(void)setTextureOpacity:(double)arg1 ;
-(void)releaseSingleTexture;
-(CGColorSpaceRef)p_colorSpace;
-(CGImageRef)p_newImageAndBufferWithAngle:(double)arg1 scale:(double)arg2 offset:(CGPoint)arg3 ;
-(void)resetToSourceImage;
-(unsigned)singleTextureTarget;
-(void)setupSingleTextureAndGenerateMipMaps:(BOOL)arg1 ;
-(void)setupSingleTexture;
-(CGRect)boundingRectForStage:(long long)arg1 isBuildIn:(BOOL)arg2 ;
-(float)opacityFromAttributes;
-(CATransform3D)transformFromAttributes;
-(void)adjustAnchorRelativeToParentsCenterOfRotation:(CGPoint)arg1 isMagicMove:(BOOL)arg2 ;
-(void)resetAnchorPoint;
-(BOOL)isRenderable;
-(void)renderLayerContentsIfNeeded;
-(unsigned)singleTextureName;
-(double)singleTextureOpacity;
-(void)bakeLayerWithAngle:(double)arg1 scale:(double)arg2 ;
-(void)renderIntoContext:(CGContextRef)arg1 ;
-(BOOL)isBackgroundTexture;
-(CALayer *)parentLayer;
-(CGRect)frameOnCanvas;
-(char*)p_setupTextureDataWithSize:(CGSize)arg1 isBGRA:(BOOL)arg2 ;
-(BOOL)isFlattened;
-(void)setIsFlattened:(BOOL)arg1 ;
-(CGPoint)originalPosition;
-(void)setOriginalPosition:(CGPoint)arg1 ;
-(double)textureOpacity;
-(void)setFrameOnCanvas:(CGRect)arg1 ;
@end

