/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <libobjc.A.dylib/IKPlayerEventMarshaling.h>

@class NSDate, NSString, NSDictionary;

@interface IKPlayerRequestSeekToDateEventUserInfo : NSObject <IKPlayerEventMarshaling> {

	BOOL _shouldSeek;
	NSDate* _requestedDate;
	NSDate* _currentDate;
	NSDate* _proposedDate;

}

@property (nonatomic,readonly) NSDate * requestedDate;                 //@synthesize requestedDate=_requestedDate - In the implementation block
@property (nonatomic,readonly) NSDate * currentDate;                   //@synthesize currentDate=_currentDate - In the implementation block
@property (nonatomic,readonly) BOOL shouldSeek;                        //@synthesize shouldSeek=_shouldSeek - In the implementation block
@property (nonatomic,readonly) NSDate * proposedDate;                  //@synthesize proposedDate=_proposedDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDictionary * properties; 
-(NSDictionary *)properties;
-(NSDate *)currentDate;
-(void)processReturnJSValue:(id)arg1 inContext:(id)arg2 ;
-(BOOL)shouldSeek;
-(id)initWithRequestDate:(id)arg1 currentDate:(id)arg2 ;
-(NSDate *)requestedDate;
-(NSDate *)proposedDate;
@end
