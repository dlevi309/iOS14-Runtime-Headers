/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
*/

#import <WirelessProximity/WPClient.h>

@protocol WPZoneTrackerDelegate;
@interface WPZoneTracker : WPClient {

	BOOL _wantEntry;
	BOOL _wantExit;
	id<WPZoneTrackerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WPZoneTrackerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL wantEntry;                                         //@synthesize wantEntry=_wantEntry - In the implementation block
@property (assign,nonatomic) BOOL wantExit;                                          //@synthesize wantExit=_wantExit - In the implementation block
-(id)description;
-(void)invalidate;
-(id<WPZoneTrackerDelegate>)delegate;
-(void)setDelegate:(id<WPZoneTrackerDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(void)stateDidChange:(long long)arg1 ;
-(id)clientAsString;
-(void)failedToRegisterZones:(id)arg1 withError:(id)arg2 ;
-(void)enteredZone:(id)arg1 manufacturerData:(id)arg2 ;
-(void)exitedZone:(id)arg1 ;
-(void)fetchedCurrentlyTrackedZones:(id)arg1 ;
-(BOOL)wantExit;
-(void)setWantEntry:(BOOL)arg1 ;
-(void)setWantExit:(BOOL)arg1 ;
-(BOOL)wantEntry;
-(void)registerForZoneChangesMatching:(id)arg1 ;
-(void)unregisterForZoneChanges:(id)arg1 ;
-(void)unregisterAllZoneChanges;
-(void)getCurrentTrackedZones;
@end
