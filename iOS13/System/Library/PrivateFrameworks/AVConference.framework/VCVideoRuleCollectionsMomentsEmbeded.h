/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/VCVideoRuleCollectionsMoments.h>

@protocol VCHardwareSettingsEmbeddedProtocol;
@interface VCVideoRuleCollectionsMomentsEmbeded : VCVideoRuleCollectionsMoments {

	id<VCHardwareSettingsEmbeddedProtocol> _hardwareSettings;

}
+(id)sharedInstance;
-(int)getMomentsCapabilities;
-(id)getMomentsVideoCodecs;
-(id)getMomentsImageTypes;
-(id)initWithHardwareSettings:(id)arg1 ;
-(BOOL)isSupportedDeviceClass;
-(BOOL)isSupportedChipID;
@end

