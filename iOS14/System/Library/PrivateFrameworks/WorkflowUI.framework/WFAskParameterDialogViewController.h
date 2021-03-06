/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WFCompactDialogViewController.h>
#import <libobjc.A.dylib/WFModuleSummaryEditorDelegate.h>
#import <libobjc.A.dylib/WFParameterEditorHostingCellDelegate.h>

@class WFAction, WFParameterEditorHostingCell, WFModuleSummaryEditor, WFSlotTemplateSlot, UIButton, WFCompactUnlockService, NSString;

@interface WFAskParameterDialogViewController : WFCompactDialogViewController <WFModuleSummaryEditorDelegate, WFParameterEditorHostingCellDelegate> {

	WFAction* _fakeAction;
	WFParameterEditorHostingCell* _hostingCell;
	WFModuleSummaryEditor* _summaryEditor;
	WFSlotTemplateSlot* _summarySlot;
	UIButton* _modalButton;
	WFCompactUnlockService* _unlockService;

}

@property (nonatomic,retain) WFAction * fakeAction;                                   //@synthesize fakeAction=_fakeAction - In the implementation block
@property (nonatomic,retain) WFParameterEditorHostingCell * hostingCell;              //@synthesize hostingCell=_hostingCell - In the implementation block
@property (nonatomic,retain) WFModuleSummaryEditor * summaryEditor;                   //@synthesize summaryEditor=_summaryEditor - In the implementation block
@property (nonatomic,retain) WFSlotTemplateSlot * summarySlot;                        //@synthesize summarySlot=_summarySlot - In the implementation block
@property (nonatomic,retain) UIButton * modalButton;                                  //@synthesize modalButton=_modalButton - In the implementation block
@property (nonatomic,readonly) WFCompactUnlockService * unlockService;                //@synthesize unlockService=_unlockService - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)singleButtonSlotForParameter:(id)arg1 state:(id)arg2 ;
-(void)done;
-(id)initWithRequest:(id)arg1 ;
-(void)loadView;
-(WFAction *)fakeAction;
-(void)setFakeAction:(WFAction *)arg1 ;
-(void)summaryEditor:(id)arg1 didCommitParameterState:(id)arg2 ;
-(void)summaryEditorDidRequestTextEntry:(id)arg1 ;
-(void)summaryEditorDidFinish:(id)arg1 returnToKeyboard:(BOOL)arg2 withTextAttachmentToEdit:(id)arg3 ;
-(void)parameterEditorCellDidInvalidateSize:(id)arg1 ;
-(void)parameterEditorCell:(id)arg1 didUpdateParameterState:(id)arg2 ;
-(double)contentHeightForWidth:(double)arg1 withMaximumVisibleHeight:(double)arg2 ;
-(WFCompactUnlockService *)unlockService;
-(void)modalButtonTapped:(id)arg1 ;
-(WFParameterEditorHostingCell *)hostingCell;
-(void)setHostingCell:(WFParameterEditorHostingCell *)arg1 ;
-(WFModuleSummaryEditor *)summaryEditor;
-(void)setSummaryEditor:(WFModuleSummaryEditor *)arg1 ;
-(WFSlotTemplateSlot *)summarySlot;
-(void)setSummarySlot:(WFSlotTemplateSlot *)arg1 ;
-(UIButton *)modalButton;
-(void)setModalButton:(UIButton *)arg1 ;
@end

