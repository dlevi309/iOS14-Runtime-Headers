/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PointerUIServices.framework/PointerUIServices
*/

#import <PointerUIServices/PointerUIServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSValue, PSMatchMoveSource, PSPointerPortalSourceCollection, PSPointerShape;

@interface PSPointerHoverRegion : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	unsigned long long _coordinateSpaceSourceLayerRenderID;
	CGRect _contentBounds;
	double _contentHoverInverseScale;
	NSValue* _contentSlipValue;
	PSMatchMoveSource* _contentMatchMoveSource;
	CGRect _hitTestBounds;
	PSPointerPortalSourceCollection* _pointerPortalSourceCollection;
	unsigned long long _pointerRecenteringAxes;
	PSPointerShape* _pointerShape;
	NSValue* _pointerSlipValue;
	double _pointerVisualIntensity;
	unsigned long long _preferredPointerMaterialLuminance;
	unsigned _coordinateSpaceSourceContextID;
	long long _overlayEffectStyle;
	BOOL _shouldPointerUnderlayContent;

}

@property (nonatomic,readonly) unsigned long long coordinateSpaceSourceLayerRenderID;                             //@synthesize coordinateSpaceSourceLayerRenderID=_coordinateSpaceSourceLayerRenderID - In the implementation block
@property (nonatomic,readonly) unsigned coordinateSpaceSourceContextID;                                           //@synthesize coordinateSpaceSourceContextID=_coordinateSpaceSourceContextID - In the implementation block
@property (nonatomic,copy,readonly) PSPointerPortalSourceCollection * pointerPortalSourceCollection;              //@synthesize pointerPortalSourceCollection=_pointerPortalSourceCollection - In the implementation block
@property (nonatomic,copy,readonly) PSMatchMoveSource * contentMatchMoveSource;                                   //@synthesize contentMatchMoveSource=_contentMatchMoveSource - In the implementation block
@property (nonatomic,readonly) CGRect contentBounds;                                                              //@synthesize contentBounds=_contentBounds - In the implementation block
@property (nonatomic,readonly) double contentHoverInverseScale;                                                   //@synthesize contentHoverInverseScale=_contentHoverInverseScale - In the implementation block
@property (nonatomic,copy,readonly) NSValue * contentSlipValue;                                                   //@synthesize contentSlipValue=_contentSlipValue - In the implementation block
@property (nonatomic,readonly) CGRect hitTestBounds;                                                              //@synthesize hitTestBounds=_hitTestBounds - In the implementation block
@property (getter=isOverlayEffectVisible,nonatomic,readonly) BOOL overlayEffectVisible; 
@property (nonatomic,readonly) long long overlayEffectStyle;                                                      //@synthesize overlayEffectStyle=_overlayEffectStyle - In the implementation block
@property (nonatomic,readonly) unsigned long long preferredPointerMaterialLuminance;                              //@synthesize preferredPointerMaterialLuminance=_preferredPointerMaterialLuminance - In the implementation block
@property (nonatomic,copy,readonly) PSPointerShape * pointerShape;                                                //@synthesize pointerShape=_pointerShape - In the implementation block
@property (nonatomic,copy,readonly) NSValue * pointerSlipValue;                                                   //@synthesize pointerSlipValue=_pointerSlipValue - In the implementation block
@property (nonatomic,readonly) unsigned long long pointerRecenteringAxes;                                         //@synthesize pointerRecenteringAxes=_pointerRecenteringAxes - In the implementation block
@property (nonatomic,readonly) double pointerVisualIntensity;                                                     //@synthesize pointerVisualIntensity=_pointerVisualIntensity - In the implementation block
@property (nonatomic,readonly) BOOL shouldPointerUnderlayContent;                                                 //@synthesize shouldPointerUnderlayContent=_shouldPointerUnderlayContent - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(PSPointerShape *)pointerShape;
-(CGRect)contentBounds;
-(unsigned long long)pointerRecenteringAxes;
-(PSPointerPortalSourceCollection *)pointerPortalSourceCollection;
-(id)_copyWithClass:(Class)arg1 ;
-(CGRect)hitTestBounds;
-(long long)overlayEffectStyle;
-(BOOL)isOverlayEffectVisible;
-(BOOL)isNumericDataValid;
-(unsigned long long)coordinateSpaceSourceLayerRenderID;
-(unsigned)coordinateSpaceSourceContextID;
-(PSMatchMoveSource *)contentMatchMoveSource;
-(double)contentHoverInverseScale;
-(NSValue *)contentSlipValue;
-(unsigned long long)preferredPointerMaterialLuminance;
-(NSValue *)pointerSlipValue;
-(double)pointerVisualIntensity;
-(BOOL)shouldPointerUnderlayContent;
@end
