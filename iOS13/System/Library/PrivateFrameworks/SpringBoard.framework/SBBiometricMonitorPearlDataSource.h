/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/BKDevicePearlDelegate.h>
#import <libobjc.A.dylib/SBUIBiometricResourceObserver.h>
#import <libobjc.A.dylib/SBBiometricMonitorDataSource.h>

@class BKDevicePearl, NSHashTable, NSString;

@interface SBBiometricMonitorPearlDataSource : NSObject <BKDevicePearlDelegate, SBUIBiometricResourceObserver, SBBiometricMonitorDataSource> {

	BKDevicePearl* _pearlDevice;
	NSHashTable* _observers;
	BOOL _matching;
	BOOL _faceDetecting;
	BOOL _poseIsMarginal;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL presenceDetectRunning; 
@property (nonatomic,readonly) BOOL matchRunning; 
@property (nonatomic,readonly) BOOL poseIsMarginal; 
-(id)init;
-(void)dealloc;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)device:(id)arg1 pearlEventOccurred:(long long)arg2 ;
-(void)device:(id)arg1 pearlStateChanged:(long long)arg2 ;
-(void)biometricResource:(id)arg1 observeEvent:(unsigned long long)arg2 ;
-(void)_forEachObserver:(/*^block*/id)arg1 ;
-(BOOL)matchRunning;
-(BOOL)presenceDetectRunning;
-(BOOL)poseIsMarginal;
-(id)initWithPearlDevice:(id)arg1 ;
-(void)_setMatching:(BOOL)arg1 ;
-(void)_setFaceDetecting:(BOOL)arg1 ;
-(void)_setPoseIsMarginal:(BOOL)arg1 ;
-(void)_updateFaceDetecting;
-(void)_updateMatching;
@end

