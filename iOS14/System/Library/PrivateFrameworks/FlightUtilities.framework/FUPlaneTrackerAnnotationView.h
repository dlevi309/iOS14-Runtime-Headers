/*
* Generated on Thursday, January 14, 2021 at 2:27:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FlightUtilities.framework/FlightUtilities
*/

#import <FlightUtilities/FlightUtilities-Structs.h>
#import <MapKit/MKAnnotationView.h>
#import <libobjc.A.dylib/MKAnnotation.h>

@class NSString, NSMutableArray;

@interface FUPlaneTrackerAnnotationView : MKAnnotationView <MKAnnotation> {

	BOOL _showsPlane;
	NSMutableArray* _viewAddedBlock;
	CLLocationCoordinate2D _coordinate;

}

@property (assign,nonatomic) CLLocationCoordinate2D coordinate;                 //@synthesize coordinate=_coordinate - In the implementation block
@property (retain) NSMutableArray * viewAddedBlock;                             //@synthesize viewAddedBlock=_viewAddedBlock - In the implementation block
@property (assign,nonatomic) double currentProgress; 
@property (assign,nonatomic) CLLocationCoordinate2D startLocation; 
@property (assign,nonatomic) CLLocationCoordinate2D endLocation; 
@property (readonly) CLLocationCoordinate2D currentLocation; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)layerClass;
+(id)defaultAnotation;
-(CLLocationCoordinate2D)currentLocation;
-(id)init;
-(CLLocationCoordinate2D)endLocation;
-(CLLocationCoordinate2D)coordinate;
-(void)setEndLocation:(CLLocationCoordinate2D)arg1 ;
-(CLLocationCoordinate2D)startLocation;
-(void)didMoveToSuperview;
-(void)setStartLocation:(CLLocationCoordinate2D)arg1 ;
-(void)setCurrentProgress:(double)arg1 ;
-(double)currentProgress;
-(void)setCoordinate:(CLLocationCoordinate2D)arg1 ;
-(id)planeLayer;
-(void)setPlaneImage:(id)arg1 ;
-(NSMutableArray *)viewAddedBlock;
-(void)setViewAddedBlock:(NSMutableArray *)arg1 ;
-(void)setStartLatitude:(double)arg1 startLongitude:(double)arg2 endLatitude:(double)arg3 endLongitude:(double)arg4 ;
-(void)setShowsPlane:(BOOL)arg1 ;
-(void)notifyWhenIsVisibleWithBlock:(/*^block*/id)arg1 ;
@end

