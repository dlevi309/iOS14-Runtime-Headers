/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class NSHashTable;

@interface SBVolumeHardwareButtonActions : NSObject {

	BOOL _volumeIncreaseIsDown;
	BOOL _volumeDecreaseIsDown;
	NSHashTable* _volumePressBandits;
	/*^block*/id _volumeIncreaseUpEventBlock;
	/*^block*/id _volumeDecreaseUpEventBlock;

}
-(void)cancelVolumePress;
-(void)addVolumePressBandit:(id)arg1 ;
-(void)removeVolumePressBandit:(id)arg1 ;
-(void)volumeIncreasePressDownWithModifiers:(long long)arg1 ;
-(void)volumeIncreasePressUp;
-(void)volumeDecreasePressDownWithModifiers:(long long)arg1 ;
-(void)volumeDecreasePressUp;
-(BOOL)_handleVolumeButtonDownForIncrease:(BOOL)arg1 modifiers:(long long)arg2 ;
-(BOOL)_handleVolumeButtonUpForIncrease:(BOOL)arg1 ;
-(BOOL)_handleVolumeIncreaseUp;
-(BOOL)_handleVolumeDecreaseUp;
-(BOOL)_sendVolumeButtonToSBUIControllerForIncrease:(BOOL)arg1 down:(BOOL)arg2 ;
-(void)_launchVolumeSettings;
-(void)_sendBanditsVolumeIncreased;
-(void)_sendBanditsVolumeDecreased;
-(BOOL)_sendVolumeButtonDownToSpringBoardInternalUIForIncrease:(BOOL)arg1 ;
-(BOOL)_sendVolumeButtonDownToLegacyRegisteredClientsForIncrease:(BOOL)arg1 ;
-(BOOL)_sendVolumeButtonDownToSBUIControllerForIncrease:(BOOL)arg1 ;
@end
