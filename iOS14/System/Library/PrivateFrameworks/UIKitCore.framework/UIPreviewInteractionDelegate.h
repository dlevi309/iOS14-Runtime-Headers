/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UIPreviewInteractionDelegate <NSObject>
@optional
-(BOOL)previewInteractionShouldBegin:(id)arg1;
-(void)previewInteraction:(id)arg1 didUpdateCommitTransition:(double)arg2 ended:(BOOL)arg3;

@required
-(void)previewInteractionDidCancel:(id)arg1;
-(void)previewInteraction:(id)arg1 didUpdatePreviewTransition:(double)arg2 ended:(BOOL)arg3;

@end

