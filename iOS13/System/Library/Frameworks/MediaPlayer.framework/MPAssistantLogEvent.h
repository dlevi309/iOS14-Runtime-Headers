/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

@class NSString, NSMutableDictionary;


@protocol MPAssistantLogEvent <NSObject>
@property (nonatomic,readonly) NSString * eventName; 
@property (nonatomic,readonly) long long eventCode; 
@property (nonatomic,readonly) NSMutableDictionary * eventPayload; 
@required
-(NSString *)eventName;
-(long long)eventCode;
-(NSMutableDictionary *)eventPayload;

@end

