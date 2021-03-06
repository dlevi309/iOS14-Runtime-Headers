/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <libobjc.A.dylib/HUFeatureOnboardingFlow.h>

@protocol HUConfigurationViewController;
@class HMHome, NAFuture, UIViewController, NSString;

@interface HUNaturalLightingOnboardingFlow : NSObject <HUFeatureOnboardingFlow> {

	BOOL _shouldAbortThisOnboardingFlowGroup;
	BOOL _shouldAbortAllOnboarding;
	HMHome* _home;
	NAFuture* _onboardingFuture;
	UIViewController*<HUConfigurationViewController> _initialViewController;
	UIViewController*<HUConfigurationViewController> _setupViewController;

}

@property (assign,nonatomic) BOOL shouldAbortThisOnboardingFlowGroup;                                             //@synthesize shouldAbortThisOnboardingFlowGroup=_shouldAbortThisOnboardingFlowGroup - In the implementation block
@property (assign,nonatomic) BOOL shouldAbortAllOnboarding;                                                       //@synthesize shouldAbortAllOnboarding=_shouldAbortAllOnboarding - In the implementation block
@property (nonatomic,retain) UIViewController*<HUConfigurationViewController> setupViewController;                //@synthesize setupViewController=_setupViewController - In the implementation block
@property (nonatomic,retain) NAFuture * onboardingFuture;                                                         //@synthesize onboardingFuture=_onboardingFuture - In the implementation block
@property (nonatomic,retain) UIViewController*<HUConfigurationViewController> initialViewController;              //@synthesize initialViewController=_initialViewController - In the implementation block
@property (nonatomic,retain) HMHome * home;                                                                       //@synthesize home=_home - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIViewController*<HUConfigurationViewController>)setupViewController;
-(id)processUserInput:(id)arg1 ;
-(void)setOnboardingFuture:(NAFuture *)arg1 ;
-(BOOL)shouldAbortThisOnboardingFlowGroup;
-(BOOL)shouldAbortAllOnboarding;
-(UIViewController*<HUConfigurationViewController>)initialViewController;
-(void)setInitialViewController:(UIViewController*<HUConfigurationViewController>)arg1 ;
-(void)setShouldAbortThisOnboardingFlowGroup:(BOOL)arg1 ;
-(void)setShouldAbortAllOnboarding:(BOOL)arg1 ;
-(NAFuture *)onboardingFuture;
-(NSString *)description;
-(void)setSetupViewController:(UIViewController*<HUConfigurationViewController>)arg1 ;
-(void)setHome:(HMHome *)arg1 ;
-(HMHome *)home;
-(id)initWithUsageOptions:(id)arg1 home:(id)arg2 ;
@end

