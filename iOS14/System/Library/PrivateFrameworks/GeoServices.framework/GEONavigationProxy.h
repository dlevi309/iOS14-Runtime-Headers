/*
* Generated on Thursday, January 14, 2021 at 2:20:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol GEOServerFormattedStepStringFormatter;
#import <GeoServices/GeoServices-Structs.h>
@class NSXPCConnection, NSString, GEOComposedRoute, GEOLocation, GEORouteMatch, NSData, NSArray, GEONameInfo, GEONavigationRouteSummary, GEONavigationRouteTransitSummary, GEONavigationGuidanceState;

@interface GEONavigationProxy : NSObject {

	NSXPCConnection* _navdConnection;
	int _navigationStartedToken;
	BOOL _hasNavigationStartedToken;
	NSString* _destinationName;
	GEOComposedRoute* _route;
	GEOLocation* _lastLocation;
	BOOL _locationUnreliable;
	GEORouteMatch* _routeMatch;
	NSString* _currentRoadName;
	BOOL _guidancePromptsEnabled;
	NSData* _activeRouteDetailsData;
	NSArray* _rideSelections;
	unsigned long long _stepIndex;
	unsigned long long _displayedStepIndex;
	GEONameInfo* _stepNameInfo;
	GEOCoarseLocationLatLng _positionFromSign;
	GEOCoarseLocationLatLng _positionFromManeuver;
	GEOCoarseLocationLatLng _positionFromDestination;
	unsigned long long _announcementStage;
	unsigned long long _nextAnnouncementStage;
	double _timeUntilNextAnnouncement;
	GEONavigationRouteSummary* _routeSummary;
	GEONavigationRouteTransitSummary* _transitRouteSummary;
	GEONavigationGuidanceState* _guidanceState;
	int _navigationVoiceVolume;
	BOOL _isNavigatingInLowGuidance;
	BOOL _isConnectedToCarplay;
	id<GEOServerFormattedStepStringFormatter> _formatter;

}

@property (nonatomic,retain) id<GEOServerFormattedStepStringFormatter> formatter;              //@synthesize formatter=_formatter - In the implementation block
-(void)setRoute:(id)arg1 ;
-(void)setIsConnectedToCarplay:(BOOL)arg1 ;
-(void)setGuidancePromptsEnabled:(BOOL)arg1 ;
-(void)setRouteMatch:(id)arg1 ;
-(id<GEOServerFormattedStepStringFormatter>)formatter;
-(void)setNavigationState:(int)arg1 ;
-(void)_clearState;
-(void)setDisplayedStepIndex:(unsigned long long)arg1 ;
-(void)stop;
-(void)setFormatter:(id<GEOServerFormattedStepStringFormatter>)arg1 ;
-(void)setStepIndex:(unsigned long long)arg1 ;
-(void)setLocationUnreliable:(BOOL)arg1 ;
-(void)setCurrentRoadName:(id)arg1 ;
-(void)setDestinationName:(id)arg1 ;
-(void)setLastLocation:(id)arg1 ;
-(void)_closeNavdConnection;
-(void)_sendRouteSummary;
-(void)_sendGuidanceState;
-(void)_openNavdConnection;
-(void)_sendCurrentRoadName;
-(void)_sendRideSelections;
-(void)_sendActiveRouteDetailsData;
-(void)_sendStepIndex;
-(void)_sendStepNameInfo;
-(void)_sendPositionFromSign;
-(void)_sendPositionFromManeuver;
-(void)_sendPositionFromDestination;
-(void)_sendNavigationVoiceVolume;
-(void)_sendTransitSummary;
-(void)startWithDestinationName:(id)arg1 ;
-(void)setStepNameInfo:(id)arg1 ;
-(void)setPositionFromSign:(GEOCoarseLocationLatLng)arg1 ;
-(void)setNavigationSessionState:(unsigned long long)arg1 transportType:(int)arg2 navigationType:(int)arg3 ;
-(void)setActiveRouteDetailsData:(id)arg1 ;
-(void)setClusteredSectionSelectedRideFromRoute:(id)arg1 ;
-(void)setPositionFromManeuver:(GEOCoarseLocationLatLng)arg1 ;
-(void)setAnnouncementStage:(unsigned long long)arg1 ;
-(void)setPositionFromDestination:(GEOCoarseLocationLatLng)arg1 ;
-(void)setNextAnnouncementStage:(unsigned long long)arg1 timeUntilNextAnnouncement:(double)arg2 ;
-(void)setNavigationVoiceVolume:(int)arg1 ;
-(void)setIsNavigatingInLowGuidance:(BOOL)arg1 ;
-(void)triggerHaptics:(int)arg1 ;
-(void)dealloc;
@end

