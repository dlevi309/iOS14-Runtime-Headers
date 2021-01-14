/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/


@class NSString, NSDate, NSDictionary, EKStructuredLocation, NSURL;

@interface CALNTriggeredEventNotificationInfo : NSObject {

	BOOL _isAllDay;
	BOOL _hasSuggestedLocation;
	BOOL _eventHasAlarms;
	BOOL _allowsLocationAlerts;
	BOOL _forceDisplayOfNewTravelAdvisoryHypotheses;
	NSString* _title;
	NSString* _location;
	NSString* _locationWithoutPrediction;
	NSDate* _startDate;
	NSDate* _endDate;
	NSString* _eventID;
	NSString* _eventOccurrenceID;
	NSString* _eventObjectID;
	NSDictionary* _eventRepresentationDictionary;
	NSString* _legacyIdentifier;
	EKStructuredLocation* _preferredLocation;
	NSURL* _conferenceURL;
	NSURL* _mailtoURL;

}

@property (nonatomic,copy,readonly) NSString * title;                                          //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * location;                                       //@synthesize location=_location - In the implementation block
@property (nonatomic,copy,readonly) NSString * locationWithoutPrediction;                      //@synthesize locationWithoutPrediction=_locationWithoutPrediction - In the implementation block
@property (nonatomic,copy,readonly) NSDate * startDate;                                        //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * endDate;                                          //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) BOOL isAllDay;                                                  //@synthesize isAllDay=_isAllDay - In the implementation block
@property (nonatomic,copy,readonly) NSString * eventID;                                        //@synthesize eventID=_eventID - In the implementation block
@property (nonatomic,copy,readonly) NSString * eventOccurrenceID;                              //@synthesize eventOccurrenceID=_eventOccurrenceID - In the implementation block
@property (nonatomic,copy,readonly) NSString * eventObjectID;                                  //@synthesize eventObjectID=_eventObjectID - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * eventRepresentationDictionary;              //@synthesize eventRepresentationDictionary=_eventRepresentationDictionary - In the implementation block
@property (nonatomic,copy,readonly) NSString * legacyIdentifier;                               //@synthesize legacyIdentifier=_legacyIdentifier - In the implementation block
@property (nonatomic,readonly) EKStructuredLocation * preferredLocation;                       //@synthesize preferredLocation=_preferredLocation - In the implementation block
@property (nonatomic,copy,readonly) NSURL * conferenceURL;                                     //@synthesize conferenceURL=_conferenceURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * mailtoURL;                                         //@synthesize mailtoURL=_mailtoURL - In the implementation block
@property (nonatomic,readonly) BOOL hasSuggestedLocation;                                      //@synthesize hasSuggestedLocation=_hasSuggestedLocation - In the implementation block
@property (nonatomic,readonly) BOOL eventHasAlarms;                                            //@synthesize eventHasAlarms=_eventHasAlarms - In the implementation block
@property (nonatomic,readonly) BOOL allowsLocationAlerts;                                      //@synthesize allowsLocationAlerts=_allowsLocationAlerts - In the implementation block
@property (nonatomic,readonly) BOOL forceDisplayOfNewTravelAdvisoryHypotheses;                 //@synthesize forceDisplayOfNewTravelAdvisoryHypotheses=_forceDisplayOfNewTravelAdvisoryHypotheses - In the implementation block
-(NSString *)eventID;
-(NSDate *)endDate;
-(NSDictionary *)eventRepresentationDictionary;
-(BOOL)isAllDay;
-(BOOL)forceDisplayOfNewTravelAdvisoryHypotheses;
-(NSString *)eventOccurrenceID;
-(BOOL)allowsLocationAlerts;
-(NSString *)legacyIdentifier;
-(NSURL *)conferenceURL;
-(NSDate *)startDate;
-(NSString *)location;
-(id)description;
-(NSString *)locationWithoutPrediction;
-(EKStructuredLocation *)preferredLocation;
-(NSString *)title;
-(BOOL)hasSuggestedLocation;
-(id)initWithTitle:(id)arg1 location:(id)arg2 locationWithoutPrediction:(id)arg3 startDate:(id)arg4 endDate:(id)arg5 isAllDay:(BOOL)arg6 eventID:(id)arg7 eventOccurrenceID:(id)arg8 eventObjectID:(id)arg9 eventRepresentationDictionary:(id)arg10 legacyIdentifier:(id)arg11 preferredLocation:(id)arg12 conferenceURL:(id)arg13 mailtoURL:(id)arg14 hasSuggestedLocation:(BOOL)arg15 eventHasAlarms:(BOOL)arg16 allowsLocationAlerts:(BOOL)arg17 forceDisplayOfNewTravelAdvisoryHypotheses:(BOOL)arg18 ;
-(NSURL *)mailtoURL;
-(BOOL)eventHasAlarms;
-(NSString *)eventObjectID;
@end
