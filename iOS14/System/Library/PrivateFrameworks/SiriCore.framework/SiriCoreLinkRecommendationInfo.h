/*
* Generated on Thursday, January 14, 2021 at 2:28:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
*/


@class WRM_iRATProximityRecommendationLogging, WRM_iRATInterface;

@interface SiriCoreLinkRecommendationInfo : NSObject {

	BOOL _btPreference;
	BOOL _wifiPreference;
	double _timeTaken;
	WRM_iRATProximityRecommendationLogging* _linkRecommendationMetrics;
	WRM_iRATInterface* _iRATClient;

}
-(id)initWithQueue:(id)arg1 ;
-(void)setWiFiPreference:(BOOL)arg1 ;
-(BOOL)btPreference;
-(BOOL)wifiPreference;
-(void)setLinkMetrics:(id)arg1 ;
-(void)setBTPreference:(BOOL)arg1 ;
-(void)setTimeTaken:(double)arg1 ;
-(id)initWithPreferences:(BOOL)arg1 wifiPreference:(BOOL)arg2 timeTaken:(double)arg3 metrics:(id)arg4 ;
-(void)resetLinkMetrics;
-(double)timeTaken;
-(id)linkMetrics;
-(void)fetchLinkMetrics:(/*^block*/id)arg1 ;
@end

