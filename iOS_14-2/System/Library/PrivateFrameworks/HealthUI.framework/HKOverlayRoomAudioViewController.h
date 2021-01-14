/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKOverlayRoomViewController.h>
#import <libobjc.A.dylib/HKAudioExposureDevicesDataSourceObserver.h>

@class NSNumber, NSString, NSMutableArray, HKAudioExposureDevicesDataSource;

@interface HKOverlayRoomAudioViewController : HKOverlayRoomViewController <HKAudioExposureDevicesDataSourceObserver> {

	NSNumber* _preferredOverlayIndex;
	NSString* _quantityTypeIdentifier;
	long long _preferredOverlay;
	NSMutableArray* _contextDelegates;
	HKAudioExposureDevicesDataSource* _audioExposureDevicesDataSource;

}

@property (nonatomic,readonly) NSString * quantityTypeIdentifier;                                            //@synthesize quantityTypeIdentifier=_quantityTypeIdentifier - In the implementation block
@property (nonatomic,readonly) long long preferredOverlay;                                                   //@synthesize preferredOverlay=_preferredOverlay - In the implementation block
@property (nonatomic,retain) NSMutableArray * contextDelegates;                                              //@synthesize contextDelegates=_contextDelegates - In the implementation block
@property (nonatomic,retain) HKAudioExposureDevicesDataSource * audioExposureDevicesDataSource;              //@synthesize audioExposureDevicesDataSource=_audioExposureDevicesDataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidLoad;
-(id)controllerTitleWithApplicationItems:(id)arg1 ;
-(id)primaryDisplayTypeWithApplicationItems:(id)arg1 ;
-(id)contextSectionsForMode:(long long)arg1 applicationItems:(id)arg2 overlayChartController:(id)arg3 ;
-(id)initialSelectedContextForMode:(long long)arg1 ;
-(id)createViewControllerForMode:(long long)arg1 displayDate:(id)arg2 applicationItems:(id)arg3 ;
-(id)initWithDisplayDate:(id)arg1 applicationItems:(id)arg2 mode:(long long)arg3 identifier:(id)arg4 preferredOverlay:(long long)arg5 ;
-(id)showAllFiltersButtonTitle;
-(NSString *)quantityTypeIdentifier;
-(long long)preferredOverlay;
-(NSMutableArray *)contextDelegates;
-(/*^block*/id)_buildGranularAverageDataSourceTitleFromTimeScope;
-(void)setContextDelegates:(NSMutableArray *)arg1 ;
-(void)_setupAudioExposureDataSourceIfNeeded;
-(id)initWithDisplayDate:(id)arg1 applicationItems:(id)arg2 mode:(long long)arg3 identifier:(id)arg4 preferredOverlay:(long long)arg5 audioExposureDeviceDataSource:(id)arg6 ;
-(void)_registerForAudioExposureDeviceUpdates;
-(BOOL)_isEnvironmentalAudioExposureRoom;
-(id)_buildAudioAverageDataSourceWithUnitController:(id)arg1 displayType:(id)arg2 healthStore:(id)arg3 averageOverVisibleRange:(BOOL)arg4 ;
-(long long)_initialPillForPreference:(long long)arg1 ;
-(id)_makeHeadphoneDeviceFiltersUsingContextCreator:(/*^block*/id)arg1 ;
-(HKAudioExposureDevicesDataSource *)audioExposureDevicesDataSource;
-(id)_headphonePredicateForDevices:(id)arg1 withName:(id)arg2 ;
-(void)_reloadAudioExposureDevices;
-(BOOL)_isAudioExposureDevicesSupported;
-(void)setAudioExposureDevicesDataSource:(HKAudioExposureDevicesDataSource *)arg1 ;
-(/*^block*/id)_userInfoCreationBlockForLEQ;
-(/*^block*/id)_buildAverageDataSourceTitleFromTimeScope;
-(void)audioExposureDataSourceIsReady:(id)arg1 ;
@end
