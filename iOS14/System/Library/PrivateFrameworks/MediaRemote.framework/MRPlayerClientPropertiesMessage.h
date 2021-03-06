/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRProtocolMessage.h>

@class NSDate, MRPlayerPath;

@interface MRPlayerClientPropertiesMessage : MRProtocolMessage

@property (nonatomic,readonly) NSDate * lastPlayingDate; 
@property (nonatomic,readonly) MRPlayerPath * playerPath; 
-(MRPlayerPath *)playerPath;
-(unsigned long long)type;
-(id)initWithPlayerPath:(id)arg1 lastPlayingDate:(id)arg2 ;
-(NSDate *)lastPlayingDate;
@end

