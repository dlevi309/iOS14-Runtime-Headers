/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/CMPocketStateDelegate.h>
#import <libobjc.A.dylib/SBIdleTimerResetSource.h>

@class SBBacklightController, SBLockScreenManager, SBLockStateAggregator, CMPocketStateManager, NSString, DNDEventBehaviorResolutionService;

@interface SBNCScreenController : NSObject <CMPocketStateDelegate, SBIdleTimerResetSource> {

	BOOL _turnOnScreenForOutOfPocketEvent;
	unsigned _powerAssertionID;
	SBBacklightController* _backlightController;
	SBLockScreenManager* _lockScreenManager;
	SBLockStateAggregator* _lockStateAggregator;
	CMPocketStateManager* _pocketStateManager;
	NSString* _powerAssertionName;
	DNDEventBehaviorResolutionService* _dndEventBehaviorResolutionService;

}

@property (nonatomic,retain) SBBacklightController * backlightController;                                        //@synthesize backlightController=_backlightController - In the implementation block
@property (nonatomic,retain) SBLockScreenManager * lockScreenManager;                                            //@synthesize lockScreenManager=_lockScreenManager - In the implementation block
@property (nonatomic,retain) SBLockStateAggregator * lockStateAggregator;                                        //@synthesize lockStateAggregator=_lockStateAggregator - In the implementation block
@property (nonatomic,retain) CMPocketStateManager * pocketStateManager;                                          //@synthesize pocketStateManager=_pocketStateManager - In the implementation block
@property (assign,nonatomic) BOOL turnOnScreenForOutOfPocketEvent;                                               //@synthesize turnOnScreenForOutOfPocketEvent=_turnOnScreenForOutOfPocketEvent - In the implementation block
@property (nonatomic,copy) NSString * powerAssertionName;                                                        //@synthesize powerAssertionName=_powerAssertionName - In the implementation block
@property (assign,nonatomic) unsigned powerAssertionID;                                                          //@synthesize powerAssertionID=_powerAssertionID - In the implementation block
@property (nonatomic,retain) DNDEventBehaviorResolutionService * dndEventBehaviorResolutionService;              //@synthesize dndEventBehaviorResolutionService=_dndEventBehaviorResolutionService - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)pocketStateManager:(id)arg1 didUpdateState:(long long)arg2 ;
-(void)_releasePowerAssertion;
-(DNDEventBehaviorResolutionService *)dndEventBehaviorResolutionService;
-(void)setDndEventBehaviorResolutionService:(DNDEventBehaviorResolutionService *)arg1 ;
-(void)resetAutomaticLockStateForNotificationRequest:(id)arg1 ;
-(void)setPocketStateManager:(CMPocketStateManager *)arg1 ;
-(CMPocketStateManager *)pocketStateManager;
-(unsigned)powerAssertionID;
-(void)setPowerAssertionID:(unsigned)arg1 ;
-(void)turnOnScreenForNotificationRequest:(id)arg1 ;
-(SBBacklightController *)backlightController;
-(SBLockScreenManager *)lockScreenManager;
-(void)setLockScreenManager:(SBLockScreenManager *)arg1 ;
-(void)setBacklightController:(SBBacklightController *)arg1 ;
-(void)turnOnScreenIfPossibleForNotificationRequest:(id)arg1 ;
-(BOOL)_isDeviceUILocked;
-(void)_turnOnScreenForPocketMode;
-(void)_turnOnScreen;
-(BOOL)canTurnOnScreenForNotificationRequest:(id)arg1 ;
-(void)_turnOnScreenForOutOfPocketEventBeforeTimeInterval:(double)arg1 ;
-(SBLockStateAggregator *)lockStateAggregator;
-(void)_createOrResetPowerAssertionWithTimeout:(double)arg1 ;
-(void)_cancelTurnOnScreenForOutOfPocketEvents;
-(void)_turnOnScreenForOutOfPocketEventIfNecessary;
-(id)initWithBackLightController:(id)arg1 lockScreenManager:(id)arg2 lockStateAggregator:(id)arg3 ;
-(void)setLockStateAggregator:(SBLockStateAggregator *)arg1 ;
-(BOOL)turnOnScreenForOutOfPocketEvent;
-(void)setTurnOnScreenForOutOfPocketEvent:(BOOL)arg1 ;
-(NSString *)powerAssertionName;
-(void)setPowerAssertionName:(NSString *)arg1 ;
@end

