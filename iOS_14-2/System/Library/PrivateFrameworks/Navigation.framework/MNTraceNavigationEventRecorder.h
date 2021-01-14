/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <libobjc.A.dylib/MNNavigationSessionObserver.h>

@class MNTraceRecorder, MNLocation, NSError, NSUUID, NSString;

@interface MNTraceNavigationEventRecorder : NSObject <MNNavigationSessionObserver> {

	MNTraceRecorder* _traceRecorder;
	MNLocation* _lastMatchedLocation;
	NSError* _previousSuppressedRerouteError;
	NSUUID* _currentPrimarySignID;
	NSUUID* _currentSecondarySignID;
	NSUUID* _laneGuidanceID;
	NSUUID* _junctionViewID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)navigationSessionDidStop:(id)arg1 ;
-(void)navigationSession:(id)arg1 shouldEndWithReason:(unsigned long long)arg2 ;
-(void)navigationSession:(id)arg1 didEnterPreArrivalStateForWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3 ;
-(void)navigationSession:(id)arg1 didArriveAtWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3 ;
-(void)navigationSession:(id)arg1 didResumeNavigatingFromWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3 ;
-(void)navigationSession:(id)arg1 didSuppressReroute:(id)arg2 ;
-(void)navigationSession:(id)arg1 didReroute:(id)arg2 withLocation:(id)arg3 withAlternateRoutes:(id)arg4 rerouteReason:(unsigned long long)arg5 ;
-(void)navigationSession:(id)arg1 didUpdateDestination:(id)arg2 ;
-(void)navigationSession:(id)arg1 didUpdateAlternateRoutes:(id)arg2 ;
-(void)navigationSession:(id)arg1 didAnnounce:(id)arg2 stage:(unsigned long long)arg3 ;
-(void)navigationSession:(id)arg1 updateSignsWithInfo:(id)arg2 ;
-(void)navigationSession:(id)arg1 showLaneDirections:(id)arg2 ;
-(void)navigationSession:(id)arg1 hideLaneDirectionsForId:(id)arg2 ;
-(void)navigationSession:(id)arg1 showJunctionView:(id)arg2 ;
-(void)navigationSession:(id)arg1 hideJunctionViewForId:(id)arg2 ;
-(id)initWithTraceRecorder:(id)arg1 ;
-(void)setLastMatchedLocation:(id)arg1 ;
-(void)_recordEvent:(long long)arg1 description:(id)arg2 ;
-(void)_recordDebugSettings;
-(void)_userGotOnRoute;
-(void)_userWentOffRoute;
-(id)_descriptionForWaypoint:(id)arg1 ;
-(id)_stringForSignDescription:(id)arg1 ;
-(void)recordStartNavigationWithRouteInfo:(id)arg1 navigationType:(int)arg2 isReconnecting:(BOOL)arg3 ;
@end
