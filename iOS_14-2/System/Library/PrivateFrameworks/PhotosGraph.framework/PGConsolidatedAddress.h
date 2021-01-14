/*
* Generated on Thursday, January 14, 2021 at 2:25:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PhotosGraph-Structs.h>
#import <libobjc.A.dylib/CLSTimeLocationTuple.h>

@class NSString, NSDate, PGGraphAddressNode, NSArray;

@interface PGConsolidatedAddress : NSObject <CLSTimeLocationTuple> {

	PGGraphAddressNode* _addressNode;
	NSArray* _addressEdgesSortedByTime;
	NSDate* _startDate;
	double _duration;
	NSDate* _expandedStartDate;
	NSDate* _expandedEndDate;
	NSString* _timeLocationIdentifier;
	CLLocationCoordinate2D _centerCoordinates;

}

@property (nonatomic,readonly) PGGraphAddressNode * addressNode;                      //@synthesize addressNode=_addressNode - In the implementation block
@property (nonatomic,readonly) NSArray * addressEdgesSortedByTime;                    //@synthesize addressEdgesSortedByTime=_addressEdgesSortedByTime - In the implementation block
@property (nonatomic,readonly) CLLocationCoordinate2D centerCoordinates;              //@synthesize centerCoordinates=_centerCoordinates - In the implementation block
@property (nonatomic,readonly) double duration;                                       //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) NSString * timeLocationIdentifier;                     //@synthesize timeLocationIdentifier=_timeLocationIdentifier - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;                                    //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate; 
@property (nonatomic,readonly) CLLocationCoordinate2D coordinates; 
@property (nonatomic,readonly) NSDate * expandedStartDate;                            //@synthesize expandedStartDate=_expandedStartDate - In the implementation block
@property (nonatomic,readonly) NSDate * expandedEndDate;                              //@synthesize expandedEndDate=_expandedEndDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDate *)endDate;
-(NSDate *)startDate;
-(CLLocationCoordinate2D)coordinates;
-(NSString *)description;
-(unsigned long long)hash;
-(double)duration;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)timeLocationIdentifier;
-(NSDate *)expandedStartDate;
-(NSDate *)expandedEndDate;
-(id)initWithAddressNode:(id)arg1 addressEdgesSortedByTime:(id)arg2 centerCoordinates:(CLLocationCoordinate2D)arg3 ;
-(PGGraphAddressNode *)addressNode;
-(NSArray *)addressEdgesSortedByTime;
-(CLLocationCoordinate2D)centerCoordinates;
@end
