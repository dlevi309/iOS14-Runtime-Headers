/*
* Generated on Monday, March 1, 2021 at 2:35:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Assistant/Plugins/Podcasts.assistantBundle/Podcasts
*/

#import <SAObjects/SAMPSubscribeToPodcastCollection.h>
#import <libobjc.A.dylib/AFServiceCommand.h>

@class NSString;

@interface POSubscribeToPodcastCollection : SAMPSubscribeToPodcastCollection <AFServiceCommand>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_commandStatusForRemoteStatus:(unsigned)arg1 assistantError:(id)arg2 ;
-(id)_validate;
-(void)performWithCompletion:(/*^block*/id)arg1 serviceHelper:(id)arg2 ;
-(id)_subscribeRequestIdentifier;
@end

