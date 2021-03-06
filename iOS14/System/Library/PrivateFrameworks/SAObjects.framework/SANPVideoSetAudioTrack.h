/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SANPVideoSetAudioTrack : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * desiredOptionId; 
@property (nonatomic,copy) NSString * languageOptionChangeUserSetting; 
+(id)setAudioTrack;
+(id)setAudioTrackWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)desiredOptionId;
-(void)setDesiredOptionId:(NSString *)arg1 ;
-(NSString *)languageOptionChangeUserSetting;
-(void)setLanguageOptionChangeUserSetting:(NSString *)arg1 ;
@end

