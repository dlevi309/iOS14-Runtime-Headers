/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
*/

#import <libobjc.A.dylib/VTUIEnrollTrainingViewControllerDelegate.h>
#import <libobjc.A.dylib/BFFFinishSetupFlowControlling.h>

@class VTUIEnrollTrainingViewController, NSString;

@interface BFFFinishSetupAssistantOptInController : NSObject <VTUIEnrollTrainingViewControllerDelegate, BFFFinishSetupFlowControlling> {

	BFFFinishSetupAssistantOptInController* _selfReference;
	VTUIEnrollTrainingViewController* _enrollmentController;
	BOOL _willOfferVoiceTrigger;
	/*^block*/id _completion;

}

@property (nonatomic,copy) id completion;                           //@synthesize completion=_completion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)finishSetupAssistantOptInController;
-(void)setCompletion:(id)arg1 ;
-(id)init;
-(id)completion;
-(void)continueSetup;
-(void)skipSetup;
-(void)showLearnMore;
-(id)viewControllerWithCompletion:(/*^block*/id)arg1 ;
-(void)performExtendedInitializationWithCompletion:(/*^block*/id)arg1 ;
@end

