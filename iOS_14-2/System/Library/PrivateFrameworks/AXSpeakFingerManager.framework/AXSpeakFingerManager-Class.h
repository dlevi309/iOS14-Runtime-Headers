/*
* Generated on Thursday, January 14, 2021 at 2:27:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXSpeakFingerManager.framework/AXSpeakFingerManager
*/

#import <AXSpeakFingerManager/AXSpeakFingerManager-Structs.h>
#import <AXSpeakFingerManager/AXOratorDelegate.h>
#import <AXSpeakFingerManager/AXUIClientDelegate.h>
#import <AXSpeakFingerManager/AXUIService.h>

@class AXUIClient, NSArray, NSMutableArray, AXElement, AXOrator, UIImpactFeedbackGenerator, NSString;

@interface AXSpeakFingerManager : NSObject <AXOratorDelegate, AXUIClientDelegate, AXUIService> {

	AXUIClient* _voiceOverDisplayManagerClient;
	BOOL _unitTestSpeaking;
	BOOL _inUnitTestMode;
	unsigned long long _speakFingerState;
	NSArray* _elementsForUnitTests;
	NSMutableArray* _stateUpdateBlocks;
	AXElement* _currentSpeakFingerElement;
	AXOrator* _orator;
	UIImpactFeedbackGenerator* _hapticGenerator;
	NSString* _springBoardActionHandlerId;
	CGPoint _lastTouchPoint;

}

@property (nonatomic,retain) NSMutableArray * stateUpdateBlocks;                       //@synthesize stateUpdateBlocks=_stateUpdateBlocks - In the implementation block
@property (nonatomic,retain) AXElement * currentSpeakFingerElement;                    //@synthesize currentSpeakFingerElement=_currentSpeakFingerElement - In the implementation block
@property (assign,nonatomic) CGPoint lastTouchPoint;                                   //@synthesize lastTouchPoint=_lastTouchPoint - In the implementation block
@property (nonatomic,retain) AXOrator * orator;                                        //@synthesize orator=_orator - In the implementation block
@property (assign,nonatomic) BOOL unitTestSpeaking;                                    //@synthesize unitTestSpeaking=_unitTestSpeaking - In the implementation block
@property (assign,nonatomic) BOOL inUnitTestMode;                                      //@synthesize inUnitTestMode=_inUnitTestMode - In the implementation block
@property (nonatomic,retain) UIImpactFeedbackGenerator * hapticGenerator;              //@synthesize hapticGenerator=_hapticGenerator - In the implementation block
@property (nonatomic,retain) NSString * springBoardActionHandlerId;                    //@synthesize springBoardActionHandlerId=_springBoardActionHandlerId - In the implementation block
@property (assign,nonatomic) unsigned long long speakFingerState;                      //@synthesize speakFingerState=_speakFingerState - In the implementation block
@property (nonatomic,retain) NSArray * elementsForUnitTests;                           //@synthesize elementsForUnitTests=_elementsForUnitTests - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(BOOL)inUnitTestMode;
-(void)setInUnitTestMode:(BOOL)arg1 ;
-(AXOrator *)orator;
-(void)oratorDidFinishSpeaking:(id)arg1 ;
-(void)dealloc;
-(double)desiredWindowLevelForContentViewController:(id)arg1 userInteractionEnabled:(BOOL)arg2 ;
-(id)processMessage:(id)arg1 withIdentifier:(unsigned long long)arg2 fromClientWithIdentifier:(id)arg3 error:(id*)arg4 ;
-(unsigned long long)speakFingerState;
-(void)fingerWasLiftedInSpeakUnderFingerMode;
-(void)setSpringBoardActionHandlerId:(NSString *)arg1 ;
-(void)setLastTouchPoint:(CGPoint)arg1 ;
-(NSString *)springBoardActionHandlerId;
-(void)_speakFingerStateChanged;
-(CGPoint)lastTouchPoint;
-(NSArray *)elementsForUnitTests;
-(void)_removeFocusRingForElement:(id)arg1 ;
-(void)_updateFocusRingForWebElement:(id)arg1 remove:(BOOL)arg2 ;
-(void)setCursorFrame:(CGRect)arg1 withPath:(CGPathRef)arg2 withContextId:(unsigned)arg3 element:(id)arg4 forceRefresh:(BOOL)arg5 animated:(BOOL)arg6 ;
-(NSMutableArray *)stateUpdateBlocks;
-(void)speakUnderFingerModeFinishedTalking;
-(void)speakElementAtLocation:(CGPoint)arg1 ;
-(void)userManuallyExitedSpeakUnderFingerMode;
-(void)speakUnderFingerModeStarted;
-(void)registerBlockForStateChange:(/*^block*/id)arg1 ;
-(void)setSpeakFingerState:(unsigned long long)arg1 ;
-(void)setElementsForUnitTests:(NSArray *)arg1 ;
-(void)setStateUpdateBlocks:(NSMutableArray *)arg1 ;
-(AXElement *)currentSpeakFingerElement;
-(void)setCurrentSpeakFingerElement:(AXElement *)arg1 ;
-(void)setOrator:(AXOrator *)arg1 ;
-(BOOL)unitTestSpeaking;
-(void)setUnitTestSpeaking:(BOOL)arg1 ;
-(UIImpactFeedbackGenerator *)hapticGenerator;
-(void)setHapticGenerator:(UIImpactFeedbackGenerator *)arg1 ;
@end
