/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@class NSString;

@interface CSOpportuneSpeakListenerDeviceManager : NSObject {

	NSString* _deviceId;

}

@property (nonatomic,copy) NSString * deviceId;              //@synthesize deviceId=_deviceId - In the implementation block
+(id)sharedManager;
-(NSString *)deviceId;
-(void)setDeviceId:(NSString *)arg1 ;
@end

