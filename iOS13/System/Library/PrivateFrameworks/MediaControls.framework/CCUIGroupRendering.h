/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

@class NSArray, CALayer;


@protocol CCUIGroupRendering <NSObject>
@property (getter=isGroupRenderingRequired,nonatomic,readonly) BOOL groupRenderingRequired; 
@property (nonatomic,readonly) NSArray * punchOutRootLayers; 
@property (nonatomic,readonly) CALayer * punchOutRootLayer; 
@optional
-(CALayer *)punchOutRootLayer;

@required
-(NSArray *)punchOutRootLayers;
-(BOOL)isGroupRenderingRequired;

@end

