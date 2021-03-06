/*
* Generated on Thursday, January 14, 2021 at 2:22:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class CLLocation;

@interface PLLocationOfInterestLocation : NSObject {

	CLLocation* _location;
	double _uncertainty;

}

@property (nonatomic,readonly) CLLocation * location;              //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) double uncertainty;                 //@synthesize uncertainty=_uncertainty - In the implementation block
-(CLLocation *)location;
-(id)initWithLocation:(id)arg1 uncertainty:(double)arg2 ;
-(double)distanceFromLocation:(id)arg1 withTypeRadius:(double)arg2 ;
-(id)description;
-(double)uncertainty;
@end

