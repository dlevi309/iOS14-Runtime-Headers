/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class NSDictionary;


@protocol INPlayMediaIntentResponseExport <NSObject,JSExport>
@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) NSDictionary * nowPlayingInfo; 
@required
-(void)setNowPlayingInfo:(id)arg1;
-(NSDictionary *)nowPlayingInfo;
-(long long)code;

@end

