/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreMaterial.framework/CoreMaterial
*/

#import <CoreMaterial/CoreMaterial-Structs.h>
#import <libobjc.A.dylib/MTTinting.h>

@protocol MTVisualStyleSetProviding;
@class NSDictionary, NSString, CAFilter;

@interface MTCoreMaterialVisualStyling : NSObject <MTTinting> {

	id<MTVisualStyleSetProviding> _visualStyleSet;
	NSString* _visualStyleName;
	CAFilter* _composedFilter;
	NSDictionary* _tintColorDescription;
	CGColorRef _tintColor;
	double _tintAlpha;
	NSString* _compositingFilter;
	NSString* _filterType;
	NSDictionary* _filterProperties;

}

@property (nonatomic,readonly) NSString * visualStyleSetName; 
@property (nonatomic,readonly) NSString * visualStyleName; 
@property (getter=_composedFilter,nonatomic,readonly) CAFilter * composedFilter; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSDictionary * tintColorDescription; 
@property (nonatomic,readonly) CGColorRef tintColor; 
@property (nonatomic,readonly) double tintAlpha; 
-(void)dealloc;
-(NSString *)description;
-(id)filterType;
-(CGColorRef)tintColor;
-(id)compositingFilter;
-(void)_processTintingDescription:(id)arg1 ;
-(void)_processBlendingDescription:(id)arg1 ;
-(void)_processFilteringDescription:(id)arg1 ;
-(id)initWithVisualStyleSet:(id)arg1 styleName:(id)arg2 description:(id)arg3 andDescendantDescriptions:(id)arg4 ;
-(id)_composedFilter;
-(id)filterProperties;
-(NSString *)visualStyleSetName;
-(NSString *)visualStyleName;
-(void)_applyToLayer:(id)arg1 withColorBlock:(/*^block*/id)arg2 ;
-(void)_getCompositingFilter:(id*)arg1 tintColor:(CGColor*)arg2 ;
-(void)_getFilterType:(id*)arg1 vibrantColor:(CGColor*)arg2 tintColor:(CGColor*)arg3 inputReversed:(BOOL*)arg4 ;
-(NSDictionary *)tintColorDescription;
-(double)tintAlpha;
@end
