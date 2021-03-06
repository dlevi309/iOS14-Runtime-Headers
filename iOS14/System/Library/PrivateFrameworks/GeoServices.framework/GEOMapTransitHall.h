/*
* Generated on Thursday, January 14, 2021 at 2:20:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol GEOMapTransitHall <GEOMapTransitPoint>
@property (nonatomic,readonly) unsigned long long stationID; 
@required
-(unsigned long long)stationID;
-(id)findStops:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2;
-(id)findStation:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2;

@end

