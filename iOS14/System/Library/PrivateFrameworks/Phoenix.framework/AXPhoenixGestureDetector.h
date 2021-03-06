/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Phoenix.framework/Phoenix
*/

#import <Phoenix/Phoenix-Structs.h>
#import <libobjc.A.dylib/AXPhoenixClassifierDelegate.h>
#import <libobjc.A.dylib/AXPhoenixMitigatorDelegate.h>
#import <libobjc.A.dylib/AXPhoenixAssetMonitorDelegate.h>

@protocol AXPhoenixGestureDetectorDelegate, OS_dispatch_queue;
@class CMMotionManager, NSOperationQueue, AXPhoenixClassifier, AXPhoenixMitigator, AXPhoenixConfiguration, AXPhoenixAnalytics, NSObject, AXPhoenixAssetMonitor, NSURL, NSString;

@interface AXPhoenixGestureDetector : NSObject <AXPhoenixClassifierDelegate, AXPhoenixMitigatorDelegate, AXPhoenixAssetMonitorDelegate> {

	CMMotionManager* _cmMotionManager;
	NSOperationQueue* _motionInputQueue;
	AXPhoenixClassifier* _classifier;
	id<AXPhoenixGestureDetectorDelegate> _delegate;
	AXPhoenixMitigator* _mitigator;
	AXPhoenixConfiguration* _configuration;
	AXPhoenixAnalytics* _analytics;
	NSObject*<OS_dispatch_queue> _queue;
	AXPhoenixAssetMonitor* _assetMonitor;
	BOOL _clientStartedMotion;
	NSURL* _localURL;
	unsigned long long _assetVersion;
	float _tapSpeed;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)urlOfModelInThisBundle;
-(void)_startWithCompletion:(/*^block*/id)arg1 ;
-(void)stopWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)startWithCompletion:(/*^block*/id)arg1 ;
-(void)phoenixMitigator:(id)arg1 displayOnDidChange:(BOOL)arg2 ;
-(void)phoenixMitigator:(id)arg1 touchOnDidChange:(BOOL)arg2 ;
-(BOOL)_initializeAssetDrivenComponentsWithLocalURL:(id)arg1 assetVersion:(unsigned long long)arg2 ;
-(void)_resetAssetDrivenComponents;
-(id)_createConfiguration;
-(id)_createClassifierModelURL;
-(void)setTapSpeed:(float)arg1 ;
-(void)_startClassifierWithCompletion:(/*^block*/id)arg1 ;
-(void)_stopWithCompletion:(/*^block*/id)arg1 ;
-(void)_stopClassifier;
-(void)_setPolicyOption:(int)arg1 ;
-(id)_mobileAssetPathForConfigOrNil;
-(id)_mobileAssetURLForModelOrNil;
-(BOOL)needsToUpdateModelToVersion:(long long)arg1 ;
-(void)phoenixClassifierDidDetectDoubleTap:(id)arg1 data:(SCD_Struct_AX0)arg2 context:(id)arg3 ;
-(void)phoenixClassifierDidDetectTripleTap:(id)arg1 data:(SCD_Struct_AX0)arg2 context:(id)arg3 ;
-(void)phoenixClassifier:(id)arg1 failedWithError:(id)arg2 ;
-(void)phoenixMitigator:(id)arg1 didFailWithError:(id)arg2 ;
-(void)modelDidUpdate:(id)arg1 assetVersion:(unsigned long long)arg2 ;
-(void)setDoubleTapPolicy;
-(void)setTripleTapPolicy;
-(void)setGeneralPolicy;
@end

