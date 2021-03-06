/*
* Generated on Thursday, January 14, 2021 at 2:27:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
*/

#import <libobjc.A.dylib/ARUIRendering.h>

@protocol MTLRenderPipelineState;
@class NSString;

@interface ARUIRenderState : NSObject <ARUIRendering> {

	id<MTLRenderPipelineState> _renderPipelineState;

}

@property (nonatomic,retain) id<MTLRenderPipelineState> renderPipelineState; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setRenderPipelineState:(id<MTLRenderPipelineState>)arg1 ;
-(id)initWithDevice:(id)arg1 library:(id)arg2 ;
-(id)renderPipelineDescriptorFromLibrary:(id)arg1 ;
-(id<MTLRenderPipelineState>)renderPipelineState;
@end

