/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
*/

#import <IconServices/IconServices-Structs.h>
#import <libobjc.A.dylib/ISCompositorRecipe.h>

@interface ISiosDocumentRecipe : NSObject <ISCompositorRecipe> {

	unsigned long long _options;

}

@property (assign,nonatomic) unsigned long long options;              //@synthesize options=_options - In the implementation block
-(id)init;
-(CGSize)badgeSizeForSize:(CGSize)arg1 scale:(double)arg2 ;
-(unsigned long long)options;
-(void)setOptions:(unsigned long long)arg1 ;
-(id)layerTreeForSize:(CGSize)arg1 scale:(double)arg2 ;
@end

