/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <libobjc.A.dylib/WFSequentialParameterInputProviderDelegate.h>
#import <libobjc.A.dylib/WFUserInterfaceHost.h>
#import <libobjc.A.dylib/WFActionParameterInputProvider.h>

@protocol WFDialogPresenter;
@class NSString, WFWorkflowReference, WFAction, WFWorkflowController, NSArray, WFSequentialParameterInputProvider, NSDate, WFDialogAttribution;

@interface WFDialogTransformer : NSObject <WFSequentialParameterInputProviderDelegate, WFUserInterfaceHost, WFActionParameterInputProvider> {

	NSString* _userInterfaceType;
	WFWorkflowReference* _workflow;
	WFAction* _currentAction;
	WFWorkflowController* _workflowController;
	id<WFDialogPresenter> _dialogPresenter;
	NSArray* _allowedParameterClasses;
	long long _numberOfDialogsPresented;
	WFSequentialParameterInputProvider* _parameterInputProvider;
	/*^block*/id _parameterInputCompletionHandler;
	NSDate* _workflowStartTime;

}

@property (nonatomic,retain) WFSequentialParameterInputProvider * parameterInputProvider;              //@synthesize parameterInputProvider=_parameterInputProvider - In the implementation block
@property (nonatomic,copy) id parameterInputCompletionHandler;                                         //@synthesize parameterInputCompletionHandler=_parameterInputCompletionHandler - In the implementation block
@property (nonatomic,retain) NSDate * workflowStartTime;                                               //@synthesize workflowStartTime=_workflowStartTime - In the implementation block
@property (nonatomic,retain) WFWorkflowReference * workflow;                                           //@synthesize workflow=_workflow - In the implementation block
@property (nonatomic,retain) WFAction * currentAction;                                                 //@synthesize currentAction=_currentAction - In the implementation block
@property (assign,nonatomic,__weak) WFWorkflowController * workflowController;                         //@synthesize workflowController=_workflowController - In the implementation block
@property (nonatomic,retain) id<WFDialogPresenter> dialogPresenter;                                    //@synthesize dialogPresenter=_dialogPresenter - In the implementation block
@property (nonatomic,readonly) WFDialogAttribution * attribution; 
@property (nonatomic,retain) NSArray * allowedParameterClasses;                                        //@synthesize allowedParameterClasses=_allowedParameterClasses - In the implementation block
@property (assign,nonatomic) long long numberOfDialogsPresented;                                       //@synthesize numberOfDialogsPresented=_numberOfDialogsPresented - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * userInterfaceType;                                           //@synthesize userInterfaceType=_userInterfaceType - In the implementation block
-(void)dismissPresentedContentWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setDialogPresenter:(id<WFDialogPresenter>)arg1 ;
-(WFWorkflowReference *)workflow;
-(WFDialogAttribution *)attribution;
-(id<WFDialogPresenter>)dialogPresenter;
-(void)setWorkflow:(WFWorkflowReference *)arg1 ;
-(WFAction *)currentAction;
-(void)cancel;
-(void)setCurrentAction:(WFAction *)arg1 ;
-(void)presentAlert:(id)arg1 ;
-(void)showDialogRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSString *)userInterfaceType;
-(void)showHandleInteraction:(id)arg1 prompt:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)showConfirmInteraction:(id)arg1 prompt:(id)arg2 requireAuthentication:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)showPreviewForContentCollection:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)requestActionInterfacePresentationForActionClassName:(id)arg1 classNamesByType:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)shouldNotHandoff;
-(id)dialogTransformer;
-(BOOL)openURL:(id)arg1 withBundleIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setParameterInputProvider:(WFSequentialParameterInputProvider *)arg1 ;
-(WFSequentialParameterInputProvider *)parameterInputProvider;
-(void)action:(id)arg1 provideInputForParameters:(id)arg2 withDefaultStates:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)action:(id)arg1 canProvideInputForParameter:(id)arg2 ;
-(void)sequentialParameterInputProvider:(id)arg1 didAdvanceToParameter:(id)arg2 action:(id)arg3 defaultState:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)sequentialParameterInputProvider:(id)arg1 didFinishWithInputtedStates:(id)arg2 ;
-(void)sequentialParameterInputProviderDidCancel:(id)arg1 ;
-(id)initWithWorkflow:(id)arg1 dialogPresenter:(id)arg2 ;
-(id)initWithWorkflow:(id)arg1 dialogPresenter:(id)arg2 userInterfaceType:(id)arg3 ;
-(void)workflowWillBegin;
-(id)actionForAttribution;
-(void)handleSimpleAlert:(id)arg1 ;
-(void)handleAlertWithTextField:(id)arg1 ;
-(void)handleAlertWithDatePicker:(id)arg1 ;
-(void)handleAlertWithMultipleButtons:(id)arg1 ;
-(BOOL)usesModalComponentStyleWhenAskingForParameter:(id)arg1 ;
-(void)showAskParameterDialogForParameter:(id)arg1 action:(id)arg2 defaultState:(id)arg3 completion:(/*^block*/id)arg4 ;
-(WFWorkflowController *)workflowController;
-(void)setWorkflowController:(WFWorkflowController *)arg1 ;
-(NSArray *)allowedParameterClasses;
-(void)setAllowedParameterClasses:(NSArray *)arg1 ;
-(long long)numberOfDialogsPresented;
-(void)setNumberOfDialogsPresented:(long long)arg1 ;
-(id)parameterInputCompletionHandler;
-(void)setParameterInputCompletionHandler:(id)arg1 ;
-(NSDate *)workflowStartTime;
-(void)setWorkflowStartTime:(NSDate *)arg1 ;
@end
