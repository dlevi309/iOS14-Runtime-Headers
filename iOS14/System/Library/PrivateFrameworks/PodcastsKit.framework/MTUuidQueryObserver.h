/*
* Generated on Thursday, January 14, 2021 at 2:28:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
*/

#import <PodcastsKit/MTBaseQueryObserver.h>

@class NSSet, NSArray;

@interface MTUuidQueryObserver : MTBaseQueryObserver {

	NSSet* _uuidSet;
	NSArray* _uuidOrder;

}

@property (nonatomic,retain) NSSet * uuidSet;                  //@synthesize uuidSet=_uuidSet - In the implementation block
@property (nonatomic,retain) NSArray * uuidOrder;              //@synthesize uuidOrder=_uuidOrder - In the implementation block
-(void)startObserving;
-(void)controllerDidChangeContent:(id)arg1 ;
-(void)setUuidSet:(NSSet *)arg1 ;
-(NSSet *)uuidSet;
-(void)notifyObservers;
-(id)addResultsChangedHandler:(/*^block*/id)arg1 ;
-(NSArray *)uuidOrder;
-(void)setUuidOrder:(NSArray *)arg1 ;
@end

