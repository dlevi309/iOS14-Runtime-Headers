/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@protocol UITextDropDelegate <NSObject>
@optional
-(unsigned long long)textDroppableView:(id)arg1 willBecomeEditableForDrop:(id)arg2;
-(id)textDroppableView:(id)arg1 proposalForDrop:(id)arg2;
-(void)textDroppableView:(id)arg1 dropSessionDidUpdate:(id)arg2;
-(void)textDroppableView:(id)arg1 dropSessionDidEnter:(id)arg2;
-(void)textDroppableView:(id)arg1 dropSessionDidExit:(id)arg2;
-(void)textDroppableView:(id)arg1 willPerformDrop:(id)arg2;
-(void)textDroppableView:(id)arg1 dropSessionDidEnd:(id)arg2;
-(id)textDroppableView:(id)arg1 previewForDroppingAllItemsWithDefault:(id)arg2;

@end

