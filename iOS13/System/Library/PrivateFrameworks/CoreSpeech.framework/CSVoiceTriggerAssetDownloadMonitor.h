/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <CoreSpeech/CSEventMonitor.h>

@interface CSVoiceTriggerAssetDownloadMonitor : CSEventMonitor {

	int _notifyToken;

}
+(id)sharedInstance;
-(id)init;
-(void)_stopMonitoring;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)_notifyObserver:(id)arg1 ;
-(const char*)_notificationKey;
-(void)_didInstalledNewVoiceTriggerAsset;
@end

